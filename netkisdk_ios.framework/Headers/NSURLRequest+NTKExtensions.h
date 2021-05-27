//
//  NSURLRequest+NTKExtensions.h
//  netkisdk-ios
//
//  Created by Jason Anderson on 11/11/17.
//  Copyright © 2017 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Typedef for string constants for supported HTTP methods. See http://www.w3.org/Protocols/rfc2616/rfc2616-sec9.html for more information.
 */
typedef NSString* NTKHTTPMethod NS_EXTENSIBLE_STRING_ENUM;

FOUNDATION_EXPORT NTKHTTPMethod const NTKHTTPMethodOPTIONS;
FOUNDATION_EXPORT NTKHTTPMethod const NTKHTTPMethodGET;
FOUNDATION_EXPORT NTKHTTPMethod const NTKHTTPMethodHEAD;
FOUNDATION_EXPORT NTKHTTPMethod const NTKHTTPMethodPOST;
FOUNDATION_EXPORT NTKHTTPMethod const NTKHTTPMethodPUT;
FOUNDATION_EXPORT NTKHTTPMethod const NTKHTTPMethodDELETE;
FOUNDATION_EXPORT NTKHTTPMethod const NTKHTTPMethodTRACE;
FOUNDATION_EXPORT NTKHTTPMethod const NTKHTTPMethodCONNECT;

/**
 Typedef for string constants for supported HTTP header fields. See https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html for more information.
 */
typedef NSString* NTKHTTPHeaderField NS_EXTENSIBLE_STRING_ENUM;

FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldAccept;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldAcceptCharset;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldAcceptEncoding;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldAcceptLanguage;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldAcceptRanges;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldAge;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldAllow;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldAuthorization;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldCacheControl;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldConnection;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldContentEncoding;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldContentLanguage;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldContentLength;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldContentLocation;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldContentMD5;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldContentRange;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldContentType;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldDate;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldETag;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldExpect;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldExpires;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldFrom;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldHost;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldIfMatch;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldIfModifiedSince;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldIfNoneMatch;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldIfRange;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldIfUnmodifiedSince;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldLastModified;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldLocation;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldMaxForwards;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldPragma;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldProxyAuthenticate;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldProxyAuthorization;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldRange;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldReferer;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldRetryAfter;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldServer;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldTE;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldTrailer;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldTransferEncoding;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldUpgrade;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldUserAgent;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldVary;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldVia;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldWarning;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldWWWAuthenticate;
//Netki Custom Header Fields
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldXNetkiPartner;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldAppMetaData;
FOUNDATION_EXPORT NTKHTTPHeaderField const NTKHTTPHeaderFieldIdentifier;

@interface NSURLRequest (NTKExtensions)

/**
 Returns `[self NTK_URLRequestWithURL:URL HTTPMethod:HTTPMethod HTTPHeaderFields:nil]`.
 
 @param URL The URL for the request
 @param HTTPMethod The HTTP method for the request
 @return The request
 */
+ (NSURLRequest *)NTK_URLRequestWithURL:(NSURL *)URL HTTPMethod:(NTKHTTPMethod)HTTPMethod;

/**
 Creates and returns an `NSURLRequest` instance with the provided *URL*, *HTTPMethod* and *HTTPHeaderFields*.
 
 @param URL The URL for the request
 @param HTTPMethod The HTTP method for the request
 @param HTTPHeaderFields The HTTP header fields for the request
 @return The request
 */
+ (NSURLRequest *)NTK_URLRequestWithURL:(NSURL *)URL HTTPMethod:(NTKHTTPMethod)HTTPMethod HTTPHeaderFields:(nullable NSDictionary<NTKHTTPHeaderField, NSString *> *)HTTPHeaderFields;

/**
 Creates and returns an `NSURLRequest` instance with the provided *URL*, *HTTPMethod*, *HTTPHeaderFields* and *JSONParameters*.
 
 @param URL The URL for the request
 @param HTTPMethod The HTTP method for the request
 @param HTTPHeaderFields The HTTP header fields for the request
 @prarm JSONParameters The JSON body to send with the request
 @return The request
 */
+ (NSURLRequest *)NTK_URLRequestWithURL:(NSURL *)URL HTTPMethod:(NTKHTTPMethod)HTTPMethod HTTPHeaderFields:(nullable NSDictionary<NTKHTTPHeaderField, NSString *> *)HTTPHeaderFields JSONParameters:(nullable NSDictionary<NSString *, id> *)JSONParameters;

/**
 Creates and returns an `NSURLRequest` instance with the provided *URL*, *HTTPMethod*, *HTTPHeaderFields* and *NSData*.
 
 @param URL The URL for the request
 @param HTTPMethod The HTTP method for the request
 @param HTTPHeaderFields The HTTP header fields for the request
 @prarm fileData The NSData object to be uploaded as multipart form data
 @return The request
 */
+ (NSURLRequest *)NTK_URLRequestWithURL:(NSURL *)URL HTTPMethod:(NTKHTTPMethod)HTTPMethod HTTPHeaderFields:(nullable NSDictionary<NTKHTTPHeaderField, NSString *> *)HTTPHeaderFields fileData:(nullable NSData *)fileData;

/**
 Creates and returns a `NSData` instance representing the multipart form body.
 
 @param boundary Unique string to use as boundary
 @param data File data to be uploaded
 @param mimeType MimeType of the file to be uplaoded
 @param filename The filename for the file to be uploaded
 @return The multipart form body
 */
+ (NSData *)NTK_multipartFormBodyWithBoundary:(NSString *)boundary data:(NSData *)data mimeType:(NSString *)mimeType filename:(NSString *)filename;

@end

NS_ASSUME_NONNULL_END
