//
//  NetkiVision.h
//  netkivision
//
//  Created by Admin on 2/25/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NTKVFrameResult : NSObject

@property (readonly) BOOL success;

@property (readonly) CGRect position;

@property (readonly) NSNumber *angle;

@end

@interface NetkiVision : NSObject

+ (void)preLoadTFModel;

- (NTKVFrameResult *)rectangleDetectionOnFrame:(CVPixelBufferRef)frame isTensorFlow:(BOOL)isTensorFlow;

- (UIImage *) pixelBufferToUIImageFromPixelBuffer: (CVPixelBufferRef)buffer;

- (BOOL)detectMRZOnImage:(UIImage *)image results:(nullable NSMutableDictionary *)results;

+ (CVPixelBufferRef)bufferRefFromImage:(UIImage *)image;

- (BOOL)matchUIImage:(UIImage *)uiImage1 withUIImage:(UIImage *)uiImage2;

- (NSString *) detectBarcode:(UIImage *)uiImage;

@end

NS_ASSUME_NONNULL_END
