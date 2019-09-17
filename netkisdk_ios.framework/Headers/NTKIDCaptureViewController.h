//
//  NTKInternalIDCaptureViewController.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 10/3/18.
//  Copyright © 2018 Netki, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NTKCaptureControllerDelegate.h"
#import <netkisdk_ios/NTKDocumentType.h>
#import <netkisdk_ios/NTKReviewValidationStrategy.h>

NS_ASSUME_NONNULL_BEGIN

@interface NTKIDCaptureViewController : UIViewController

/**
 Optional delegate to receive calls from the NTKIDCaptureViewController as it captures ID data
 */
@property (nonatomic, weak, nullable) id<NTKCaptureControllerDelegate> delegate;
@property (nonatomic, strong) NTKReviewValidationStrategy *reviewValidationStrategy;

- (instancetype)initWithIssuingCountry:(NTKCountry *)country doctype:(NTKDocType)doctype imageType:(NTKDocumentImageType)imageType NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;
- (instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
