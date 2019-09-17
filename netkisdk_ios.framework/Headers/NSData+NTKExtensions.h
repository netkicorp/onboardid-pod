//
//  NSData+NTKExtensions.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 6/14/18.
//  Copyright © 2018 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (NTKExtensions)

/**
 Creates and returns an NSString representing the MD5 hash of the receiver's bytes.
 
 @return The NSString hash
 */
- (nullable NSString *)NTK_MD5String;
/**
 Creates and returns an NSString representing the SHA1 hash of the receiver's bytes.
 
 @return The NSString hash
 */
- (nullable NSString *)NTK_SHA1String;
/**
 Creates and returns an NSString representing the SHA256 hash of the receiver's bytes.
 
 @return The NSString hash
 */
- (nullable NSString *)NTK_SHA256String;
/**
 Creates and returns an NSString representing the SHA512 hash of the receiver's bytes.
 
 @return The NSString hash
 */
- (nullable NSString *)NTK_SHA512String;

@end

NS_ASSUME_NONNULL_END
