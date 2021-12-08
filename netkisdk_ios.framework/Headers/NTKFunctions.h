//
//  NTKFunctions.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 11/17/17.
//  Copyright © 2017 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT id ObjectOrNull(id object);

/**
 Executes *block* on the main thread asynchronously, using dispatch_async, passing dispatch_get_main_queue() and *block* respectively.
 
 @param block The block to execute on the main thread
 @exception NSException Thrown if block is NULL
 */
FOUNDATION_EXPORT void NTKDispatchMainAsync(dispatch_block_t block);

/**
 Executes *block* on the main thread synchronously, first checking to see if already on the main thread and if so, executing the *block* immediately. Otherwise using dispatch_sync, passing dispatch_get_main_queue() and *block* respectively.
 
 @param block The block to execute on the main thread
 @exception NSException Thrown if block is NULL
 */
FOUNDATION_EXPORT void NTKDispatchMainSync(dispatch_block_t block);

/**
 Executes *block* on the main thread after the provided *delay*.
 
 @param delay The delay after which to execute *block*
 @param block The block to execute
 @exception NSException Thrown if block is NULL
 */
FOUNDATION_EXPORT void NTKDispatchMainAfter(NSTimeInterval delay, dispatch_block_t block);

/**
 Executes *block* on the provided *queue* after the provided *delay*.
 
 @param delay The delay after which to execute *block*
 @param queue The queue to execute *block* on
 @param block The block to execute
 @exception NSException Thrown if block is NULL
 */
FOUNDATION_EXPORT void NTKDispatchAfter(NSTimeInterval delay, dispatch_queue_t _Nullable queue, dispatch_block_t block);

NS_ASSUME_NONNULL_END
