//
//  DetailViewController.h
//  SourceControl1
//
//  Created by Mac on 15/10/4.
//  Copyright (c) 2015年 Lyn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
