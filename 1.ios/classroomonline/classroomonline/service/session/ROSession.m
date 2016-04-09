//
//  ROSession.m
//  classroomonline
//
//  Created by Luong Le Hoang on 4/9/16.
//  Copyright © 2016 metroteam. All rights reserved.
//

#import "ROSession.h"

@implementation ROSession{
    
}

+ (instancetype)instance
{
    static ROSession *rpc = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        if (!rpc) {
            rpc = [[ROSession alloc] init];
            rpc.arrayCurrentOpen = [NSMutableArray new];
        }
    });
    return rpc;
}

@end
