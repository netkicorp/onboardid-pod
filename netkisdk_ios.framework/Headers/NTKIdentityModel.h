//
//  NTKIdentityModel.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 12/6/17.
//  Copyright © 2017 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NTKIdentityModel : NSObject

/**
 Read only value returning a dictionary representation of the object
 */
@property (nonatomic, copy, readonly) NSDictionary *parameters;

@end

NS_ASSUME_NONNULL_END
