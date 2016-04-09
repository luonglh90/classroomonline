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
#import "ResponseLogin.pb.h"
#import "ClassOnlineAction.pb.h"
#import "IpcMessage.pb.h"

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
    IpcMessage *message = [[[[IpcMessage builder] setId:REQUEST_LOGIN_MSG] setPayloadData:[request data]] build];
    [self.webSocket send:[message data]];
}

// Request get list classes in a category
- (void)requestListClassesWithCategoryId:(NSString*)cId{
    RequestViewCategoryDetail *request = [[[RequestViewCategoryDetail builder] setCateId:cId] build];
    IpcMessage *message = [[[[IpcMessage builder] setId:REQUEST_VIEW_CATEGORY_DETAIL_MSG] setPayloadData:[request data]] build];
    [self.webSocket send:[message data]];
}

// Request open class
- (void)requestOpenClassId:(NSString*)classId sourceUser:(NSString*)source targetUser:(NSString*)target type:(NSString*)type{
    ClassOnlineAction *request = [[[[[[ClassOnlineAction builder] setClassid:classId] setSourceusername:source] setTargetusername:target] setActiontype:type] build];
    IpcMessage *message = [[[[IpcMessage builder] setId:CLASS_ONLINE_ACTION_MSG] setPayloadData:[request data]] build];
    [self.webSocket send:[message data]];
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
    switch (ipc.id) {
        // USER_BASE
        case USER_MSG:{
            
        }
            break;
        case TEACHER_MSG:{
            
        }
            break;
        case RESPONSE_LOGIN_MSG:{
            ResponseLogin *response = [ResponseLogin parseFromData:ipc.payloadData];
            if ([response.status intValue] == 0 && self.onSignInSuccess) {
                self.onSignInSuccess(response.username);
            }
            else if (self.onSignInFail){
                self.onSignInFail();
            }
            self.onSignInSuccess = nil;
            self.onSignInFail = nil;
        }
            break;
        case USER_INIT_MSG:{
            UserInit *response = [UserInit parseFromData:ipc.payloadData];
            if (self.onResponseUserInit) {
                self.onResponseUserInit(response.userinfo, response.categories, response.ownerclass);
            }
            self.onResponseUserInit = nil;
        }
            break;
        // CLASS BASE
        case CLASSES_OF_CATEGORY:{
            // Response of list classes
            ClassroomInfoOfCategory *response = [ClassroomInfoOfCategory parseFromData:ipc.payloadData];
            if (self.onResponseListClasses) {
                self.onResponseListClasses(response.cateid, response.listOfClasses);
            }
            self.onResponseListClasses = nil;
        }
            break;
        case CALSSROOM_MSG:{
            
        }
            break;
        case CLASS_ONLINE_ACTION_MSG:{
            // Response of list classes
            ClassOnlineAction *response = [ClassOnlineAction parseFromData:ipc.payloadData];
            if (self.onOpenClassSuccess) {
                self.onOpenClassSuccess(response);
            }
        }
            break;
        default:
            break;
    }
}


@end
