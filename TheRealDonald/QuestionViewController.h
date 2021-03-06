//
//  QuestionViewController.h
//  TheRealDonald
//
//  Created by Andy Wu on 3/2/17.
//  Copyright © 2017 Andy Wu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DAO.h"
#import "NewsFormat.h"
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>

@class ResultsViewController;

@interface QuestionViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@property (weak, nonatomic) IBOutlet UILabel *headlineLabel;

@property (weak, nonatomic) IBOutlet UIImageView *correctImg;

@property (weak, nonatomic) IBOutlet UIButton *trueBtn;

@property (weak, nonatomic) IBOutlet UIButton *falseBtn;


@property (nonatomic, strong) NSArray *trumpPics;

@property int questionCount;

@property NewsFormat *currentQuestion;

@property DAO *dao;

@property ResultsViewController *resultsVC;

@property int randNum;

@end
