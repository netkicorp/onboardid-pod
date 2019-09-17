//
//  NTKFontsProvider.h
//  netkisdk-ios
//
//  Created by Admin on 3/29/19.
//  Copyright © 2019 Netki, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NTKAppFontsProviderProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface NTKAppFontsController : NSObject

+ (void)setAppFontsProvider:(id<NTKAppFontsProviderProtocol>)appFontsProvider;

@end

NS_ASSUME_NONNULL_END
