//
//  NTKModel.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 11/30/17.
//  Copyright © 2017 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NTKModel : NSObject

/**
 The method to create an instance of a model object
 
 @param json A collection conforming to NSFastEnumeration
 @return An instance of the model object
 */
- (instancetype)initWithJSON:(NSDictionary<NSString *,id> *)json;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
