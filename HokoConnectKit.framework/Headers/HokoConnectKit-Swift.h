// Generated by Apple Swift version 3.0.1 (swiftlang-800.0.58.6 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class Campaign;

/**
  The class that represents the Advertiser from a given Campaign.
*/
SWIFT_CLASS("_TtC14HokoConnectKit10Advertiser")
@interface Advertiser : NSObject
/**
  The app code
*/
@property (nonatomic, readonly, copy) NSString * _Nonnull code;
/**
  The app name
*/
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
/**
  The app description. The description can be an empty string
*/
@property (nonatomic, readonly, copy) NSString * _Nonnull shortDescription;
/**
  Once you derive an Advertiser from a group, you can use this method to obtain its campaigns.
  \param completionCallback Callback called when the request is completed and that holds the
  Advertisers array.

  \param failureCallback Callback called when the request has ended with an error.

*/
- (void)getCampaigns:(void (^ _Nonnull)(NSArray<Campaign *> * _Nonnull))completion failure:(void (^ _Nullable)(NSString * _Nullable))failure;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface Advertiser (SWIFT_EXTENSION(HokoConnectKit))
@end


/**
  The class that represents the service offered by the affiliate.
*/
SWIFT_CLASS("_TtC14HokoConnectKit16AffiliateService")
@interface AffiliateService : NSObject
/**
  The title of the service
*/
@property (nonatomic, readonly, copy) NSString * _Nonnull title;
/**
  What the service is about
*/
@property (nonatomic, readonly, copy) NSString * _Nullable shortDescription;
/**
  The amount that the service entails
*/
@property (nonatomic, readonly, copy) NSString * _Nullable value;
/**
  Deeplink to the app
*/
@property (nonatomic, readonly, copy) NSString * _Nonnull link;
- (void)open;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class Group;

/**
  The class that represents a given Campaign.
*/
SWIFT_CLASS("_TtC14HokoConnectKit8Campaign")
@interface Campaign : NSObject
/**
  The campaign group
*/
@property (nonatomic, readonly, strong) Group * _Nullable group;
/**
  The campaign headline
*/
@property (nonatomic, readonly, copy) NSString * _Nullable headline;
/**
  The campaign call to action
*/
@property (nonatomic, readonly, copy) NSString * _Nullable callToAction;
/**
  The campaign text/description or an empty string
*/
@property (nonatomic, readonly, copy) NSString * _Nullable text;
/**
  The advertiser associated with the campaign
*/
@property (nonatomic, readonly, strong) Advertiser * _Nullable advertiser;
/**
  The campaign images
*/
@property (nonatomic, readonly, copy) NSString * _Nullable iconURL;
@property (nonatomic, readonly, copy) NSString * _Nullable image_300x50;
@property (nonatomic, readonly, copy) NSString * _Nullable image_320x48;
@property (nonatomic, readonly, copy) NSString * _Nullable image_468x60;
@property (nonatomic, readonly, copy) NSString * _Nullable image_728x90;
@property (nonatomic, readonly, copy) NSString * _Nullable image_300x250;
@property (nonatomic, readonly, copy) NSString * _Nullable image_320x480;
@property (nonatomic, readonly, copy) NSString * _Nullable image_120x600;
@property (nonatomic, readonly, copy) NSString * _Nullable image_800x1280;
@property (nonatomic, readonly, copy) NSString * _Nullable image_768x1024;
/**
  The campaign code
*/
@property (nonatomic, readonly, copy) NSString * _Nonnull code;
/**
  The campaign name or an empty string
*/
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
/**
  Flag that indicates whether the campaign represents a phone number
*/
@property (nonatomic, readonly) BOOL isPhoneNumber;
/**
  Flag that indicates whether the campaign represents a web link
*/
@property (nonatomic, readonly) BOOL isWeb;
/**
  The campaign tags. The tags can be an empty array
*/
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull tags;
/**
  The campaign metadata. The metadata can be an empty dictionary
*/
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nonnull metadata;
/**
  Flag that indicates whether the campaign is associated to an affiliate
*/
@property (nonatomic, readonly) BOOL isAffiliateCampaign;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class UIViewController;

