//
//  SecondViewController.h
//  31DaysOfiOS
//
//  Created by Kiran  Kumar on 11/7/16.
//  Copyright © 2016 Kiran  Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>

/*
 @disussion : @class required as we are referencing secondViewController inside our protocol
*/
@class SecondViewController;

/*
 @discussion: protocol with method definintion for the delegate pattern
 */
@protocol SecondViewControllerDelegate <NSObject>

- (void)doSomethingWithSecondViewController: (SecondViewController *)secondViewController;

@end


@interface SecondViewController : UIViewController

/*
@discussion: delegate property with instance of protocol as a property
 */

@property (nonatomic, weak) id <SecondViewControllerDelegate> delegate;


- (IBAction)tappedCloseButton:(id)sender;



@end
