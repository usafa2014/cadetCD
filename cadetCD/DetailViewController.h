//
//  DetailViewController.h
//  cadetCD
//
//  Created by Matthew Johnson on 11/8/12.
//  Copyright (c) 2012 Matthew Johnson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
