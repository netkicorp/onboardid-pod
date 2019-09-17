//
//  NTKReviewValidationStrategy.h
//  netkisdk-ios
//
//  Created by Admin on 5/9/19.
//  Copyright © 2019 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NTKReviewValidationStrategy : NSObject

@end

@interface NTKReviewValidationStrategyCloseIfAllDataValid : NTKReviewValidationStrategy
@property (readonly, assign) BOOL closeOnTapContinue;
@property (readonly, assign) BOOL closeIfAllDataValid;
@property (readonly, assign) double dismissTimeout; // Timeout in seconds

+ (instancetype)strategyWithCloseFlag:(BOOL)closeFlag timeout:(double)timeout closeOnTapContinue:(BOOL)closeOnTapContinueFlag;

@end

@interface NTKCaptureReviewViewControllerValidationStrategy : NSObject

@end

NS_ASSUME_NONNULL_END
