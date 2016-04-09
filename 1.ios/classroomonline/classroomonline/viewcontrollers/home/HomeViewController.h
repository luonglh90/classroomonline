//
//  HomeViewController.h
//  classroomonline
//
//  Created by Luong Le Hoang on 4/9/16.
//  Copyright © 2016 metroteam. All rights reserved.
//

#import "BaseViewController.h"

@interface HomeViewController : BaseViewController{
    
}
@property (weak, nonatomic) IBOutlet UITextField *txtName;
@property (weak, nonatomic) IBOutlet UITextField *txtPass;
@property (weak, nonatomic) IBOutlet UIButton *btnSignIn;
@property (weak, nonatomic) IBOutlet UIButton *btnSignUp;

- (IBAction)actionSignIn:(id)sender;
- (IBAction)actionSignUp:(id)sender;
@end
