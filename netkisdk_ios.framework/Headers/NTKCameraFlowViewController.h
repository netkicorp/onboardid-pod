//
//  NTKCameraFlowViewController.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 11/12/17.
//  Copyright © 2017 Netki, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *const NTKCameraFlowViewControllerDelegateNotificationCameraFlowCompeted;

@protocol NTKCameraFlowViewControllerDelegate;

@interface NTKCameraFlowViewController : UIViewController

/**
 Optional delegate to receive calls from the NTKCameraFlowViewController as it finishes processing the validation data
 */
@property (nonatomic, weak, nullable) id<NTKCameraFlowViewControllerDelegate> cameraFlowDelegate;

@end

@protocol NTKCameraFlowViewControllerDelegate <NSObject> 
@required
/**
 Delegate method to be called when the NTKCameraFlowViewController has been dismissed
 */
- (void)cameraControllerDidDismiss;

/**
 Delegate method to be called when the NTKCameraFlowViewController has canceled validation request
 */
- (void)cameraControllerDidCancelProcessing;

@end

NS_ASSUME_NONNULL_END
