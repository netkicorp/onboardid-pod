//
//  NTKInternalFaceCaptureViewController.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 10/3/18.
//  Copyright © 2018 Netki, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NTKCaptureControllerDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface NTKFaceCaptureViewController : UIViewController

/**
 Optional delegate to receive calls from the NTKFaceCaptureViewController as it captures face data
 */
@property (nonatomic, weak, nullable) id<NTKCaptureControllerDelegate> delegate;
@property (nonatomic, assign) BOOL isProcess;
@end

NS_ASSUME_NONNULL_END
