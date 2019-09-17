//
//  NTKColorProvider.h
//  netkisdk-ios
//
//  Created by Admin on 3/22/19.
//  Copyright © 2019 Netki, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NTKColorProvider : NSObject

+ (UIColor *)netkiTextAccentElementsColor;
+ (void)setNetkiTextAccentElementsColor:(UIColor *)color;

+ (UIColor *)netkiSecondaryButtonColor;
+ (void)setNetkiSecondaryButtonColor:(UIColor *)color;

+ (UIColor *)netkiAlertButtonColor;
+ (void)setNetkiAlertButtonColor:(UIColor *)color;

+ (UIColor *)netkiErrorColor;
+ (void)setNetkiErrorColor:(UIColor *)color;

+ (UIColor *)netkiSuccessColor;
+ (void)setNetkiSuccessColor:(UIColor *)color;

@end

NS_ASSUME_NONNULL_END
