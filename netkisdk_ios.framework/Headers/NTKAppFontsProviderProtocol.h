//
//  NTKAppFontsProviderProtocol.h
//  netkisdk-ios
//
//  Created by Admin on 3/30/19.
//  Copyright © 2019 Netki, Inc. All rights reserved.
//

@protocol NTKAppFontsProviderProtocol <NSObject>

- (UIFont *)appPrimaryFontOfSize:(CGFloat)size;
- (UIFont *)appButtonFontOfSize:(CGFloat)size;
- (UIFont *)appValidationResultsFontOfSize:(CGFloat)size;

@end
