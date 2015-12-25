//
//  DetailViewController.h
//  DreamList
//
//  Created by 张鹏 on 15/12/25.
//  Copyright © 2015年 pengzh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

