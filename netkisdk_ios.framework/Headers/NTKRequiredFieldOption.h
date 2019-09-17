//
//  NTKRequiredFieldOption.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 12/7/17.
//  Copyright © 2017 Netki, Inc. All rights reserved.
//

#import <netkisdk_ios/netkisdk_ios.h>

@interface NTKRequiredFieldOption : NTKModel

/**
 Getter for the field ID
 */
@property (nonatomic, assign, readonly) NSInteger identity;

/**
 Getter for field key
 */
@property (nonatomic, copy, readonly) NSString *key;

/**
 Getter for field label
 */
@property (nonatomic, copy, readonly) NSString *label;

/**
 Getter for the 2-char language locale (e.g. en for English)
 */
@property (nonatomic, copy, readonly) NSString *languageCode;

@end
