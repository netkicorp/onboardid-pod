//
//  NetkiClient.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 11/11/17.
//  Copyright © 2017 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NTKContext.h"
#import "NTKDocumentType.h"


@class NTKCountry,NTKRequiredFieldValue,NTKDocumentImage,NTKIdentity;

NS_ASSUME_NONNULL_BEGIN

/**
 NetkiClient is the singleton instance for validating user identification documents
 */
@interface NetkiClient : NSObject

/**
 Read-only property of app-specific attributes returned from the context endpoint
 */
@property (nonatomic, strong, readonly) NTKContext *context;

/**
 Getter for array of image documents scanned so far
 */
@property (nonatomic, copy, nullable, readonly) NSArray<NTKDocumentImage *> *documentImages;

/**
 Get and set the preferred document type for scanning and validation
 
 The default is NTKDocTypeDriversLicense
 */
@property (nonatomic, assign) NTKDocType docType;

/**
 Get and set the country issuing the ID to be scanned
 
 The default is United States
 */
@property (nonatomic, strong) NTKCountry *issuingCountry;

/**
 Optional property for client-specific GUID
 */
@property (nonatomic, copy) NSString *clientGUID;

/**
 Property for holding the session validation data
 */
@property (nonatomic, copy) NTKIdentity *identity;

/**
 Creates and returns a singleton instance of the NetkiClient class
 
 @return The static instance
 */
+ (instancetype)sharedClient;

/**
 Method for configuring the app instance/context
 
 @param token the Client Token/API key provided by Netki
 @param block The completion block called after configuration is complete
 */
- (void)configureWithClientToken:(NSString *)token block:(void (^)(BOOL success, NSError * _Nullable error))block;

/**
 Method for configuring the app instance/context with a service code
 
 @param token the Client Token/API key provided by Netki
 @param serviceCode The service code entered by the user at start up
 @param block The completion block called after configuration is complete
 */
- (void)configureWithClientToken:(NSString *)token serviceCode:(NSString *)serviceCode block:(void (^)(BOOL success, NSError * _Nullable error))block;

/**
 Method for requesting a security code via SMS
 
 @param phoneNumber The phone number to which the SMS security code should be sent
 @param block The completion block to handle the server response
 */
- (void)requestSecurityCodeForPhoneNumber:(NSString *)phoneNumber block:(void (^)(BOOL success, NSError * _Nullable error))block;

/**
 Method for confirming a security code that was sent via SMS
 
 @param securityCode The security code sent via SMS
 @param phoneNumber The phone number used to request the code
 @param block The completion block to handle the server response
 */
- (void)validateSecurityCode:(NSString *)securityCode forPhoneNumber:(NSString *)phoneNumber block:(void (^)(BOOL success, NSError * _Nullable error))block;

/**
 Method for setting identity phone number after bypassing SMS request
 
 @param phoneNumber The phone number used to request the code
 */
- (void)bypassSecurityCodeForPhoneNumber:(NSString *)phoneNumber;

/**
 Method for completing the validation process.  Call this after all the neccessary data is collected to finish the process.

 @param block completion handler for reporting the server response
 @param onProgress The progress block that fires off for each step of the validation process
 */
- (void)validateAndCompleteWithBlock:(void (^)(BOOL success, NSString * _Nullable transactionId, NSError * _Nullable error))block onProgress:(void(^)(double progress))onProgress;

/**
 Method for completing the validation process.  Call this after all the neccessary data is collected to finish the process.
 
 @param info Optional array of NTKRequiredFieldValue objects to send up with the identity model
 @param block The completion handler for reporting the server response
 @param onProgress The progress block that fires off for each step of the validation process
 */
- (void)validateAndCompleteWithAdditionalInfo:(nullable NSArray<NTKRequiredFieldValue *> *)info block:(void (^)(BOOL success, NSString * _Nullable transactionId, NSError * _Nullable error))block onProgress:(void(^)(double progress))onProgress;


/**
 Add document image to identity
 */
- (void)addDocumentImage:(NTKDocumentImage *)documentImage;

/**
 Remove all document images
 */
- (void)removeAllDocumentImages;

- (NSArray<NSString *> *)phoneNumbers;

- (void)reset;

- (BOOL)isConfigured;

@property (nonatomic, assign) BOOL useLivenessDetection;
@property (nonatomic, assign) int maxRetakeCount;
@property (nonatomic, assign) int livenessСyclesCount;

@end

NS_ASSUME_NONNULL_END
