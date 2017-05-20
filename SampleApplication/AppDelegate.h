//
//  AppDelegate.h
//  SampleApplication
//
//  Created by Assistanz on 20/05/17.
//  Copyright © 2017 Assistanz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

