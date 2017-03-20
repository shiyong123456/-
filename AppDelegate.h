//
//  AppDelegate.h
//  检测手机拔卡或者插卡
//
//  Created by shiyong on 17/3/16.
//  Copyright © 2017年 ShiYong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

