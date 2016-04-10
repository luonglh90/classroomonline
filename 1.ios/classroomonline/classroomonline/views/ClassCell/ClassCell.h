//
//  ClassCell.h
//  classroomonline
//
//  Created by Luong Le Hoang on 4/10/16.
//  Copyright © 2016 metroteam. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ClassCell : UITableViewCell{
    
}
@property (weak, nonatomic) IBOutlet UIView *viewContent;
@property (weak, nonatomic) IBOutlet UILabel *labelTitle;
@property (weak, nonatomic) IBOutlet UILabel *labelDescription;

- (void)setupWithTitle:(NSString*)title subtitle:(NSString*)sub;


@end
