//
//  NTKRequiredFieldValue.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 12/21/17.
//  Copyright © 2017 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class NTKRequiredField;

@interface NTKRequiredFieldValue : NSObject

/**
 Read-only property to check whether the required field value is valid or not
 */
@property (nonatomic, assign, readonly, getter=isValid) BOOL valid;

/**
 Read-only property containing the required field object for the submitted value
 */
@property (nonatomic, strong, readonly) NTKRequiredField *requiredField;

/**
 Read-only property for the value that was submitted
 */
@property (nonatomic, copy, readonly) id value;

/**
 Init method for creating a required field submission value
 
 @param requiredField The NTKRequiredField object related to the submitted value
 @param value The value to be submitted
 @return instancetype An instance of NTKRequiredFieldValue
 */
- (instancetype)initWithRequiredField:(NTKRequiredField *)requiredField value:(id)value;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
