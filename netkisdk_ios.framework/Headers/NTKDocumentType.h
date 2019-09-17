//
//  NTKDocumentType.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 8/11/18.
//  Copyright © 2018 Netki, Inc. All rights reserved.
//

/**
 Enum representing the acceptable document types for scanning and validation
 */
typedef NS_ENUM(NSInteger, NTKDocType) {
    NTKDocTypeDriversLicense,
    NTKDocTypePassport,
    NTKDocTypeGovernmentID,
    NTKDocTypeOther
};