@interface Campaign (SWIFT_EXTENSION(HokoConnectKit))
/**
  Method that will process and open the campaign, handling all the deeplinking aspects. If, for
  instance, the campaign is holding a web link instead of the deep link, the \code
  openWebLinkCallback
  \endcode
  block will be called with that url so that it can be opened with the app’s custom in-app browser.
  \param onViewController The \code
  UIViewController
  \endcode where the AppStore sheet will be
  presented (if needed).

  \param metadata The metadata that will be sent to the HOKO servers alongside
  the “open” notification. Used for analytics.

  \param screenName The name of the screen where the “open” occurred. This is
  also used for analytics.

  \param storeWillPresentCallback The callback block that will be called when the App Store
  sheet for the campaign’s app is about to be presented.

  \param storeWillDismissCallback The callback block that will be called when the App Store
  sheet for the campaign’s app is about to be dismissed.

  \param appWillOpenCallback The callback block that will be called when the Campaign’s
  app deeplink is about to be opened.

  \param openWebLinkCallback The callback block that will be called when the Campaign’s
  app web link needs to be opened by the developer (with a custom in-app browser, for instance).

*/
- (void)openOnViewController:(UIViewController * _Nonnull)viewController withMetadata:(NSDictionary<NSString *, NSString *> * _Nullable)metadata screenName:(NSString * _Nullable)screenName storeWillPresentCallback:(void (^ _Nullable)(void))storeWillPresentCallback storeWillDismissCallback:(void (^ _Nullable)(void))storeWillDismissCallback appWillOpenCallback:(void (^ _Nullable)(void))appWillOpenCallback openWebLinkCallback:(void (^ _Nullable)(NSString * _Nonnull))openWebLinkCallback affiliateServicesCallback:(void (^ _Nullable)(NSArray<AffiliateService *> * _Nonnull))affiliateServicesCallback failureCallback:(void (^ _Nullable)(NSString * _Nullable))failureCallback;
@end


@interface Campaign (SWIFT_EXTENSION(HokoConnectKit))
@end


SWIFT_CLASS("_TtC14HokoConnectKit7Content")
@interface Content : NSObject
- (nonnull instancetype)initWithId:(NSString * _Nonnull)id text:(NSString * _Nonnull)text type:(NSString * _Nullable)type OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class Location;

SWIFT_CLASS("_TtC14HokoConnectKit7Context")
@interface Context : NSObject
- (nonnull instancetype)initWithName:(NSString * _Nullable)name location:(Location * _Nullable)location datetime:(NSDate * _Nullable)datetime OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface Context (SWIFT_EXTENSION(HokoConnectKit))
- (NSDictionary<NSString *, id> * _Nullable)asJSON;
@property (nonatomic, readonly, copy) NSString * _Nonnull stringValue;
- (NSString * _Nonnull)asDeeplink:(NSArray<NSString *> * _Nonnull)deeplinks;
@end


SWIFT_CLASS("_TtC14HokoConnectKit5Group")
@interface Group : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull code;
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
/**
  Get the campaigns that belongs to this group.
  \param completionCallback Callback called when the request is completed and that holds the
  Campaigns array.

  \param failureCallback Callback called when the request has ended with an error.

*/
- (void)getCampaigns:(void (^ _Nonnull)(NSArray<Campaign *> * _Nonnull))completion failure:(void (^ _Nullable)(NSString * _Nullable))failure;
/**
  Get all the Advertisers that have campaigns that belongs to this group.
  \param completionCallback Callback called when the request is completed and that holds the
  Advertisers array.

  \param failureCallback Callback called when the request has ended with an error.

*/
- (void)getAdvertisers:(void (^ _Nonnull)(NSArray<Advertiser *> * _Nonnull))completion failure:(void (^ _Nullable)(NSString * _Nullable))failure;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface Group (SWIFT_EXTENSION(HokoConnectKit))
@end


