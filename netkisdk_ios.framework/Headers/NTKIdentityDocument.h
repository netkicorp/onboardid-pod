//
//  NTKIdentityDocument.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 12/6/17.
//  Copyright © 2017 Netki, Inc. All rights reserved.
//

#import "NTKIdentityModel.h"

NS_ASSUME_NONNULL_BEGIN

@class NTKDocumentMetadata, NTKLivenessDetectionInfo;

@interface NTKIdentityDocument : NSObject

/**
 The URL string for the uploaded document
 */
@property (nonatomic, strong, nullable) NSString *documentURL;

/**
 The document type (e.g. front/back/selfie)
 */
@property (nonatomic, strong, nullable) NSString *documentType;

@property (nonatomic, strong, nullable) NSNumber *autoCapture;
@property (nonatomic, strong, nullable) NSNumber *numberOfTries;
@property (nonatomic, strong, nullable) NSNumber *documentCentered;
@property (nonatomic, strong, nullable) NSNumber *faceIdDetected;
@property (nonatomic, strong, nullable) NSNumber *faceSelfieDetected;
@property (nonatomic, strong, nullable) NSDictionary *barcodeInfo;
@property (nonatomic, strong, nullable) NSDictionary *mrzData;
@property (nonatomic, strong, nullable) NTKLivenessDetectionInfo *livenessInfo;

- (instancetype)initWithDocumentMetadata:(NTKDocumentMetadata *)documentMetadata;
- (NSDictionary *)parameters;

@end

NS_ASSUME_NONNULL_END
