//
//  ClassCell.m
//  classroomonline
//
//  Created by Luong Le Hoang on 4/10/16.
//  Copyright © 2016 metroteam. All rights reserved.
//

#import "ClassCell.h"

@implementation ClassCell

- (void)awakeFromNib {
    // Initialization code
    self.viewContent.layer.borderColor = [[UIColor colorWithRed:0.8 green:0.5 blue:0.6 alpha:0.6] CGColor];
    self.viewContent.layer.borderWidth = 0.5;
    self.viewContent.layer.cornerRadius = 10;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];
    if (selected) {
        [self.viewContent setBackgroundColor:[UIColor colorWithRed:0.5 green:0.55 blue:0.6 alpha:0.6]];
    }
    else{
        [self.viewContent setBackgroundColor:[UIColor whiteColor]];
    }
    // Configure the view for the selected state
}

- (void)setupWithTitle:(NSString*)title subtitle:(NSString*)sub{
    self.labelTitle.text = title;
    self.labelDescription.text = sub;
}


@end
