//
//  HomeViewController.m
//  classroomonline
//
//  Created by Luong Le Hoang on 4/9/16.
//  Copyright © 2016 metroteam. All rights reserved.
//

#import "HomeViewController.h"
#import "DashboardViewController.h"
#import "SignUpViewController.h"
#import "Rpc.h"
#import "ROSession.h"
#import "Utils.h"

@interface HomeViewController ()

@end

@implementation HomeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.btnSignIn.layer.cornerRadius = 5;
    self.btnSignUp.layer.cornerRadius = 5;
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
- (IBAction)actionSignIn:(id)sender {
    NSString *username = self.txtName.text;
    NSString *pass = self.txtPass.text;
    
    if (!username || ![username isEqualToString:@""] || !pass || ![pass isEqualToString:@""]) {
        [Utils showAlertTitle:app_name content:signin_empty_name_pass];
        return;
    }
    [ROAppDelegate showLoading];
    [[Rpc instance] connectSocket];
    [[Rpc instance] setOnSocketConnected:^(){
        [[Rpc instance] requestSigninWithName:@"teacher1" pass:@"123456"];
    }];
    [[Rpc instance] setOnSocketConnectFail:^(){
        [ROAppDelegate hideLoading];
        [Utils showAlertTitle:app_name content:socket_connect_fail];
    }];
    [[Rpc instance] setOnSignInSuccess:^(NSString *name){
        // Waiting for UserInit
    }];
    [[Rpc instance] setOnSignInFail:^(){
        [ROAppDelegate hideLoading];
        [Utils showAlertTitle:app_name content:signin_fail];
    }];
    [[Rpc instance] setOnResponseUserInit:^(User *user, NSArray *categories){
        // handle user info and categories info
        [[ROSession instance] setUser:user];
        [[ROSession instance] setCategories:categories];
        // hide loading
        [ROAppDelegate hideLoading];
        // Transition screen
        DashboardViewController *dashboard = [[DashboardViewController alloc] initWithNibName:NSStringFromClass([DashboardViewController class]) bundle:nil];
        [self.navigationController pushViewController:dashboard animated:YES];
        
    }];
}

- (IBAction)actionSignUp:(id)sender {
    // Open pop-up sign up
//    SignUpViewController *signup = [[SignUpViewController alloc] initWithNibName:NSStringFromClass([SignUpViewController class]) bundle:nil];
//    [signup showInView:ROAppDelegate.window animated:YES];
}

@end
