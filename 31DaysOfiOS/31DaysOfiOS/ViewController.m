//
//  ViewController.m
//  31DaysOfiOS
//
//  Created by Kiran  Kumar on 11/7/16.
//  Copyright © 2016 Kiran  Kumar. All rights reserved.
//

#import "ViewController.h"
#import "SecondViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (IBAction)tappedClickMe:(id)sender {
    self.labelInfo.text = self.labelTextField.text;
}

- (IBAction)tappedNavButton:(id)sender {
    SecondViewController *secondViewController = [self.storyboard instantiateViewControllerWithIdentifier:@"SecondViewController"];
    [self.navigationController pushViewController:secondViewController animated:YES];
}

- (IBAction)tappedShowNew:(id)sender {
    SecondViewController *secondviewController = [self.storyboard instantiateViewControllerWithIdentifier:@"SecondViewController"];
    secondviewController.delegate = self;
    [self  presentViewController:secondviewController animated:YES completion:nil];
}

- (void)doSomethingWithSecondViewController:(SecondViewController *)secondViewController {
    [self dismissViewControllerAnimated:YES completion:nil];
}
@end
