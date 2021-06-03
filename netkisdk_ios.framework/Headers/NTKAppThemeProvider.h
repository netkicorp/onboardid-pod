//
//  NTKAppThemeProvider.h
//  netkisdk-ios
//
//  Created by Developer on 05.05.2021.
//  Copyright © 2021 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NTKAppThemeProvider : NSObject

+ (instancetype)sharedInstance;

@property (strong, nonatomic) UIImage * passportInstructionPageImage;
@property (strong, nonatomic) UIImage * passportLastPageInstructionPageImage;
@property (strong, nonatomic) UIImage * driverLicenseFrontInstructionPageImage;
@property (strong, nonatomic) UIImage * driverLicenseBackInstructionPageImage;
@property (strong, nonatomic) UIImage * govermentIdFrontInstructionPageImage;
@property (strong, nonatomic) UIImage * govermentIdBackInstructionPageImage;
@property (strong, nonatomic) UIImage * selfieInstructionPageImage;

@property (strong, nonatomic) UIColor * primaryButtonBackgroundColor;
@property (strong, nonatomic) UIColor * primaryButtonTextColor;

@property (strong, nonatomic) UIColor * secondaryButtonBackgroundColor;
@property (strong, nonatomic) UIColor * secondaryButtonTextColor;

@property (strong, nonatomic) UIColor * instructionsTitleTextColor;

@property (assign, nonatomic) CGFloat buttonsCornerRadius;

@property (strong, nonatomic) UIColor *successColor;
@property (strong, nonatomic) UIColor *errorColor;

@end

NS_ASSUME_NONNULL_END