SWIFT_CLASS("_TtC14HokoConnectKit14HokoConnectKit")
@interface HokoConnectKit : NSObject
/**
  Shared instance of the HokoConnectKit SDK
*/
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) HokoConnectKit * _Nonnull shared;)
+ (HokoConnectKit * _Nonnull)shared;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull sdkVersion;)
+ (NSString * _Nonnull)sdkVersion;
@property (nonatomic) BOOL isAllowedToAccessUserLocation;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
/**
  Performs the SDK setup with the respective token.
  \param token The \code
  String
  \endcode that identifies your app.

  \param verbose If true, the SDK will print debug messages.

*/
- (void)setup:(NSString * _Nullable)token verbose:(BOOL)verbose;
/**
  This method handles the deeplink that came from one of HOKO’s partners for user attribution.
  This should be called on the AppDelegate’s
  \code
  application(_:openURL:sourceApplication:annotation:)
  \endcode.
  \param url The deeplink that was called on one of HOKO’s partners app.


  returns:
  \code
  true
  \endcode if the deeplink is from a HOKO partner and was processed by the SDK,
  \code
  false
  \endcode otherwise.
*/
- (BOOL)handleAttributionFromIncomingURL:(NSURL * _Nonnull)url;
/**
  Get all the group campaigns available.
  \param completionCallback Callback called when the request is completed and that holds
  the Groups array.

  \param failureCallback Callback called when the request has ended with an error.

*/
- (void)getGroups:(void (^ _Nonnull)(NSArray<Group *> * _Nonnull))completionCallback failureCallback:(void (^ _Nullable)(NSString * _Nullable))failureCallback;
@end


SWIFT_CLASS("_TtC14HokoConnectKit8Location")
@interface Location : NSObject
@property (nonatomic, copy) NSString * _Nullable lat;
@property (nonatomic, copy) NSString * _Nullable lon;
@property (nonatomic, copy) NSString * _Nullable address;
@property (nonatomic, copy) NSString * _Nullable countryCode;
@property (nonatomic, copy) NSString * _Nullable city;
@property (nonatomic, copy) NSString * _Nullable postalCode;
- (nonnull instancetype)initWithLatitude:(NSString * _Nullable)latitude longitude:(NSString * _Nullable)longitude address:(NSString * _Nullable)address countryCode:(NSString * _Nullable)countryCode city:(NSString * _Nullable)city postalCode:(NSString * _Nullable)postalCode OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface NSNumber (SWIFT_EXTENSION(HokoConnectKit))
@end

@class NSURLSession;
@class NSURLAuthenticationChallenge;
@class NSURLCredential;
@class NSURLSessionTask;
@class NSHTTPURLResponse;
@class NSInputStream;
@class NSURLSessionDataTask;
@class NSURLResponse;
@class NSURLSessionDownloadTask;
@class NSCachedURLResponse;
@class NSURLSessionStreamTask;
@class NSOutputStream;

