//
//  NSBundle+NTKExtensions.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 11/12/17.
//  Copyright © 2017 Netki, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSBundle (NTKExtensions)

/**
 Returns the SDK bundle
 
 @return The bundle
 */
+ (NSBundle *)NTK_sdkBundle;

/**
 Returns the app name or bundle identifier if nil
 */
+ (NSString *)NTK_appName;

/**
 Returns the device operating system version
 */
+ (NSString *)NTK_osVersion;

/**
 Returns the device model number
 */
+ (NSString *)NTK_deviceModel;

/**
 Returns the app version string
 */
+ (NSString *)NTK_appVersion;

/**
 Returns the sdk version string
 */
+ (NSString *)NTK_sdkVersion;

+ (UIView *)NTK_loadViewFromXib:(NSString *)xibName owner:(nullable NSObject *)owner;

+ (UIImage *)NTK_loadImageNamed:(NSString *)imageName;

+ (UIViewController *)NTK_loadViewControllerWithID:(NSString *)controllerID fromStoryboard:(NSString *)storyboardName;

@end

NS_ASSUME_NONNULL_END
