NetkiSDK-iOS
============
## Installation

The NetkiSDK framework has dependencies, so before compilation you should add the following lines into your project podfile:

```
pod 'GoogleMobileVision/BarcodeDetector'
pod 'Amplitude-iOS', '~> 4.10'
```

Also add the NetkiSDK pod from Netki repository:

```
pod 'NetkiSDK', :git => 'https://YOUR_NAME@bitbucket.org/eimai/ios-pod.git', :branch => 'master'
```

Where "YOUR_NAME" is your BitBucket's account name

After that run 'pod install' and compile your project workspace

## Integration


This is the iOS framework for validating user identity through the Netki web service.

* Way to create the controller for ID capture

NTKIDCaptureViewController *idCaptureController = [[NTKIDCaptureViewController alloc] initWithIssuingCountry:NetkiClient.sharedClient.issuingCountry doctype:NTKDocTypeDriversLicense imageType:NTKDocumentImageTypeFRONT];

idCaptureController.delegate = self;
[self presentViewController:idCaptureController animated:YES completion:nil];

* Input values:

    * NTKDocType enum
typedef NS_ENUM(NSInteger, NTKDocType) {
    NTKDocTypeDriversLicense,
    NTKDocTypePassport,
    NTKDocTypeGovernmentID,
    NTKDocTypeOther
};

    * NTKDocumentImageType
NTKDocumentImageType const NTKDocumentImageTypeFRONT;
NTKDocumentImageType const NTKDocumentImageTypePASSPORT;
NTKDocumentImageType const NTKDocumentImageTypePASSPORTLASTPAGE;
NTKDocumentImageType const NTKDocumentImageTypeBACK;
NTKDocumentImageType const NTKDocumentImageTypeSELFIE;

* If you want to hide the review screen automatically, use review validation strategy. Please see the example below:
- (void)startDocumentFrontDetection {
    NTKIDCaptureViewController *idCaptureController = [[NTKIDCaptureViewController alloc] initWithIssuingCountry:NetkiClient.sharedClient.issuingCountry doctype:NTKDocTypeDriversLicense imageType:NTKDocumentImageTypeFRONT];
    idCaptureController.delegate = self;
    idCaptureController.reviewValidationStrategy = [NTKReviewValidationStrategyCloseIfAllDataValid strategyWithCloseFlag:YES timeout:2.0f];
    [self presentViewController:idCaptureController animated:YES completion:nil];
}

* Delegate description
   * NTKCaptureControllerDelegate
@protocol NTKCaptureControllerDelegate <NSObject>

@required
/**
Called when the *viewController* finishes capturing ID related document images. The *viewController* will dismiss itself.

@param viewController The sender of the message
@param documentImage The captured document image
@see NTKDocumentImage
*/
- (void)captureController:(UIViewController *)viewController didCaptureDocumentImage:(NTKDocumentImage *)documentImage;

/**
Called when the *viewController* finishes capturing ID related document images. The *viewController* will dismiss itself.

@param viewController The sender of the message
@param documentImage The captured document image
@see NTKDocumentImage
*/
- (void)captureController:(UIViewController *)viewController didCaptureDocumentImage:(NTKDocumentImage *)documentImage;


/**
Called when the *viewController* capture was cancelled by the user. The *viewController* will dismiss itself.

@param viewController The sender of the message
*/
- (void)captureControllerDidCancel:(UIViewController *)viewController;

@end

* Processing result values:
    
    * NTKDocumentImage description:

@interface NTKDocumentImage : NSObject

@property (nonatomic, strong, readonly) UIImage *image;
@property (nonatomic, strong, readonly) NTKDocumentImageType imageType;
@property (nonatomic, assign, readonly) NTKDocType docType;
@property (nonatomic, strong, nullable, readonly) NTKCountry *issuingCountry;
@property (nonatomic, strong, readonly) NTKFaceRecognitionInfo *faceRecognitionInfo;
@property (nonatomic, strong, readonly) NTKBarcodeRecognitionInfo *barcodeRecognitionInfo;
@property (nonatomic, strong) UIImage *croppedDocumentFace;
@property (nonatomic, strong) NTKMRZInfo *mrzInfo;

@end

* If face detected on the document -- you can access it using "croppedDocumentFace" parameter.

* If barcode detected on the document -- use the "barcodeRecognitionInfo":

@interface NTKBarcodeDriverLicenseInfo: NSObject

@property (nonatomic, strong) NSString *documentType;
@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *middleName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSString *gender;
@property (nonatomic, strong) NSString *addressStreet;
@property (nonatomic, strong) NSString *addressCity;
@property (nonatomic, strong) NSString *addressState;
@property (nonatomic, strong) NSString *addressZip;
@property (nonatomic, strong) NSString *licenseNumber;
@property (nonatomic, strong) NSString *issueDate;
@property (nonatomic, strong) NSString *expiryDate;
@property (nonatomic, strong) NSString *birthDate;
@property (nonatomic, strong) NSString *issuingCountry;

@end

* If passport number detected on the image -- use the "passportBackInfo":

@interface NTKBarcodePassportBackInfo : NSObject
@property (nonatomic, strong) NSString *licenseNumber;

@end


@interface NTKBarcodeRecognitionInfo : NSObject
@property (nonatomic, strong) NSDictionary *rawInfo;
@property (nonatomic, strong) NTKBarcodeDriverLicenseInfo *diverLicenseInfo;
@property (nonatomic, strong) NTKBarcodePassportBackInfo *passportBackInfo;

- (instancetype)initWithDriverLicenseRawData:(NSDictionary *)rawData;

@end

* Access the MRZ info using mrzInfo parameter:

@interface NTKMRZInfo : NSObject
@property (readonly) NSString *birthDate;
@property (readonly) NSString *docType;
@property (readonly) NSString *documentNumber;
@property (readonly) NSString *expiryDate;
@property (readonly) NSString *givenName;
@property (readonly) NSString *invitNumber;
@property (readonly) NSString *issuerAbbr;
@property (readonly) NSString *nameGroup;
@property (readonly) NSString *nationAbbr;
@property (readonly) NSString *personalNumber;
@property (readonly) NSString *sex;
@property (readonly) NSString *surName;
@property (readonly) NSString *visaId;

+ (instancetype)mrzInfoWithDictionary:(NSDictionary *)dictionary;

@end

* Set custom text labels:

@interface NTKCustomTextProvider : NSObject

+ (NSString *)headerForCaptureDLFront;
+ (void)setHeaderForCaptureDLFront:(NSString *)text;

+ (NSString *)headerForCaptureDLBack;
+ (void)setHeaderForCaptureDLBack:(NSString *)text;

+ (NSString *)headerForCapturePassportFront;
+ (void)setHeaderForCapturePassportFront:(NSString *)text;

+ (NSString *)headerForCapturePassportLastPage;
+ (void)setHeaderForCapturePassportLastPage:(NSString *)text;

@end

* Show or hide "Lay The Phone Flat" and "Move Phone Closer" labels:

@interface NTKSDKSettingsProvider : NSObject
* Use this value to enable or disable the "Lay The Phone Flat". The default value is "YES" 
@property (assign, nonatomic) BOOL showLayPhoneFlatLabel;
* Use this value to enable or disable the "Move Phone Closer". The default value is "YES" 
@property (assign, nonatomic) BOOL showMovePhoneCloserLabel;

* Use this value to set the shutter button appearence interval in seconds. Set it to "0" if you want the button to appear immediately. The default value is "3" 
@property (assign, nonatomic) float captureButtonAppearanceInterval;

+ (instancetype)sharedInstance;

@end
