//
//  NTKCaptureControllerDelegate.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 10/3/18.
//  Copyright © 2018 Netki, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NTKDocumentImage.h"

NS_ASSUME_NONNULL_BEGIN

@protocol NTKCaptureControllerDelegate <NSObject>

@required
/**
 Called when the *viewController* finishes capturing ID related document images. The *viewController* will dismiss itself.
 
 @param viewController The sender of the message
 @param documentImage The captured document image
 @see NTKDocumentImage
 */
- (void)captureController:(UIViewController *)viewController didCaptureDocumentImage:(NTKDocumentImage *)documentImage originalUIImage:(UIImage *)originalUIImage;

/**
 Called when the *viewController* capture was cancelled by the user. The *viewController* will dismiss itself.
 
 @param viewController The sender of the message
 */
- (void)captureControllerDidCancel:(UIViewController *)viewController;

@end

NS_ASSUME_NONNULL_END
