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

@end

NS_ASSUME_NONNULL_END
