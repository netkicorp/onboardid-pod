//
//  NTKDocumentImage.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 8/13/18.
//  Copyright © 2018 Netki, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NTKCountry.h"
#import "NTKDocumentType.h"
#import "NTKFaceRecognitionInfo.h"
#import "NTKBarcodeRecognitionInfo.h"
#import "NTKMRZInfo.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Enum representing the image types for the selected document
 */
typedef NSString* NTKDocumentImageType NS_EXTENSIBLE_STRING_ENUM;

FOUNDATION_EXPORT NTKDocumentImageType const NTKDocumentImageTypeFRONT;
FOUNDATION_EXPORT NTKDocumentImageType const NTKDocumentImageTypePASSPORT;
FOUNDATION_EXPORT NTKDocumentImageType const NTKDocumentImageTypePASSPORTLASTPAGE;
FOUNDATION_EXPORT NTKDocumentImageType const NTKDocumentImageTypeBACK;
FOUNDATION_EXPORT NTKDocumentImageType const NTKDocumentImageTypeSELFIE;

@interface NTKDocumentImage : NSObject

@property (nonatomic, strong, readonly) UIImage *image;
@property (nonatomic, strong, readonly) NTKDocumentImageType imageType;
@property (nonatomic, assign, readonly) NTKDocType docType;
@property (nonatomic, strong, nullable, readonly) NTKCountry *issuingCountry;
@property (nonatomic, strong, readonly) NTKFaceRecognitionInfo *faceRecognitionInfo;
@property (nonatomic, strong) NTKBarcodeRecognitionInfo *barcodeRecognitionInfo;
@property (nonatomic, strong) UIImage *croppedDocumentFace;
@property (nonatomic, strong) NTKMRZInfo *mrzInfo;

- (instancetype)initWithImage:(UIImage *)image imageType:(NTKDocumentImageType)imageType docType:(NTKDocType)docType issuingCountry:(NTKCountry * _Nullable)country;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