/**
  Responsible for handling all delegate callbacks for the underlying session.
*/
SWIFT_CLASS("_TtC14HokoConnectKit15SessionDelegate")
@interface SessionDelegate : NSObject
/**
  Overrides default behavior for URLSessionDelegate method \code
  urlSession(_:didBecomeInvalidWithError:)
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable sessionDidBecomeInvalidWithError)(NSURLSession * _Nonnull, NSError * _Nullable);
/**
  Overrides all behavior for URLSessionDelegate method \code
  urlSession(_:didReceive:completionHandler:)
  \endcode and requires the caller to call the \code
  completionHandler
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable sessionDidReceiveChallengeWithCompletion)(NSURLSession * _Nonnull, NSURLAuthenticationChallenge * _Nonnull, SWIFT_NOESCAPE void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable));
/**
  Overrides default behavior for URLSessionDelegate method \code
  urlSessionDidFinishEvents(forBackgroundURLSession:)
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable sessionDidFinishEventsForBackgroundURLSession)(NSURLSession * _Nonnull);
/**
  Overrides default behavior for URLSessionTaskDelegate method \code
  urlSession(_:task:willPerformHTTPRedirection:newRequest:completionHandler:)
  \endcode.
*/
@property (nonatomic, copy) NSURLRequest * _Nullable (^ _Nullable taskWillPerformHTTPRedirection)(NSURLSession * _Nonnull, NSURLSessionTask * _Nonnull, NSHTTPURLResponse * _Nonnull, NSURLRequest * _Nonnull);
/**
  Overrides all behavior for URLSessionTaskDelegate method \code
  urlSession(_:task:willPerformHTTPRedirection:newRequest:completionHandler:)
  \endcode and
  requires the caller to call the \code
  completionHandler
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable taskWillPerformHTTPRedirectionWithCompletion)(NSURLSession * _Nonnull, NSURLSessionTask * _Nonnull, NSHTTPURLResponse * _Nonnull, NSURLRequest * _Nonnull, SWIFT_NOESCAPE void (^ _Nonnull)(NSURLRequest * _Nullable));
/**
  Overrides all behavior for URLSessionTaskDelegate method \code
  urlSession(_:task:didReceive:completionHandler:)
  \endcode and
  requires the caller to call the \code
  completionHandler
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable taskDidReceiveChallengeWithCompletion)(NSURLSession * _Nonnull, NSURLSessionTask * _Nonnull, NSURLAuthenticationChallenge * _Nonnull, SWIFT_NOESCAPE void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable));
/**
  Overrides default behavior for URLSessionTaskDelegate method \code
  urlSession(_:task:needNewBodyStream:)
  \endcode.
*/
@property (nonatomic, copy) NSInputStream * _Nullable (^ _Nullable taskNeedNewBodyStream)(NSURLSession * _Nonnull, NSURLSessionTask * _Nonnull);
/**
  Overrides all behavior for URLSessionTaskDelegate method \code
  urlSession(_:task:needNewBodyStream:)
  \endcode and
  requires the caller to call the \code
  completionHandler
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable taskNeedNewBodyStreamWithCompletion)(NSURLSession * _Nonnull, NSURLSessionTask * _Nonnull, SWIFT_NOESCAPE void (^ _Nonnull)(NSInputStream * _Nullable));
/**
  Overrides default behavior for URLSessionTaskDelegate method \code
  urlSession(_:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:)
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable taskDidSendBodyData)(NSURLSession * _Nonnull, NSURLSessionTask * _Nonnull, int64_t, int64_t, int64_t);
/**
  Overrides default behavior for URLSessionTaskDelegate method \code
  urlSession(_:task:didCompleteWithError:)
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable taskDidComplete)(NSURLSession * _Nonnull, NSURLSessionTask * _Nonnull, NSError * _Nullable);
/**
  Overrides default behavior for URLSessionDataDelegate method \code
  urlSession(_:dataTask:didReceive:completionHandler:)
  \endcode.
*/
@property (nonatomic, copy) NSURLSessionResponseDisposition (^ _Nullable dataTaskDidReceiveResponse)(NSURLSession * _Nonnull, NSURLSessionDataTask * _Nonnull, NSURLResponse * _Nonnull);
/**
  Overrides all behavior for URLSessionDataDelegate method \code
  urlSession(_:dataTask:didReceive:completionHandler:)
  \endcode and
  requires caller to call the \code
  completionHandler
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable dataTaskDidReceiveResponseWithCompletion)(NSURLSession * _Nonnull, NSURLSessionDataTask * _Nonnull, NSURLResponse * _Nonnull, SWIFT_NOESCAPE void (^ _Nonnull)(NSURLSessionResponseDisposition));
/**
  Overrides default behavior for URLSessionDataDelegate method \code
  urlSession(_:dataTask:didBecome:)
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable dataTaskDidBecomeDownloadTask)(NSURLSession * _Nonnull, NSURLSessionDataTask * _Nonnull, NSURLSessionDownloadTask * _Nonnull);
/**
  Overrides default behavior for URLSessionDataDelegate method \code
  urlSession(_:dataTask:didReceive:)
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable dataTaskDidReceiveData)(NSURLSession * _Nonnull, NSURLSessionDataTask * _Nonnull, NSData * _Nonnull);
/**
  Overrides default behavior for URLSessionDataDelegate method \code
  urlSession(_:dataTask:willCacheResponse:completionHandler:)
  \endcode.
*/
@property (nonatomic, copy) NSCachedURLResponse * _Nullable (^ _Nullable dataTaskWillCacheResponse)(NSURLSession * _Nonnull, NSURLSessionDataTask * _Nonnull, NSCachedURLResponse * _Nonnull);
/**
  Overrides all behavior for URLSessionDataDelegate method \code
  urlSession(_:dataTask:willCacheResponse:completionHandler:)
  \endcode and
  requires caller to call the \code
  completionHandler
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable dataTaskWillCacheResponseWithCompletion)(NSURLSession * _Nonnull, NSURLSessionDataTask * _Nonnull, NSCachedURLResponse * _Nonnull, SWIFT_NOESCAPE void (^ _Nonnull)(NSCachedURLResponse * _Nullable));
/**
  Overrides default behavior for URLSessionDownloadDelegate method \code
  urlSession(_:downloadTask:didFinishDownloadingTo:)
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable downloadTaskDidFinishDownloadingToURL)(NSURLSession * _Nonnull, NSURLSessionDownloadTask * _Nonnull, NSURL * _Nonnull);
/**
  Overrides default behavior for URLSessionDownloadDelegate method \code
  urlSession(_:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:)
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable downloadTaskDidWriteData)(NSURLSession * _Nonnull, NSURLSessionDownloadTask * _Nonnull, int64_t, int64_t, int64_t);
/**
  Overrides default behavior for URLSessionDownloadDelegate method \code
  urlSession(_:downloadTask:didResumeAtOffset:expectedTotalBytes:)
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable downloadTaskDidResumeAtOffset)(NSURLSession * _Nonnull, NSURLSessionDownloadTask * _Nonnull, int64_t, int64_t);
/**
  Overrides default behavior for URLSessionStreamDelegate method \code
  urlSession(_:readClosedFor:)
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable streamTaskReadClosed)(NSURLSession * _Nonnull, NSURLSessionStreamTask * _Nonnull);
/**
  Overrides default behavior for URLSessionStreamDelegate method \code
  urlSession(_:writeClosedFor:)
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable streamTaskWriteClosed)(NSURLSession * _Nonnull, NSURLSessionStreamTask * _Nonnull);
/**
  Overrides default behavior for URLSessionStreamDelegate method \code
  urlSession(_:betterRouteDiscoveredFor:)
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable streamTaskBetterRouteDiscovered)(NSURLSession * _Nonnull, NSURLSessionStreamTask * _Nonnull);
/**
  Overrides default behavior for URLSessionStreamDelegate method \code
  urlSession(_:streamTask:didBecome:outputStream:)
  \endcode.
*/
@property (nonatomic, copy) void (^ _Nullable streamTaskDidBecomeInputAndOutputStreams)(NSURLSession * _Nonnull, NSURLSessionStreamTask * _Nonnull, NSInputStream * _Nonnull, NSOutputStream * _Nonnull);
/**
  Initializes the \code
  SessionDelegate
  \endcode instance.

  returns:
  The new \code
  SessionDelegate
  \endcode instance.
*/
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/**
  Returns a \code
  Bool
  \endcode indicating whether the \code
  SessionDelegate
  \endcode implements or inherits a method that can respond
  to a specified message.
  \param selector A selector that identifies a message.


  returns:
  \code
  true
  \endcode if the receiver implements or inherits a method that can respond to selector, otherwise \code
  false
  \endcode.
*/
- (BOOL)respondsToSelector:(SEL _Nonnull)selector;
@end


