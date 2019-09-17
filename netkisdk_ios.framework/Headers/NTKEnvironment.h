//
//  NTKEnvironment.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 6/13/18.
//  Copyright © 2018 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NTKLoggingMacros.h"

NS_ASSUME_NONNULL_BEGIN

extern NSInteger NTKLoggingLevel;

@interface NTKEnvironment : NSObject

/**
 Get the shared environment object.
 */
@property (nonatomic, class, readonly) NTKEnvironment *sharedEnvironment;

/**
 Get the authenticated state of the environment switcher
 */
@property (nonatomic, assign, readonly, getter=isAuthenticated) BOOL authenticated;

/**
 Get the available environment names
 */
@property (nonatomic, copy, readonly) NSArray <NSString *> *environments;

/**
 Get name string of the current environment
 */
@property (nonatomic, copy, readonly) NSString *currentEnvironmentName;

/**
 Set the level of logging to occur
 
 @param logLevel NTKLogLevel - NTKLogLevelNone, NTKLogLevelError, NTKLogLevelWarning, NTKLogLevelInfo, NTKLogLevelDebug, NTKLogLevelVerbose
 */
- (void)changeLogLevel:(NTKLogLevel)logLevel;

/**
 Authenticate to the environment singleton to change configuration
 
 @param password Password to allow authentication
 @return BOOL boolean value to determine whether login was successful or not
 */
- (BOOL)authenticateForPassword:(NSString *)password;

/**
 Change the environment the Netki SDK is using
 
 @param environment The name of the environment to switch to
 @return BOOL boolean value to determine if environment change was successful or not
 */
- (BOOL)switchToEnvironment:(NSString *)environment;

@end

NS_ASSUME_NONNULL_END
