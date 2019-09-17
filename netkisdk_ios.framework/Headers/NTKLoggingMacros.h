//
//  NTKLoggingMacros.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 11/15/17.
//  Copyright © 2017 Netki, Inc. All rights reserved.
//

#ifndef __NTK_LOGGING_MACROS__
#define __NTK_LOGGING_MACROS__

#import <Foundation/Foundation.h>

/**
 Options mask describing what log statements should show up.
 */
typedef NS_OPTIONS(NSUInteger, NTKLogFlags) {
    /**
     No logging statements will show up.
     */
    NTKLogFlagsNone = 0,
    /**
     Only NTKLogError() statements will show up.
     */
    NTKLogFlagsError = 1 << 0,
    /**
     NTKLogWarning() and below statements will show up.
     */
    NTKLogFlagsWarning = 1 << 1,
    /**
     NTKLogInfo() and below statements will show up.
     */
    NTKLogFlagsInfo = 1 << 2,
    /**
     NTKLogDebug() and below statements will show up.
     */
    NTKLogFlagsDebug = 1 << 3,
    /**
     NTKLogVerbose() and below statements will show up.
     */
    NTKLogFlagsVerbose = 1 << 4
};

/**
 Enum describing the current log level. This should be defined somewhere in your project as a static const variable named kNTKLogLevel with the value equal to one of the below values.
 
 static NSInteger const kKSTLogLevel = ...;
 */
typedef NS_ENUM(NSInteger, NTKLogLevel) {
    /**
     Nothing is logged.
     */
    NTKLogLevelNone = NTKLogFlagsNone,
    /**
     Only error statements are logged.
     */
    NTKLogLevelError = NTKLogFlagsError,
    /**
     Only warning and below statements are logged.
     */
    NTKLogLevelWarning = NTKLogLevelError | NTKLogFlagsWarning,
    /**
     Only info and below statements are logged.
     */
    NTKLogLevelInfo = NTKLogLevelWarning | NTKLogFlagsInfo,
    /**
     Only debug and below statements are logged.
     */
    NTKLogLevelDebug = NTKLogLevelInfo | NTKLogFlagsDebug,
    /**
     Only verbose and below statements are logged.
     */
    NTKLogLevelVerbose = NTKLogLevelDebug | NTKLogFlagsVerbose
};

#ifdef DEBUG

#define NTKLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

#else

#ifdef NTK_LOGGING_DISABLE_RELEASE_LOGGING
#define NTKLog(...)
#else
#define NTKLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#endif

#endif

#define NTKLogObject(objectToLog) NTKLog(@"%@",objectToLog)
#define NTKLogCGRect(rectToLog) NTKLogObject(NSStringFromCGRect(rectToLog))
#define NTKLogCGSize(sizeToLog) NTKLogObject(NSStringFromCGSize(sizeToLog))
#define NTKLogCGPoint(pointToLog) NTKLogObject(NSStringFromCGPoint(pointToLog))
#define NTKLogCGFloat(floatToLog) NTKLog(@"%f",floatToLog)
#define NTKLogBOOL(boolToLog) NTKLog(@"%@",boolToLog ? @"YES" : @"NO")

/**
 The variable name that should be used when defining the current log level.
 */
#ifndef NTK_LOGGING_LOG_LEVEL_DEF
#define NTK_LOGGING_LOG_LEVEL_DEF NTKLoggingLevel
#endif

/**
 Macro used to check against the current log level and execute the log statement.
 
 This will throw an error if kNTKLogLevel is not defined somewhere within your project.
 */
#define NTKLogMaybe(lvl, flg, fmt, ...) \
do {if (lvl & flg) {NTKLog(fmt, ##__VA_ARGS__);}} while(0)

#define NTKLogError(fmt, ...) NTKLogMaybe(NTK_LOGGING_LOG_LEVEL_DEF, NTKLogFlagsError, fmt, ##__VA_ARGS__)
#define NTKLogWarning(fmt, ...) NTKLogMaybe(NTK_LOGGING_LOG_LEVEL_DEF, NTKLogFlagsWarning, fmt, ##__VA_ARGS__)
#define NTKLogInfo(fmt, ...) NTKLogMaybe(NTK_LOGGING_LOG_LEVEL_DEF, NTKLogFlagsInfo, fmt, ##__VA_ARGS__)
#define NTKLogDebug(fmt, ...) NTKLogMaybe(NTK_LOGGING_LOG_LEVEL_DEF, NTKLogFlagsDebug, fmt, ##__VA_ARGS__)
#define NTKLogVerbose(fmt, ...) NTKLogMaybe(NTK_LOGGING_LOG_LEVEL_DEF, NTKLogFlagsVerbose, fmt, ##__VA_ARGS__)

#endif /* NTKLoggingMacros_h */