@interface SessionDelegate (SWIFT_EXTENSION(HokoConnectKit)) <NSURLSessionDownloadDelegate>
/**
  Tells the delegate that a download task has finished downloading.
  \param session The session containing the download task that finished.

  \param downloadTask The download task that finished.

  \param location A file URL for the temporary file. Because the file is temporary, you must either
  open the file for reading or move it to a permanent location in your app’s sandbox
  container directory before returning from this delegate method.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didFinishDownloadingToURL:(NSURL * _Nonnull)location;
/**
  Periodically informs the delegate about the download’s progress.
  \param session The session containing the download task.

  \param downloadTask The download task.

  \param bytesWritten The number of bytes transferred since the last time this delegate
  method was called.

  \param totalBytesWritten The total number of bytes transferred so far.

  \param totalBytesExpectedToWrite The expected length of the file, as provided by the Content-Length
  header. If this header was not provided, the value is
  \code
  NSURLSessionTransferSizeUnknown
  \endcode.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didWriteData:(int64_t)bytesWritten totalBytesWritten:(int64_t)totalBytesWritten totalBytesExpectedToWrite:(int64_t)totalBytesExpectedToWrite;
/**
  Tells the delegate that the download task has resumed downloading.
  \param session The session containing the download task that finished.

  \param downloadTask The download task that resumed. See explanation in the discussion.

  \param fileOffset If the file’s cache policy or last modified date prevents reuse of the
  existing content, then this value is zero. Otherwise, this value is an
  integer representing the number of bytes on disk that do not need to be
  retrieved again.

  \param expectedTotalBytes The expected length of the file, as provided by the Content-Length header.
  If this header was not provided, the value is NSURLSessionTransferSizeUnknown.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didResumeAtOffset:(int64_t)fileOffset expectedTotalBytes:(int64_t)expectedTotalBytes;
@end


@interface SessionDelegate (SWIFT_EXTENSION(HokoConnectKit)) <NSURLSessionStreamDelegate>
/**
  Tells the delegate that the read side of the connection has been closed.
  \param session The session.

  \param streamTask The stream task.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session readClosedForStreamTask:(NSURLSessionStreamTask * _Nonnull)streamTask;
/**
  Tells the delegate that the write side of the connection has been closed.
  \param session The session.

  \param streamTask The stream task.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session writeClosedForStreamTask:(NSURLSessionStreamTask * _Nonnull)streamTask;
/**
  Tells the delegate that the system has determined that a better route to the host is available.
  \param session The session.

  \param streamTask The stream task.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session betterRouteDiscoveredForStreamTask:(NSURLSessionStreamTask * _Nonnull)streamTask;
/**
  Tells the delegate that the stream task has been completed and provides the unopened stream objects.
  \param session The session.

  \param streamTask The stream task.

  \param inputStream The new input stream.

  \param outputStream The new output stream.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session streamTask:(NSURLSessionStreamTask * _Nonnull)streamTask didBecomeInputStream:(NSInputStream * _Nonnull)inputStream outputStream:(NSOutputStream * _Nonnull)outputStream;
@end


@interface SessionDelegate (SWIFT_EXTENSION(HokoConnectKit)) <NSURLSessionDelegate>
/**
  Tells the delegate that the session has been invalidated.
  \param session The session object that was invalidated.

  \param error The error that caused invalidation, or nil if the invalidation was explicit.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session didBecomeInvalidWithError:(NSError * _Nullable)error;
/**
  Requests credentials from the delegate in response to a session-level authentication request from the
  remote server.
  \param session The session containing the task that requested authentication.

  \param challenge An object that contains the request for authentication.

  \param completionHandler A handler that your delegate method must call providing the disposition
  and credential.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
/**
  Tells the delegate that all messages enqueued for a session have been delivered.
  \param session The session that no longer has any outstanding requests.

*/
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(NSURLSession * _Nonnull)session;
@end


