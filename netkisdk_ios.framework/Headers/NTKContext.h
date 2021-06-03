//
//  NTKContext.h
//  netkisdk-ios
//
//  Created by Todd Mathison on 11/14/17.
//  Copyright © 2017 Netki. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NTKModel.h"
#import "NTKAppContext.h"

NS_ASSUME_NONNULL_BEGIN

@class NTKCountry,NTKCallingCode, NTKLivenessSettings;

@interface NTKContext : NTKModel

/**
 Getter for the app context object
 */
@property (nonatomic, strong, readonly) NTKAppContext *appContext;

/**
 Getter for the business_type property in the context API response
 */
@property (nonatomic, copy, readonly) NSString *businessType;

/**
 Getter for the callback_url property in the context API response
 */
@property (nonatomic, copy, readonly) NSString *callbackURLString;

/**
 Getter for the calling_codes property in the context API response
 */
@property (nonatomic, copy, readonly) NSArray<NTKCallingCode *> *callingCodes DEPRECATED_MSG_ATTRIBUTE("Use countries array instead");

/**
 Getter for the country_blacklist property in the context API response
 */
@property (nonatomic, copy, readonly) NSArray<NTKCountry *> *countryBlackList DEPRECATED_MSG_ATTRIBUTE("Use countries array instead");

/**
 Getter for the country_whitelist property in the context API response
 */
@property (nonatomic, copy, readonly) NSArray<NTKCountry *> *countryWhiteList DEPRECATED_MSG_ATTRIBUTE("Use countries array instead");

/**
 Getter for the country list
 */
@property (nonatomic, copy, readonly) NSArray<NTKCountry *> *countries;

/**
 Getter for the created property in the context API response
 */
@property (nonatomic, copy, readonly) NSDate *createdDate;

/**
 Getter for the default_workflow property in the context API response
 */
@property (nonatomic, copy, readonly) NSString *defaultWorkflow;

/**
 Getter for the established_date property in the context API response
 */
@property (nonatomic, copy, readonly) NSDate *establishedDate;

/**
 Getter for the id property in the context API response
 */
@property (nonatomic, assign, readonly) NSInteger identity;

/**
 Getter for the name property in the context API response
 */
@property (nonatomic, copy, readonly) NSString *name;

/**
 Getter for the parent_business property in the context API response
 */
@property (nonatomic, copy, readonly) NSString *parentBusiness;

/**
 Getter for the updated property in the context API response
 */
@property (nonatomic, copy, readonly) NSDate *updatedDate;

/**
 Getter for the liveness_settings property in the context API response
 */
@property (nonatomic, strong, readonly) NTKLivenessSettings *livenessSettings;

@end

NS_ASSUME_NONNULL_END
