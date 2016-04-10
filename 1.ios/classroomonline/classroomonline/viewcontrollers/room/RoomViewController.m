//
//  RoomViewController.m
//  classroomonline
//
//  Created by Luong Le Hoang on 4/9/16.
//  Copyright © 2016 metroteam. All rights reserved.
//

#import "RoomViewController.h"
#import "ROSession.h"
#import "Rpc.h"
#import "BoardDrawLine.pb.h"
#import "BoardErase.pb.h"

@interface RoomViewController ()

@end

@implementation RoomViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.btnErase.layer setCornerRadius:5];
    [self.btnPencil.layer setCornerRadius:5];
    [self.viewControl.layer setCornerRadius:5];
    if ([ROSession instance].isDrawable) {
        [self actionPressedButton:self.btnPencil];
    }
    else{
        [self disableAllControl];
    }
}

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    [self.navigationController setNavigationBarHidden:NO];
    [[Rpc instance] setOnResponseDrawLine:^(BoardDrawLine *draw){
        [self.viewDraw drawListPoints:draw.points];
    }];
}

- (void)viewWillDisappear:(BOOL)animated{
    [super viewWillDisappear:animated];
    [ROSession instance].isDrawable = NO;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)actionPressedButton:(id)sender {
    UIButton *button = (UIButton*)sender;
    if (button == self.btnErase) {
        [self.btnErase setEnabled:NO];
        [self.btnErase setSelected:YES];
        [self.btnPencil setEnabled:YES];
        [self.btnPencil setSelected:NO];
        [self.btnCurosr setEnabled:YES];
        [self.btnCurosr setSelected:NO];
        [self.viewDraw setIsDragEnabled:NO];
    }
    else if (button == self.btnPencil) {
        [self.btnErase setEnabled:YES];
        [self.btnErase setSelected:NO];
        [self.btnPencil setEnabled:NO];
        [self.btnPencil setSelected:YES];
        [self.btnCurosr setEnabled:YES];
        [self.btnCurosr setSelected:NO];
        [self.viewDraw setIsDragEnabled:NO];
    }
    if (button == self.btnCurosr) {
        [self.btnErase setEnabled:YES];
        [self.btnErase setSelected:NO];
        [self.btnPencil setEnabled:YES];
        [self.btnPencil setSelected:NO];
        [self.btnCurosr setEnabled:NO];
        [self.btnCurosr setSelected:YES];
        [self.viewDraw setIsDragEnabled:YES];
    }
}

- (void)disableAllControl{
    [self.btnErase setEnabled:NO];
    [self.btnErase setSelected:NO];
    [self.btnPencil setEnabled:NO];
    [self.btnPencil setSelected:NO];
    [self.btnCurosr setEnabled:NO];
    [self.btnCurosr setSelected:YES];
    [self.viewDraw setIsDragEnabled:YES];
}

@end
