//
//  BaseViewController.m
//  classroomonline
//
//  Created by Luong Le Hoang on 4/9/16.
//  Copyright © 2016 metroteam. All rights reserved.
//

#import "BaseViewController.h"
#import "ROSession.h"
#import "ClassCategory.pb.h"
#import "ClassroomInfo.pb.h"
#import "Rpc.h"
#import "RoomViewController.h"
#import "TestRoomInfo.pb.h"
#import "Utils.h"

#define Session [ROSession instance]

@interface BaseViewController () <UIAlertViewDelegate>{
    NSString *receivedRoomId;
    NSString *target;
}

@end

@implementation BaseViewController {
    
}

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
     [self.navigationController setNavigationBarHidden:YES];
    
    
    [[Rpc instance] setOnOpenClassSuccess:^(ClassOnlineAction *action){
        
        int type = [action.actiontype intValue];
        switch (type) {
            case ClassOnlineActionActionTypeOpenClass:{
                [Session.arrayCurrentOpen addObject:action.classid];
                [Utils showAlertTitle:app_name content:[NSString stringWithFormat:@"Your %@ just open a class", action.sourceusername]];
            }
                break;
            case ClassOnlineActionActionTypeRequestJoint:{
                if ([action.targetusername isEqualToString:Session.user.username]) {
                    receivedRoomId = action.classid;
                    target = action.sourceusername;
                    // thay
                    UIAlertView *message = [[UIAlertView alloc] initWithTitle:app_name
                                                                      message:[NSString stringWithFormat:@"%@ request to join your room", action.sourceusername]
                                                                     delegate:self
                                                            cancelButtonTitle:@"OK"
                                                            otherButtonTitles:@"Cancel", nil];
                    [message setTag:111];
                    [message show];
                }
            }
                break;
            case ClassOnlineActionActionTypeAcceptJoint:{
                if ([action.targetusername isEqualToString:Session.user.username]) {
                    [ROSession instance].currentClassId = [action.classid intValue];
                    Session.teacher = action.sourceusername;
                    RoomViewController *controller = [[RoomViewController alloc] initWithNibName:NSStringFromClass([RoomViewController class]) bundle:nil];
                    [self.navigationController pushViewController:controller animated:YES];
                }
            }
                break;
            case ClassOnlineActionActionTypeRequestDrawBoard:{
                if ([Session.teacher isEqualToString:Session.user.username]) {
                    UIAlertView *message = [[UIAlertView alloc] initWithTitle:app_name
                                                                      message:[NSString stringWithFormat:@"%@ request to use board!", action.sourceusername]
                                                                     delegate:self
                                                            cancelButtonTitle:@"OK"
                                                            otherButtonTitles:@"Cancel", nil];
                    [message setTag:112];
                    [message show];
                }
                else if(Session.isDrawable){
                    UIAlertView *message = [[UIAlertView alloc] initWithTitle:app_name
                                                                      message:@"Your teacher grant draw board premission"
                                                                     delegate:self
                                                            cancelButtonTitle:@"OK"
                                                            otherButtonTitles:@"Cancel", nil];
                    [message show];
                }
                
            }
                break;
            case ClassOnlineActionActionTypeAcceptDrawBoard:{
                if ([Session.user.username isEqualToString:action.targetusername]) {
                    Session.isDrawable = YES;
                    [self notifyAcceptDraw:YES];
                }
            }
                break;
            default:
                break;
        }
        
    }];
    
}

- (void)notifyAcceptDraw:(BOOL)draw{
    // for implement
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

#pragma

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex{
    if (alertView.tag == 111) {
        if (buttonIndex == 0) {
            [[Rpc instance] requestOpenClassId:receivedRoomId sourceUser:Session.user.username targetUser:target type:@"4"];
        }
    }
    else if (alertView.tag == 112) {
        if (buttonIndex == 0) {
            Session.isDrawable = NO;
            [self notifyAcceptDraw:NO];
            [[Rpc instance] requestOpenClassId:receivedRoomId sourceUser:Session.user.username targetUser:target type:@"6"];
        }
    }
}

@end
