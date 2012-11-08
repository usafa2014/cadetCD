//
//  MasterViewController.h
//  cadetCD
//
//  Created by Matthew Johnson on 11/8/12.
//  Copyright (c) 2012 Matthew Johnson. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
