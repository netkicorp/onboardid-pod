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
@property (readonly) BOOL isTooDark;
@property (readonly) BOOL isTooLight;
@property (readonly) BOOL isBlurred;
@property (readonly) CGRect position;

/* Debug values */
@property (assign) float glareValue;
@property (assign) float brightPercentage;
@property (assign) float darkPercentage;
/*==============*/

//    int left, top, right, bottom;

@end

@interface NetkiVision : NSObject

+ (void)setDarkLevel:(int)darkLevel;
+ (void)setBrightLevel:(int)brightLevel;

+ (int)darkLevel;
+ (int)brightLevel;

+ (void)setDarkPercentage:(float)darkPercentage;
+ (void)setBrightPercentage:(float)brightPercentage;

+ (float)darkPercentage;
+ (float)brightPercentage;

+ (void)setGlareMin:(int)min;
+ (void)setGlareMax:(int)max;

+ (int)glareMin;
+ (int)glareMax;

+ (void)setExposureLevel:(int)exposureLevel;
+ (int)exposureLevel;

- (NTKVFrameResult *)rectangleDetectionOnFrame:(CVPixelBufferRef)frame;
- (NTKVFrameResult *)lightningDetectionOnFrame:(CVPixelBufferRef)frame;

- (UIImage *) pixelBufferToUIImageFromPixelBuffer: (CVPixelBufferRef)buffer;

- (BOOL)detectMRZOnImage:(UIImage *)image results:(nullable NSMutableDictionary *)results;

+ (CVPixelBufferRef)bufferRefFromImage:(UIImage *)image;

- (BOOL)matchUIImage:(UIImage *)uiImage1 withUIImage:(UIImage *)uiImage2;

@end

NS_ASSUME_NONNULL_END
