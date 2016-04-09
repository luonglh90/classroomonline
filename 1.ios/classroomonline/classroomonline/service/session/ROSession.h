//
//  ROSession.h
//  classroomonline
//
//  Created by Luong Le Hoang on 4/9/16.
//  Copyright © 2016 metroteam. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ROSession : NSObject{
    
}
@property (nonatomic, assign) BOOL isSignedIn;
@property (nonatomic, strong) NSString *username;
@property (nonatomic, strong) NSString *password;

+ (instancetype)instance;

@end
