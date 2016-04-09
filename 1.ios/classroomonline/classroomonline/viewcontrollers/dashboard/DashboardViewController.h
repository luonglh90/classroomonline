//
//  DashboardViewController.h
//  classroomonline
//
//  Created by Luong Le Hoang on 4/9/16.
//  Copyright © 2016 metroteam. All rights reserved.
//

#import "BaseViewController.h"

@interface DashboardViewController : BaseViewController <UITableViewDataSource, UITableViewDelegate>{
    
}
@property (weak, nonatomic) IBOutlet UITableView *tableCategories;
@property (weak, nonatomic) IBOutlet UITableView *tableClasses;

@end
