//
//  Rpc.h
//  classroomonline
//
//  Created by Luong Le Hoang on 4/9/16.
//  Copyright © 2016 metroteam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRWebSocket.h"
#import "UserInit.pb.h"
#import "User.pb.h"
#import "ClassCategory.pb.h"
#import "ClassroomInfo.pb.h"

@interface Rpc : NSObject <SRWebSocketDelegate>{
    
}
@property (strong, nonatomic) NSString *host;
@property (assign, nonatomic) NSInteger port;
// block
@property (nonatomic, copy) void(^onSocketConnected)();
@property (nonatomic, copy) void(^onSocketConnectFail)();
@property (nonatomic, copy) void(^onSignInSuccess)(NSString *name);
@property (nonatomic, copy) void(^onSignInFail)();
@property (nonatomic, copy) void(^onResponseUserInit)(User *user, NSArray *categories);
@property (nonatomic, copy) void(^onResponseListClasses)(int categoryId, NSArray *listClasses);


+ (instancetype)instance;

- (void)connectSocket;
- (void)requestSigninWithName:(NSString*)name pass:(NSString*)pass;
- (void)requestListClassesWithCategoryId:(int)cId;

@end
