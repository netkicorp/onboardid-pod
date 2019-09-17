//
//  NSArray+NTKExtensions.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 4/20/18.
//  Copyright © 2018 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray<__covariant ObjectType> (NTKExtensions)

/**
 Create and return a new array by enumerating the receiver, invoking block for each object, and including the return value of block in the new array.
 
 @param block The block to invoke for each object in the receiver
 @return The new array
 */
- (NSArray *)NTK_map:(id _Nullable(^)(ObjectType object, NSInteger index))block;

/**
 Create and return a new array by enumerating the receiver, invoking block for each object, and including it in the new array if block returns YES.
 
 @param block The block to invoke for each object in the receiver
 @return The new array
 @exception NSException Thrown if block is nil
 */
- (NSArray<ObjectType> *)NTK_filter:(BOOL(^)(ObjectType object, NSInteger index))block;

@end

NS_ASSUME_NONNULL_END
