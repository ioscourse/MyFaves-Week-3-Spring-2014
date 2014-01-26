//
//  MyFaves_Week_3MasterViewController.h
//  MyFaves Week 3 Spring 2014
//
//  Created by Charles Konkol on 1/26/14.
//  Copyright (c) 2014 Chuck Konkol. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MyFaves_Week_3DetailViewController;

@interface MyFaves_Week_3MasterViewController : UITableViewController
{
    //Declare Arrays
    NSMutableArray *listOfFavs; //Menu
    NSMutableArray *FavDetails; //Websites
}

@property (strong, nonatomic) MyFaves_Week_3DetailViewController *detailViewController;

@end
