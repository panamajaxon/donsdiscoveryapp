//
//  ViewController.h
//  DonsDiscoveryApp
//
//  Created by Javier Evelyn on 5/28/13.
//  Copyright (c) 2013 MMA Team 3. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KIImagePager.h"

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIButton *searchByTagButton;

@property (strong, nonatomic) IBOutlet UITextField *searchByTagTextField;

@property (strong, nonatomic) IBOutlet UITextField *searchByLocTextField;
@property (strong, nonatomic) IBOutlet UIButton *segueForLocViewButton;

@end
