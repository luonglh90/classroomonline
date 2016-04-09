//
//  ROSession.h
//  classroomonline
//
//  Created by Luong Le Hoang on 4/9/16.
//  Copyright © 2016 metroteam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.pb.h"

@interface ROSession : NSObject{
    
}
@property (nonatomic, assign) BOOL isSignedIn;
@property (nonatomic, strong) User *user;
@property (nonatomic, strong) NSArray *categories;

+ (instancetype)instance;

@end
