//
//  ViewController.h
//  31DaysOfiOS
//
//  Created by Kiran  Kumar on 11/7/16.
//  Copyright © 2016 Kiran  Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SecondViewController.h"

@interface ViewController : UIViewController <SecondViewControllerDelegate>
@property (weak, nonatomic) IBOutlet UILabel *labelInfo;
@property (weak, nonatomic) IBOutlet UITextField *labelTextField;

- (IBAction)tappedClickMe:(id)sender;
- (IBAction)tappedNavButton:(id)sender;
- (IBAction)tappedShowNew:(id)sender;

@end