@interface SessionDelegate (SWIFT_EXTENSION(HokoConnectKit)) <NSURLSessionDataDelegate>
/**
  Tells the delegate that the data task received the initial reply (headers) from the server.
  \param session The session containing the data task that received an initial reply.

  \param dataTask The data task that received an initial reply.

  \param response A URL response object populated with headers.

  \param completionHandler A completion handler that your code calls to continue the transfer, passing a
  constant to indicate whether the transfer should continue as a data task or
  should become a download task.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveResponse:(NSURLResponse * _Nonnull)response completionHandler:(void (^ _Nonnull)(NSURLSessionResponseDisposition))completionHandler;
/**
  Tells the delegate that the data task was changed to a download task.
  \param session The session containing the task that was replaced by a download task.

  \param dataTask The data task that was replaced by a download task.

  \param downloadTask The new download task that replaced the data task.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didBecomeDownloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask;
/**
  Tells the delegate that the data task has received some of the expected data.
  \param session The session containing the data task that provided data.

  \param dataTask The data task that provided data.

  \param data A data object containing the transferred data.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveData:(NSData * _Nonnull)data;
/**
  Asks the delegate whether the data (or upload) task should store the response in the cache.
  \param session The session containing the data (or upload) task.

  \param dataTask The data (or upload) task.

  \param proposedResponse The default caching behavior. This behavior is determined based on the current
  caching policy and the values of certain received headers, such as the Pragma
  and Cache-Control headers.

  \param completionHandler A block that your handler must call, providing either the original proposed
  response, a modified version of that response, or NULL to prevent caching the
  response. If your delegate implements this method, it must call this completion
  handler; otherwise, your app leaks memory.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask willCacheResponse:(NSCachedURLResponse * _Nonnull)proposedResponse completionHandler:(void (^ _Nonnull)(NSCachedURLResponse * _Nullable))completionHandler;
@end

@class NSURLSessionTaskMetrics;

@interface SessionDelegate (SWIFT_EXTENSION(HokoConnectKit)) <NSURLSessionTaskDelegate>
/**
  Tells the delegate that the remote server requested an HTTP redirect.
  \param session The session containing the task whose request resulted in a redirect.

  \param task The task whose request resulted in a redirect.

  \param response An object containing the server’s response to the original request.

  \param request A URL request object filled out with the new location.

  \param completionHandler A closure that your handler should call with either the value of the request
  parameter, a modified URL request object, or NULL to refuse the redirect and
  return the body of the redirect response.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task willPerformHTTPRedirection:(NSHTTPURLResponse * _Nonnull)response newRequest:(NSURLRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(NSURLRequest * _Nullable))completionHandler;
/**
  Requests credentials from the delegate in response to an authentication request from the remote server.
  \param session The session containing the task whose request requires authentication.

  \param task The task whose request requires authentication.

  \param challenge An object that contains the request for authentication.

  \param completionHandler A handler that your delegate method must call providing the disposition
  and credential.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
/**
  Tells the delegate when a task requires a new request body stream to send to the remote server.
  \param session The session containing the task that needs a new body stream.

  \param task The task that needs a new body stream.

  \param completionHandler A completion handler that your delegate method should call with the new body stream.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task needNewBodyStream:(void (^ _Nonnull)(NSInputStream * _Nullable))completionHandler;
/**
  Periodically informs the delegate of the progress of sending body content to the server.
  \param session The session containing the data task.

  \param task The data task.

  \param bytesSent The number of bytes sent since the last time this delegate method was called.

  \param totalBytesSent The total number of bytes sent so far.

  \param totalBytesExpectedToSend The expected length of the body data.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didSendBodyData:(int64_t)bytesSent totalBytesSent:(int64_t)totalBytesSent totalBytesExpectedToSend:(int64_t)totalBytesExpectedToSend;
/**
  Tells the delegate that the session finished collecting metrics for the task.
  \param session The session collecting the metrics.

  \param task The task whose metrics have been collected.

  \param metrics The collected metrics.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didFinishCollectingMetrics:(NSURLSessionTaskMetrics * _Nonnull)metrics;
/**
  Tells the delegate that the task finished transferring data.
  \param session The session containing the task whose request finished transferring data.

  \param task The task whose request finished transferring data.

  \param error If an error occurred, an error object indicating how the transfer failed, otherwise nil.

*/
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didCompleteWithError:(NSError * _Nullable)error;
@end

@class NSOperationQueue;

/**
  The task delegate is responsible for handling all delegate callbacks for the underlying task as well as
  executing all operations attached to the serial operation queue upon task completion.
*/
SWIFT_CLASS("_TtC14HokoConnectKit12TaskDelegate")
@interface TaskDelegate : NSObject
/**
  The serial operation queue used to execute all operations after the task completes.
*/
@property (nonatomic, readonly, strong) NSOperationQueue * _Nonnull queue;
/**
  The data returned by the server.
*/
@property (nonatomic, readonly, copy) NSData * _Nullable data;
/**
  The error generated throughout the lifecyle of the task.
*/
@property (nonatomic) NSError * _Nullable error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface NSURLSession (SWIFT_EXTENSION(HokoConnectKit))
@end

#pragma clang diagnostic pop
