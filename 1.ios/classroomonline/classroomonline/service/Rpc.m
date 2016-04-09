//
//  Rpc.m
//  classroomonline
//
//  Created by Luong Le Hoang on 4/9/16.
//  Copyright © 2016 metroteam. All rights reserved.
//

#import "Rpc.h"
#import "RequestLogin.pb.h"
#import "ipcmessagetype.h"
#import "LoginStatus.pb.h"
#import "RequestViewCategoryDetail.pb.h"
#import "ClassroomInfoOfCategory.pb.h"

@interface Rpc(){
}
@property (strong, nonatomic) SRWebSocket *webSocket;

@end


@implementation Rpc

+ (instancetype)instance
{
    static Rpc *rpc = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        if (!rpc) {
            rpc = [[Rpc alloc] init];
        }
    });
    return rpc;
}

- (instancetype)init
{
    if (self = [super init]) {
        [IpcMessageRoot initialize];
        [RequestLoginRoot initialize];
        [LoginStatusRoot initialize];
        [UserInitRoot initialize];
        [UserRoot initialize];
        [ClassCategoryRoot initialize];
        [RequestViewCategoryDetailRoot initialize];
    }
    return self;
}

- (void)connectSocket {
    // API Host
    NSString *host = [[[NSBundle mainBundle] infoDictionary] valueForKey:@"APIHost"];
    UInt32 port = [[[NSBundle mainBundle] objectForInfoDictionaryKey:@"APIPort"] intValue];
    if ([self isConnected]) {
        [self.webSocket close];
        self.webSocket = nil;
    }
    self.webSocket = [[SRWebSocket alloc] initWithURL:[NSURL URLWithString:[NSString stringWithFormat:@"%@:%ld", host, (long)port]] protocols:nil];
    [self.webSocket setDelegate:self];
    [self.webSocket open];
    NSLog(@"Connect to %@ \t %ld", host, (long)port);
}

- (BOOL)isConnected{
    return (self.webSocket && [self.webSocket readyState] == SR_OPEN);
}

#pragma mark -
#pragma mark - Sign in methods
// Login
- (void)requestSigninWithName:(NSString*)name pass:(NSString*)pass{
    
    RequestLogin *request = [[[[RequestLogin builder] setUsername:name] setPassword:pass] build];
    IpcMessageBuilder* ipc = [[IpcMessage builder] setMsgId:REQUEST_LOGIN_MSG] ;
    [ipc setExtension:[RequestLogin message] value:request];
    
    NSData *data = [[ipc build] data];
    
    [self.webSocket send:data];
    
}

// Request get list classes in a category
- (void)requestListClassesWithCategoryId:(int)cId{
    RequestViewCategoryDetail *request = [[[RequestViewCategoryDetail builder] setCateId:cId] build];
    IpcMessageBuilder* ipc = [[IpcMessage builder] setMsgId:REQUEST_VIEW_CATEGORY_DETAIL_MSG] ;
    [ipc setExtension:[RequestViewCategoryDetail message] value:request];
    NSData *data = [[ipc build] data];
    [self.webSocket send:data];
}

#pragma mark -
#pragma mark - SRWebSocket delegate

- (void)webSocket:(SRWebSocket *)webSocket didReceiveMessage:(id)message{
    [self receivedResponseData:message];
}

- (void)webSocketDidOpen:(SRWebSocket *)webSocket{
    NSLog(@"Socket connected");
    if (self.onSocketConnected) {
        self.onSocketConnected();
    }
}

- (void)webSocket:(SRWebSocket *)webSocket didFailWithError:(NSError *)error{
    NSLog(@"Socket connect FAIL");
    if (self.onSocketConnectFail) {
        self.onSocketConnectFail();
    }
    self.onSocketConnectFail = nil;
}

- (void)webSocket:(SRWebSocket *)webSocket didCloseWithCode:(NSInteger)code reason:(NSString *)reason wasClean:(BOOL)wasClean{
    if (self.onSocketConnectFail) {
        self.onSocketConnectFail();
    }
    self.onSocketConnectFail = nil;
}

- (void)webSocket:(SRWebSocket *)webSocket didReceivePong:(NSData *)pongPayload{
    
}

#pragma mark - Received response
// ------------------------------------------------- Handle response data ---------------------------------------------
- (void)receivedResponseData:(NSData *)message{
    if (!message) {
        NSLog(@"webSocket Response NIL");
        return;
    }
    IpcMessage *ipc = [IpcMessage parseFromData:message];
    NSLog(@"%@", ipc);
    switch (ipc.msgId) {
        // USER_BASE
        case USER_MSG:{
            
        }
            break;
        case TEACHER_MSG:{
            
        }
            break;
        case RESPONSE_LOGIN_MSG:{
//            id<PBExtensionField> field = [ResponseLogin message];
//            ipc = [IpcMessage parseFromData:message extensionRegistry:[ResponseLoginRoot extensionRegistry]];
//            ResponseLogin *response = [ipc getExtension:field];
//            if (response.status == 0 && self.onSignInSuccess) {
//                self.onSignInSuccess(response.username);
//            }
//            else if (self.onSignInFail){
//                self.onSignInFail();
//            }
            
            id<PBExtensionField> field = [LoginStatus message];
            ipc = [IpcMessage parseFromData:message extensionRegistry:[LoginStatusRoot extensionRegistry]];
            LoginStatus *response = [ipc getExtension:field];
            if (response.stt == 0 && self.onSignInSuccess) {
                self.onSignInSuccess(response.name);
            }
            else if (self.onSignInFail){
                self.onSignInFail();
            }
            
            self.onSignInSuccess = nil;
            self.onSignInFail = nil;
        }
            break;
        case USER_INIT_MSG:{
            id<PBExtensionField> field = [UserInit message];
            ipc = [IpcMessage parseFromData:message extensionRegistry:[UserInitRoot extensionRegistry]];
            UserInit *response = [ipc getExtension:field];
            if (self.onResponseUserInit) {
                self.onResponseUserInit(response.userinfo, response.categories);
            }
            self.onResponseUserInit = nil;
        }
            break;
        // CLASS BASE
        case CLASSES_OF_CATEGORY:{
            // Response of list classes
            id<PBExtensionField> field = [ClassroomInfoOfCategory message];
            ipc = [IpcMessage parseFromData:message extensionRegistry:[ClassroomInfoOfCategoryRoot extensionRegistry]];
            ClassroomInfoOfCategory *response = [ipc getExtension:field];
            if (self.onResponseListClasses) {
                self.onResponseListClasses(response.cateId, response.listOfClasses);
            }
            self.onResponseListClasses = nil;
        }
            break;
        case CALSSROOM_MSG:{
            
        }
            break;
        default:
            break;
    }
}


@end
