//
//  DashboardViewController.m
//  classroomonline
//
//  Created by Luong Le Hoang on 4/9/16.
//  Copyright © 2016 metroteam. All rights reserved.
//

#import "DashboardViewController.h"
#import "ROSession.h"
#import "ClassCategory.pb.h"
#import "ClassroomInfo.pb.h"
#import "Rpc.h"
#import "RoomViewController.h"

#define Session [ROSession instance]

@interface DashboardViewController (){
    
}
@property (nonatomic, strong) NSArray *arrayCurrentClasses;

@end

@implementation DashboardViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.tableClasses.hidden = YES;
}

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    [self.navigationController setNavigationBarHidden:YES];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)generateDummyData{
//    2, 1, 'Math class 1', 'We fall in love of Math', '', 1460205353, 1460206353, 'teacher1'
//    [ClassroomInfoRoot initialize];
//    ClassroomInfo *class = [[[[[[[ClassroomInfo builder] setUid:@"2"] setCateid:@"1"] setName:@"We fall in love of Math"] setTimeopen:@"1460205353"] setTimeclose:@"1460206353"] build];
    self.arrayCurrentClasses = [NSArray arrayWithObjects:@"", nil];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

#pragma mark - Table delegate
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    if (tableView.tag == 1) {
        // Table categories
        return Session.categories.count + (Session.arrayMyClasses.count > 0 ? 1 : 0);
    }
    else if (self.arrayCurrentClasses && tableView.tag == 2){
        return self.arrayCurrentClasses.count;
    }
    return 0;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    if (tableView.tag == 1) {
        // table categories
        return 70;
    }
    return 70;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    UITableViewCell *cell;
    if (tableView.tag == 1) {
        static NSString *cateIdentifier = @"categories";
        // Table categories
        cell = [tableView dequeueReusableCellWithIdentifier:cateIdentifier];
        if (!cell) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:cateIdentifier];
        }
        int padding = Session.arrayMyClasses.count > 0 ? 1 : 0;
        if (padding == 1 && indexPath.row == 0) {
            cell.textLabel.text = @"My Classes";
            cell.detailTextLabel.text = [NSString stringWithFormat:@"%d", (int)Session.arrayMyClasses.count];
        }
        else{
            ClassCategory *category = Session.categories[indexPath.row - padding];
            cell.textLabel.text = category.name;
            cell.detailTextLabel.text = category.pb_description;
        }
    }
    else if (tableView.tag == 2) {
        static NSString *cateIdentifier = @"classesIndentifier";
        // Table categories
        cell = [tableView dequeueReusableCellWithIdentifier:cateIdentifier];
        if (!cell) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:cateIdentifier];
        }
        //ClassroomInfo *room = self.arrayCurrentClasses[indexPath.row];
        cell.textLabel.text = @"Test class";
        cell.detailTextLabel.text = @"...";
    }
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    if (tableView.tag == 1) {
//        int padding = Session.arrayMyClasses.count > 0 ? 1 : 0;
//        if (padding == 1 && indexPath.row == 0) {
//            self.arrayCurrentClasses = Session.arrayMyClasses;
//        }
//        else{
//            ClassCategory *category = Session.categories[indexPath.row - padding];
//            if (category) {
//                [ROAppDelegate showLoading];
//                [[Rpc instance] requestListClassesWithCategoryId:category.uId];
//                [[Rpc instance] setOnResponseListClasses:^(NSString* categoryId, NSArray *listClasses){
//                    [ROAppDelegate hideLoading];
//                    if ([category.uId isEqualToString:categoryId]) {
//                        self.arrayCurrentClasses = [listClasses copy];
//                        [self.tableClasses reloadData];
//                    }
//                }];
//            }
//        }
        [self generateDummyData];
        [self.tableClasses reloadData];
        [self.tableClasses setHidden:NO];
    }
    else if (tableView.tag == 2){
        
        [[Rpc instance] requestOpenClassId:@"2" sourceUser:@"teacher1" targetUser:@"" type:@"1"];
        [[Rpc instance] setOnOpenClassSuccess:^(){
            RoomViewController *controller = [[RoomViewController alloc] initWithNibName:NSStringFromClass([RoomViewController class]) bundle:nil];
            [self.navigationController pushViewController:controller animated:YES];
        }];
        
        
    }
}

@end
