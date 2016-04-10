//
//  SmoothedBIView.h
//  FreehandDrawingTut
//
//  Created by A Khan on 12/10/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseDrawView.h"

@interface SmoothedBIView : BaseDrawView

- (void)drawListPoints:(NSArray*)points lineId:(int)line;

@end
