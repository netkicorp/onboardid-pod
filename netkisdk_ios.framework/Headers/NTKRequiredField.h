//
//  NTKRequiredField.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 11/22/17.
//  Copyright © 2017 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NTKModel.h"

@class NTKRequiredFieldOption;

NS_ASSUME_NONNULL_BEGIN

/**
 Typedef for string constants for potential field data types.
 */
typedef NSString* NTKRequiredFieldDataType NS_EXTENSIBLE_STRING_ENUM;

FOUNDATION_EXPORT NTKRequiredFieldDataType const NTKResponseKeyDataTypeDATE;
FOUNDATION_EXPORT NTKRequiredFieldDataType const NTKResponseKeyDataTypeDATETIME;
FOUNDATION_EXPORT NTKRequiredFieldDataType const NTKResponseKeyDataTypeFLOAT;
FOUNDATION_EXPORT NTKRequiredFieldDataType const NTKResponseKeyDataTypeINTEGER;
FOUNDATION_EXPORT NTKRequiredFieldDataType const NTKResponseKeyDataTypeSTRING;
FOUNDATION_EXPORT NTKRequiredFieldDataType const NTKResponseKeyDataTypeLIST;

@interface NTKRequiredField : NTKModel

/**
 Getter for the field data type mapped to NTKResponseKeyDataType
 
 The default is NTKResponseKeyDataTypeSTRING
 */
@property (nonatomic, copy, readonly) NTKRequiredFieldDataType dataType;

/**
 Getter for the required field description
 */
@property (nonatomic, copy, readonly) NSString *summary;

/**
 Getter for the field ID
 */
@property (nonatomic, assign, readonly) NSInteger identity;

/**
 Getter for field label
 */
@property (nonatomic, copy, readonly) NSString *label;

/**
 Getter for the 2-char language locale (e.g. en for English)
 */
@property (nonatomic, copy, readonly) NSString *languageCode;

/**
 Getter for field name
 */
@property (nonatomic, copy, readonly) NSString *name;

/**
 Getter for list of options in option/select field
 */
@property (nonatomic, copy, readonly) NSArray<NTKRequiredFieldOption *> *options;

/**
 Getter for keypad
 */
@property (nonatomic, copy, readonly) NSString *keypad;

/**
 Getter for regex
 */
@property (nonatomic, copy, readonly) NSString *regex;

@end

NS_ASSUME_NONNULL_END
