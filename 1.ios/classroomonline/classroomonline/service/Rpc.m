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
#import "ResponseLogin.pb.h"

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
    [RequestLoginRoot initialize];
    RequestLogin *request = [[[[RequestLogin builder] setUsername:name] setPassword:pass] build];
    IpcMessageBuilder* ipc = [[IpcMessage builder] setMsgId:REQUEST_LOGIN_MSG] ;
    [ipc setExtension:[RequestLogin message] value:request];
    [self.webSocket send:[[ipc build] data]];
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
//#define USER_BASE   100
//#define USER_MSG    (USER_BASE + 1)
//#define TEACHER_MSG (USER_BASE + 2)
//#define REQUEST_LOGIN_MSG (USER_BASE + 3)
//#define RESPONSE_LOGIN_MSG (USER_BASE + 4)
//    
//#define CLASS_BASE 200
//#define CATEGORY_MSG (CLASS_BASE + 1)
//#define CALSSROOM_MSG (CLASS_BASE + 2)
    switch (ipc.msgId) {
        // USER_BASE
        case USER_MSG:{
            
        }
            break;
        case TEACHER_MSG:{
            
        }
            break;
        case RESPONSE_LOGIN_MSG:{
            [ResponseLoginRoot initialize];
            ResponseLogin *response = [[ipc builder] getExtension:[ResponseLogin message]];
            if (response.status == EnumsResponseLoginEnumsSuccess && self.onSignInSuccess) {
                self.onSignInSuccess(response.username);
            }
            else if (self.onSignInFail){
                self.onSignInFail();
            }
        }
            break;
        // CLASS BASE
        case CATEGORY_MSG:{
            
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
