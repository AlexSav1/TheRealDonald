//
//  ViewController.h
//  TheRealDonald
//
//  Created by Andy Wu on 3/2/17.
//  Copyright © 2017 Andy Wu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class QuestionViewController;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@property QuestionViewController *questionVC;

@end

