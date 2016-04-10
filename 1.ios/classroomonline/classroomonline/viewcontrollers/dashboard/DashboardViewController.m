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
#import "TestRoomInfo.pb.h"
#import "Utils.h"
#import "ClassCell.h"

#define Session [ROSession instance]

@interface DashboardViewController (){
    
}
@property (nonatomic, strong) NSArray *arrayCurrentClasses;

@end

@implementation DashboardViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.tableClasses.hidden = YES;
    [self.tableClasses setBackgroundColor:[UIColor colorWithRed:0.9 green:0.9 blue:0.9 alpha:0.7]];
    
    [self.tableClasses registerNib:[UINib nibWithNibName:NSStringFromClass([ClassCell class]) bundle:nil] forCellReuseIdentifier:NSStringFromClass([ClassCell class])];
}

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    [self.navigationController setNavigationBarHidden:YES];
    
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
    return 125;
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
            //[cell.imageView setImage:[UIImage imageNamed:category.imgurl]];
            cell.textLabel.text = category.name;
            cell.detailTextLabel.text = category.pb_description;
        }
        return cell;
    }
    else if (tableView.tag == 2) {
        // Table categories
        ClassCell *classCell = [tableView dequeueReusableCellWithIdentifier:NSStringFromClass([ClassCell class]) forIndexPath:indexPath];
        [classCell setBackgroundColor:[UIColor clearColor]];
        ClassroomInfo *room = self.arrayCurrentClasses[indexPath.row];
       NSString *sub = @"";
        if ([room.teacher isEqualToString:Session.user.username]) {
            sub = @"Click to OPEN class";;
        }
        else {
            sub = @"Click to JOIN";
        }
        [classCell setupWithTitle:room.name subtitle:sub];
        return classCell;
    }
    return nil;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    if (tableView.tag == 1) {
        int padding = Session.arrayMyClasses.count > 0 ? 1 : 0;
        if (padding == 1 && indexPath.row == 0) {
            self.arrayCurrentClasses = Session.arrayMyClasses;
        }
        else{
            ClassCategory *category = Session.categories[indexPath.row - padding];
            if (category) {
                [ROAppDelegate showLoading];
                [[Rpc instance] requestListClassesWithCategoryId:category.uId];
                [[Rpc instance] setOnResponseListClasses:^(NSString* categoryId, NSArray *listClasses){
                    [ROAppDelegate hideLoading];
                    if ([category.uId isEqualToString:categoryId]) {
                        self.arrayCurrentClasses = [listClasses copy];
                        [self.tableClasses reloadData];
                        [self.tableClasses setHidden:NO];
                    }
                }];
            }
        }
    }
    else if (tableView.tag == 2){
        ClassroomInfo *room = self.arrayCurrentClasses[indexPath.row];
        if ([room.teacher isEqualToString:Session.user.username]) {
            Session.isDrawable = YES;
            Session.currentClassId = [room.uid intValue];
            Session.teacher = Session.user.username;
            [[Rpc instance] requestOpenClassId:room.uid sourceUser:Session.user.username targetUser:@"test" type:@"1"];
            RoomViewController *controller = [[RoomViewController alloc] initWithNibName:NSStringFromClass([RoomViewController class]) bundle:nil];
            [self.navigationController pushViewController:controller animated:YES];
        }
        else if ([Session.arrayCurrentOpen containsObject:room.uid]) {
            [[Rpc instance] requestOpenClassId:room.uid sourceUser:Session.user.username targetUser:room.teacher type:@"3"];
        }
        else{
            [Utils showAlertTitle:app_name content:@"You can not join this room."];
        }
    }
}



@end
