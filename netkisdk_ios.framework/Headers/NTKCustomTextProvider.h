//
//  NTKCustomTextProvider.h
//  netkisdk-ios
//
//  Created by Admin on 6/5/19.
//  Copyright © 2019 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NTKCustomTextProvider : NSObject

+ (NSString *)headerForCaptureDLFront;
+ (void)setHeaderForCaptureDLFront:(NSString *)text;

+ (NSString *)headerForCaptureDLBack;
+ (void)setHeaderForCaptureDLBack:(NSString *)text;

+ (NSString *)headerForCapturePassportFront;
+ (void)setHeaderForCapturePassportFront:(NSString *)text;

+ (NSString *)headerForCapturePassportLastPage;
+ (void)setHeaderForCapturePassportLastPage:(NSString *)text;

+ (NSString *)headerForInstructionsDriverLicenseFront;
+ (void)setHeaderForInstructionsDriverLicenseFront:(NSString *)text;

+ (NSString *)headerForInstructionsDriverLicenseBack;
+ (void)setHeaderForInstructionsDriverLicenseBack:(NSString *)text;

+ (NSString *)headerForInstructionsGovermentIdFront;
+ (void)setHeaderForInstructionsGovermentIdFront:(NSString *)text;

+ (NSString *)headerForInstructionsGovermentIdBack;
+ (void)setHeaderForInstructionsGovermentIdBack:(NSString *)text;

+ (NSString *)headerForInstructionsPassport;
+ (void)setHeaderForInstructionsPassport:(NSString *)text;

+ (NSString *)headerForInstructionsPassportLastPage;
+ (void)setHeaderForInstructionsPassportLastPage:(NSString *)text;

+ (NSString *)headerForInstructionsSelfie;
+ (void)setHeaderForInstructionsSelfie:(NSString *)text;

@end

NS_ASSUME_NONNULL_END
