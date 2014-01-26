//
//  MyFaves_Week_3DetailViewController.h
//  MyFaves Week 3 Spring 2014
//
//  Created by Charles Konkol on 1/26/14.
//  Copyright (c) 2014 Chuck Konkol. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyFaves_Week_3DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (strong, nonatomic) IBOutlet UIWebView *WebSite;

@end
