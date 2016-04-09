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


@interface Rpc(){
}
@property (strong, nonatomic) SRWebSocket *webSocket;

@end


@implementation Rpc

+ (instancetype)sharedInstance
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

- (void)requestSigninWithName:(NSString*)name pass:(NSString*)pass{
    [RequestLoginRoot initialize];
    RequestLogin *request = [[[[RequestLogin builder] setUsername:name] setPassword:pass] build];
    IpcMessageBuilder* ipc = [[IpcMessage builder] setMsgId:REQUEST_LOGIN_MSG] ;
    [ipc setExtension:[RequestLogin message] value:request];
    
    
//    [ipc addExtension:[RequestLogin message] value:[request data]];
    
    
    
//
//    IpcMessage *ipc = [[IpcMessage alloc] init];
//    [ipc setex
//    
//    
//    
//    Foo *fooMsg = [[Foo alloc] init];
//    
//    // Set the single field extensions
//    [fooMsg setExtension:[Test2Root foo] value:@5];
//    NSAssert([fooMsg hasExtension:[Test2Root foo]]);
//    NSAssert([[fooMsg getExtension:[Test2Root foo]] intValue] == 5);
//    
//    // Add two things to the repeated extension:
//    [fooMsg addExtension:[Test2Root repeatedFoo] value:@1];
//    [fooMsg addExtension:[Test2Root repeatedFoo] value:@2];
//    NSAssert([fooMsg hasExtension:[Test2Root repeatedFoo]]);
//    NSAssert([[fooMsg getExtension:[Test2Root repeatedFoo]] count] == 2);
//    
//    // Clearing
//    [fooMsg clearExtension:[Test2Root foo]];
//    [fooMsg clearExtension:[Test2Root repeatedFoo]];
//    NSAssert(![fooMsg hasExtension:[Test2Root foo]]);
//    NSAssert(![fooMsg hasExtension:[Test2Root repeatedFoo]]);
    
    
//    [IpcMessage builder] set
    
    
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
}


@end
