//
//  NTKInstructionViewController.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 11/13/18.
//  Copyright © 2018 Netki, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NTKDocumentImage.h"

NS_ASSUME_NONNULL_BEGIN

@protocol NTKInstructionViewDelegate;

@interface NTKInstructionViewController : UIViewController

@property (nonatomic, weak, nullable) id<NTKInstructionViewDelegate> delegate;

- (instancetype)initWithDocumentImageType:(NTKDocumentImageType)type NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;
- (instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

@end

@protocol NTKInstructionViewDelegate <NSObject>

- (void)dismissInstructionSet;
- (void)continueToPhotoCaptureWithType:(NTKDocumentImageType)type;

@end

NS_ASSUME_NONNULL_END
