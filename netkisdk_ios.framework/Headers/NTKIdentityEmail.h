//
//  NTKIdentityEmail.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 12/6/17.
//  Copyright © 2017 Netki, Inc. All rights reserved.
//

#import "NTKIdentityModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface NTKIdentityEmail : NTKIdentityModel

/**
 The identity email address
 */
@property (nonatomic, strong) NSString *email;

@end

NS_ASSUME_NONNULL_END
