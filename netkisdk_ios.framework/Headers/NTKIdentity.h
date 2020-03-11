//
//  NTKValidationData.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 11/11/17.
//  Copyright © 2017 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NTKDocumentImage.h"
#import "NTKIdentityModel.h"

NS_ASSUME_NONNULL_BEGIN

@class NTKIdentityPhoneNumber, NTKIdentityEmail, NTKIdentityAddress, NTKIdentityDocument, IDModel, FacialMatchResponse, NTKRequiredFieldValue, NTKDocumentMetadata;

@interface NTKIdentity : NTKIdentityModel

/**
 Getter for array of image documents waiting to be uploaded to server
 */
@property (nonatomic, copy, nullable, readonly) NSArray<NTKDocumentImage *> *documentImages;

/**
 Getter for the identity model's first name property
 */
@property (nonatomic, copy, nullable, readonly) NSString *firstName;

/**
 Getter for the identity model's last name property
 */
@property (nonatomic, copy, nullable, readonly) NSString *lastName;

/**
 Getter for the identity model's middle name property
 */
@property (nonatomic, copy, nullable, readonly) NSString *middleName;

/**
 Getter for the identity model's alias property
 */
@property (nonatomic, copy, nullable, readonly) NSString *alias;

/**
 Getter for the identity model's client GUID property
 */
@property (nonatomic, copy, nullable, readonly) NSString *clientGUID;

/**
 Getter for the identity model's gender property
 */
@property (nonatomic, copy, nullable, readonly) NSString *gender;

/**
 Getter for the identity model's country code property
 */
@property (nonatomic, copy, nullable, readonly) NSString *countryCode;

/**
 Getter for the identity model's birth date property (Formatted: YYYY-mm-dd)
 */
@property (nonatomic, copy, nullable, readonly) NSString *birthDate;

/**
 Getter for the identity model's death date propert (Formatted: YYYY-mm-dd)
 */
@property (nonatomic, copy, nullable, readonly) NSString *deathDate;

/**
 Getter for the identity model's birth location property
 */
@property (nonatomic, copy, nullable, readonly) NSString *birthLocation;

/**
 Getter for the identity model's is_phone_validated property
 */
@property (nonatomic, assign, readonly) BOOL phoneValidated;

/**
 Getter for the identity model's list of identity phone numbers
 */
@property (nonatomic, copy, nullable, readonly) NSArray <NTKIdentityPhoneNumber *> *identityPhoneNumbers;

/**
 Getter for the identity model's list of identity emails
 */
@property (nonatomic, copy, nullable, readonly) NSArray <NTKIdentityEmail *> *identityEmails;

/**
 Getter for the identity model's list of identity addresses
 */
@property (nonatomic, copy, nullable, readonly) NSArray <NTKIdentityAddress *> *identityAddresses;

/**
 Getter for the identity model's list of identity documents
 */
@property (nonatomic, copy, nullable, readonly) NSArray <NTKIdentityDocument *> *identityDocuments;

/**
 Method for adding a new document to the identity documents list
 
 @param urlString The URL string for the document scanned
 @param type The string used to denote the type of document scanned (e.g. ID front/back/selfie)
 */
- (void)addDocumentPath:(NSString *)urlString ofType:(NTKDocumentImageType)type documentMetadata:(NTKDocumentMetadata *)documentMetadata;

/**
 Method for adding a new image document to idenity model for storage until time to upload to server
 
 @param documentImage The NSObject subclass holding the various data properties for a scanned image (ID/selfie)
 */
- (void)addDocumentImage:(NTKDocumentImage *)documentImage;

/**
 Method to clear scanned documents in case of cancellation
 */
- (void)clearDocumentImages;

/**
 Method for adding a new phone number to the identity phone numbers list
 
 @param phoneNumber The phone number to add
 @param validated The validation state of the phone number (was SMS pin entry successful)
 */
- (void)addIdentityPhoneNumber:(NSString *)phoneNumber isValidated:(BOOL)validated;

/**
 Method for adding a new phone number to the identity phone numbers list
 
 @param phoneNumber The phone number to add
 */
- (void)addIdentityPhoneNumber:(NSString *)phoneNumber;

/**
 Method for adding a new email to the identity emails list
 
 @param email The email to add
 */
- (void)addIdentityEmail:(NSString *)email;

/**
 Method for adding additional required fields to the identity model
 
 @param requiredFields NSArray of NTKRequiredFieldValues to add to the identity model
 */
- (void)addRequiredFields:(NSArray<NTKRequiredFieldValue *> *)requiredFields;

/**
 Method for updating the selected country code
 
 @param countryCode The alpha2 country code
 */
- (void)updateCountryCode:(NSString *)countryCode;

/**
 Method for updating the clientGUID
 
 @param guid The client-provided custom tracking guid
 */
- (void)updateClientGUID:(NSString *)guid;

- (void)resetDocuments;

@end

NS_ASSUME_NONNULL_END
