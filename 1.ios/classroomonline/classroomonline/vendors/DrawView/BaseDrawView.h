//
//  BaseDrawView.h
//  classroomonline
//
//  Created by Luong Le Hoang on 4/10/16.
//  Copyright © 2016 metroteam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BaseDrawView : UIView{
    
}
@property (nonatomic, assign) BOOL isDragEnabled;
@property (nonatomic, strong) NSMutableArray *arrayLines;

@end
