//
//  NTKBarcodeRecognitionInfo.h
//  netkisdk-ios
//
//  Created by Admin on 3/28/19.
//  Copyright © 2019 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NTKBarcodeDriverLicenseInfo: NSObject

@property (nonatomic, strong) NSString *documentType;
@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *middleName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSString *gender;
@property (nonatomic, strong) NSString *addressStreet;
@property (nonatomic, strong) NSString *addressCity;
@property (nonatomic, strong) NSString *addressState;
@property (nonatomic, strong) NSString *addressZip;
@property (nonatomic, strong) NSString *licenseNumber;
@property (nonatomic, strong) NSString *issueDate;
@property (nonatomic, strong) NSString *expiryDate;
@property (nonatomic, strong) NSString *birthDate;
@property (nonatomic, strong) NSString *issuingCountry;

@end

@interface NTKBarcodePassportBackInfo : NSObject
@property (nonatomic, strong) NSString *licenseNumber;

@end

@interface NTKBarcodeRecognitionInfo : NSObject
@property (nonatomic, strong) NSDictionary *rawInfo;
@property (nonatomic, strong) NTKBarcodeDriverLicenseInfo *diverLicenseInfo;
@property (nonatomic, strong) NTKBarcodePassportBackInfo *passportBackInfo;

- (instancetype)initWithDriverLicenseRawData:(NSDictionary *)rawData;
- (instancetype)initWithPassportBackRawData:(NSDictionary *)rawData;

@end

NS_ASSUME_NONNULL_END
