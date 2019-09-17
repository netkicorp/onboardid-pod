//
//  NTKMRZInfo.h
//  netkisdk-ios
//
//  Created by Admin on 4/5/19.
//  Copyright © 2019 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NTKMRZInfo : NSObject
@property (readonly) NSString *birthDate;
@property (readonly) NSString *docType;
@property (readonly) NSString *documentNumber;
@property (readonly) NSString *expiryDate;
@property (readonly) NSString *givenName;
@property (readonly) NSString *invitNumber;
@property (readonly) NSString *issuerAbbr;
@property (readonly) NSString *nameGroup;
@property (readonly) NSString *nationAbbr;
@property (readonly) NSString *personalNumber;
@property (readonly) NSString *sex;
@property (readonly) NSString *surName;
@property (readonly) NSString *visaId;

+ (instancetype)mrzInfoWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
