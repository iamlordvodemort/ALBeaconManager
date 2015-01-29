//
//  DetailViewController.h
//  SHCBeaconManager
//
//  Created by Anthony Layne on 1/28/15.
//  Copyright (c) 2015 Anthony Layne. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

