//
//  NTKAppContext.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 11/30/17.
//  Copyright © 2017 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NTKModel.h"

@class NTKRequiredField, NTKRequiredFieldValue;

NS_ASSUME_NONNULL_BEGIN

@interface NTKAppContext : NTKModel

/**
 Getter for the business property in the context API response
 */
@property (nonatomic, copy, readonly) NSString *business;

/**
 Getter for the id property in the context API response
 */
@property (nonatomic, copy, readonly) NSString *identity;

/**
 Getter for the language_code property in the context API response
 */
@property (nonatomic, copy, readonly) NSString *languageCode;

/**
 Getter for the logo_dark property in the context API response
 */
@property (nonatomic, copy, readonly) NSString *logoDarkURLString;

/**
 Getter for the logo_light property in the context API response
 */
@property (nonatomic, copy, readonly) NSString *logoLightURLString;

/**
 Getter for the redirect_backlink property in the context API response
 */
@property (nonatomic, copy, readonly) NSString *redirectBacklink;

/**
 Getter for the required_fields property in the context API response
 */
@property (nonatomic, copy, readonly) NSArray<NTKRequiredField *> *requiredFields;

/**
 Getter for the welcome_message property in the context API response
 */
@property (nonatomic, copy, readonly) NSString *welcomeMessage;

/**
 Getter for the completed_message property in the context API response
 */
@property (nonatomic, copy, readonly) NSString *completedMessage;

/**
 Getter for the phone_pin_timeout property in the context API response
 */
@property (nonatomic, assign, readonly) NSInteger phonePinTimeout;

/**
 Getter for the phone_retry_attempt_limit property in the context API response
 */
@property (nonatomic, assign, readonly) NSInteger phoneRetryAttemptLimit;

/**
 Getter for the phone_use_automatic_bypass property in the context API response
 */
@property (nonatomic, assign, readonly) BOOL phoneUseAutoBypass;

/**
 Method for validating user-supplied required field values
 
 @param values An array of NTKRequiredFieldValue objects
 @return BOOL indicating whether supplied values pass validation or not
 */
- (BOOL)validateRequiredFieldValues:(NSArray<NTKRequiredFieldValue *> *)values;

@end

NS_ASSUME_NONNULL_END
