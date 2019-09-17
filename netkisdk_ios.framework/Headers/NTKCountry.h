//
//  NTKCountry.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 11/22/17.
//  Copyright © 2017 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NTKModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface NTKCountry : NTKModel

/**
 Getter for ISO alpha2 country code (e.g. US for United States)
 */
@property (nonatomic, copy, readonly) NSString *alpha2Code;

/**
 Getter for ISO alpha3 country code (e.g. USA for United States)
 */
@property (nonatomic, copy, readonly, nullable) NSString *alpha3Code;

/**
 Getter for banned status of a country
 */
@property (nonatomic, assign, readonly, getter=isBanned) BOOL banned;

/**
 Getter for country name
 */
@property (nonatomic, copy, readonly) NSString *name;

/**
 Getter for country calling code
 */
@property (nonatomic, copy, readonly) NSString *countryCallingCode;

/**
 Getter for the Unicode flag emoji
 */
@property (nonatomic, copy, readonly, nullable) NSString *flag;

@end

NS_ASSUME_NONNULL_END
