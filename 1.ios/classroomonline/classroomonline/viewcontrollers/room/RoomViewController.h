//
//  RoomViewController.h
//  classroomonline
//
//  Created by Luong Le Hoang on 4/9/16.
//  Copyright © 2016 metroteam. All rights reserved.
//

#import "BaseViewController.h"
#import "SmoothedBIView.h"

@interface RoomViewController : BaseViewController{
    
}
@property (weak, nonatomic) IBOutlet SmoothedBIView *viewDraw;
@property (weak, nonatomic) IBOutlet UIView *viewControl;
@property (weak, nonatomic) IBOutlet UIButton *btnErase;
@property (weak, nonatomic) IBOutlet UIButton *btnPencil;
@property (weak, nonatomic) IBOutlet UIButton *btnCurosr;
@property (weak, nonatomic) IBOutlet UIButton *btnRing;


- (IBAction)actionPressedButton:(id)sender;
- (IBAction)actionRing:(id)sender;

@end
