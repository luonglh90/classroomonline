//
//  HomeViewController.m
//  classroomonline
//
//  Created by Luong Le Hoang on 4/9/16.
//  Copyright © 2016 metroteam. All rights reserved.
//

#import "HomeViewController.h"
#import "DashboardViewController.h"

@interface HomeViewController ()

@end

@implementation HomeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
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
    DashboardViewController *dashboard = [[DashboardViewController alloc] initWithNibName:NSStringFromClass([DashboardViewController class]) bundle:nil];
    [self.navigationController pushViewController:dashboard animated:YES];
}

- (IBAction)actionSignUp:(id)sender {
    // Open pop-up sign up
}
@end
