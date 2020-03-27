//
//  netkisdk_ios.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 11/11/17.
//  Copyright © 2017 Netki, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for netkisdk_ios.
FOUNDATION_EXPORT double netkisdk_iosVersionNumber;

//! Project version string for netkisdk_ios.
FOUNDATION_EXPORT const unsigned char netkisdk_iosVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <netkisdk_ios/PublicHeader.h>

//headers
#import <netkisdk_ios/NTKLoggingMacros.h>
#import <netkisdk_ios/NTKDocumentType.h>
#import <netkisdk_ios/NTKAppFontsProviderProtocol.h>
#import <netkisdk_ios/NTKAppFontsController.h>
#import <netkisdk_ios/NTKInstructionViewController.h>
#import <netkisdk_ios/NTKAnalytics.h>
#import <netkisdk_ios/NTKAnalyticEvents.h>

//categories
#import <netkisdk_ios/NSArray+NTKExtensions.h>
#import <netkisdk_ios/NSBundle+NTKExtensions.h>
#import <netkisdk_ios/NSData+NTKExtensions.h>
#import <netkisdk_ios/NSURLRequest+NTKExtensions.h>

//classes
#import <netkisdk_ios/NTKEnvironment.h>
#import <netkisdk_ios/NetkiClient.h>
#import <netkisdk_ios/NTKDocumentImage.h>
#import <netkisdk_ios/NTKIDCaptureViewController.h>
#import <netkisdk_ios/NTKColorProvider.h>
#import <netkisdk_ios/NTKCustomTextProvider.h>
#import <netkisdk_ios/NTKSDKSettingsProvider.h>
#import <netkisdk_ios/NTKCameraFlowViewController.h>
#import <netkisdk_ios/NTKRequiredFieldValue.h>
#import <netkisdk_ios/NTKRequiredField.h>
#import <netkisdk_ios/NTKRequiredFieldOption.h>

//data models
#import <netkisdk_ios/NTKContext.h>
#import <netkisdk_ios/NTKAppContext.h>
#import <netkisdk_ios/NTKCountry.h>
#import <netkisdk_ios/NTKModel.h>

//functions
#import <netkisdk_ios/NTKFunctions.h>
