#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.5.2 (swiftlang-1300.0.47.5 clang-1300.0.29.30)
#ifndef APPIERADS_SWIFT_H
#define APPIERADS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
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

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
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
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AppierAds",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

enum APRDataKey : NSInteger;

SWIFT_CLASS("_TtC9AppierAds11APRAdExtras")
@interface APRAdExtras : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)setWithKey:(enum APRDataKey)key value:(id _Nonnull)value;
- (id _Nullable)getWithKey:(enum APRDataKey)key SWIFT_WARN_UNUSED_RESULT;
@end

@class NSString;

SWIFT_PROTOCOL("_TtP9AppierAds19APRAdUnitIdentifier_")
@protocol APRAdUnitIdentifier
- (NSString * _Nonnull)get SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)build SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9AppierAds11APRAdUnitId")
@interface APRAdUnitId : NSObject <APRAdUnitIdentifier>
- (nonnull instancetype)init:(NSString * _Nonnull)adUnitId OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)get SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)build SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@class APRAdsConfiguraiton;
@class NSNumber;

SWIFT_CLASS("_TtC9AppierAds6APRAds")
@interface APRAds : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) APRAds * _Nonnull shared;)
+ (APRAds * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (void)setShared:(APRAds * _Nonnull)value;
@property (nonatomic, strong) APRAdsConfiguraiton * _Nonnull configuration;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@property (nonatomic, readonly, copy) NSString * _Nonnull version;
- (void)startWithCompletion:(void (^ _Nullable)(BOOL))completion;
@end

enum APRTestMode : NSInteger;
enum APRBrowserAgent : NSInteger;

SWIFT_CLASS("_TtC9AppierAds19APRAdsConfiguraiton")
@interface APRAdsConfiguraiton : NSObject
@property (nonatomic) enum APRTestMode testMode;
@property (nonatomic) enum APRBrowserAgent browserAgent;
@property (nonatomic, copy) NSString * _Nullable sourceAppId;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9AppierAds12AppierBaseAd")
@interface AppierBaseAd : NSObject
- (void)setWithExtras:(APRAdExtras * _Nullable)extras;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@protocol APRBannerAdDelegate;
@class UIWebView;

SWIFT_CLASS("_TtC9AppierAds11APRBannerAd")
@interface APRBannerAd : AppierBaseAd
@property (nonatomic, weak) id <APRBannerAdDelegate> _Nullable delegate;
- (nonnull instancetype)initWithAdUnitId:(id <APRAdUnitIdentifier> _Nonnull)adUnitId OBJC_DESIGNATED_INITIALIZER;
- (UIWebView * _Nullable)getWebView SWIFT_WARN_UNUSED_RESULT;
- (void)loadAd;
@end

@class NSURLRequest;

@interface APRBannerAd (SWIFT_EXTENSION(AppierAds)) <UIWebViewDelegate>
- (BOOL)webView:(UIWebView * _Nonnull)webView shouldStartLoadWithRequest:(NSURLRequest * _Nonnull)request navigationType:(UIWebViewNavigationType)navigationType SWIFT_WARN_UNUSED_RESULT;
@end

@class APRError;

SWIFT_PROTOCOL("_TtP9AppierAds19APRBannerAdDelegate_")
@protocol APRBannerAdDelegate
- (void)onAdLoadedWithBannerAd:(APRBannerAd * _Nonnull)bannerAd;
- (void)onAdLoadFailedWithBannerAd:(APRBannerAd * _Nonnull)bannerAd error:(APRError * _Nonnull)error;
- (void)onViewClickWithBannerAd:(APRBannerAd * _Nonnull)bannerAd;
@end

@protocol APRBannerAdViewDelegate;
@class NSCoder;

SWIFT_CLASS("_TtC9AppierAds15APRBannerAdView")
@interface APRBannerAdView : UIView
@property (nonatomic, weak) id <APRBannerAdViewDelegate> _Nullable delegate;
- (nonnull instancetype)initWithAdUnitId:(id <APRAdUnitIdentifier> _Nonnull)adUnitId;
- (nonnull instancetype)initWithAdUnitId:(id <APRAdUnitIdentifier> _Nonnull)adUnitId size:(CGSize)size OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)setWithAdUnitId:(id <APRAdUnitIdentifier> _Nonnull)adUnitId;
- (void)setWithExtras:(APRAdExtras * _Nonnull)extras;
- (void)loadAd;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


@interface APRBannerAdView (SWIFT_EXTENSION(AppierAds)) <APRBannerAdDelegate>
- (void)onAdLoadFailedWithBannerAd:(APRBannerAd * _Nonnull)bannerAd error:(APRError * _Nonnull)error;
- (void)onViewClickWithBannerAd:(APRBannerAd * _Nonnull)bannerAd;
- (void)onAdLoadedWithBannerAd:(APRBannerAd * _Nonnull)bannerAd;
@end


SWIFT_PROTOCOL("_TtP9AppierAds23APRBannerAdViewDelegate_")
@protocol APRBannerAdViewDelegate
- (void)adViewDidLoadAdWithView:(APRBannerAdView * _Nonnull)view adSize:(CGSize)adSize;
- (void)adViewDidFailToLoadAdWithErrorWithView:(APRBannerAdView * _Nonnull)view error:(APRError * _Nonnull)error;
@end

typedef SWIFT_ENUM(NSInteger, APRBrowserAgent, open) {
  APRBrowserAgentNative = 0,
};

typedef SWIFT_ENUM(NSInteger, APRDataKey, open) {
  APRDataKeyAdUnitId = 0,
  APRDataKeyZoneId = 1,
  APRDataKeyAdWidth = 2,
  APRDataKeyAdHeight = 3,
  APRDataKeyAdOrientation = 4,
};

enum APRErrorType : NSInteger;

SWIFT_CLASS("_TtC9AppierAds8APRError")
@interface APRError : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)initWithType:(enum APRErrorType)type OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, APRErrorType, open) {
  APRErrorTypeNoFill = 0,
  APRErrorTypeZoneIdError = 1,
  APRErrorTypeAdUnitIdError = 2,
  APRErrorTypeNetworkError = 3,
  APRErrorTypeBadRequest = 4,
  APRErrorTypeInternalServerError = 5,
  APRErrorTypeInvalidJson = 6,
  APRErrorTypeWebViewError = 7,
  APRErrorTypeVideoPlaybackError = 8,
  APRErrorTypeVideoFileError = 9,
  APRErrorTypeFetchImageError = 10,
  APRErrorTypeUnknownError = 11,
};


SWIFT_CLASS("_TtC9AppierAds9APRLogger")
@interface APRLogger : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull category;
@property (nonatomic, readonly) BOOL enable;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@protocol NativeAdDelegate;
@class UIImage;
@protocol APRNativeAdRendering;

SWIFT_CLASS("_TtC9AppierAds11APRNativeAd")
@interface APRNativeAd : AppierBaseAd
@property (nonatomic, weak) id <NativeAdDelegate> _Nullable delegate;
@property (nonatomic, readonly, copy) NSString * _Nullable title;
@property (nonatomic, readonly, copy) NSString * _Nullable mainText;
@property (nonatomic, readonly, copy) NSString * _Nullable callToAction;
@property (nonatomic, readonly, strong) UIImage * _Nullable iconImage;
@property (nonatomic, readonly, strong) UIImage * _Nullable mainImage;
@property (nonatomic, readonly, strong) UIImage * _Nullable privacyInformationImage;
- (nonnull instancetype)initWithAdUnitId:(id <APRAdUnitIdentifier> _Nonnull)adUnitId;
- (void)setWithRenderer:(id <APRNativeAdRendering> _Nonnull)renderer;
- (void)loadAd;
- (void)render;
- (void)clickAdViewWithSender:(id _Nullable)sender;
- (void)clickPrivacyInformationViewWithSender:(id _Nullable)sender;
@end

@class UILabel;
@class UIImageView;

/// The APRNativeAdRendering protocol provides methods for displaying ad content in custom view classes.
SWIFT_PROTOCOL("_TtP9AppierAds20APRNativeAdRendering_")
@protocol APRNativeAdRendering
/// UILabel that your view is using for the title.
@property (nonatomic, readonly, strong) UILabel * _Nullable nativeAdTitleLabel;
/// UILabel that your view is using for the main text.
@property (nonatomic, readonly, strong) UILabel * _Nullable nativeAdMainTextLabel;
/// UILabel that your view is using for the call to action (cta).
@property (nonatomic, readonly, strong) UILabel * _Nullable nativeAdCallToActionLabel;
/// UIImageView that your view is using for the icon image.
@property (nonatomic, readonly, strong) UIImageView * _Nullable nativeAdIconImageView;
/// UIImageView that your view is using for the main image.
@property (nonatomic, readonly, strong) UIImageView * _Nullable nativeAdMainImageView;
/// UIView that your view is using for the privacy information icon image.
@property (nonatomic, readonly, strong) UIView * _Nullable nativeAdPrivacyInformationIconView;
/// Return the array of UIView instances that may be clickable.
/// In some cases, especially in view subclasses that have a complex view hierarchy,
/// it may be desirable to specify a subset of views that are considered clickable.
/// Supply these views here.
/// <ul>
///   <li>
///     return: an array of UIView instances.
///   </li>
/// </ul>
- (NSArray<UIView *> * _Nonnull)getNativeAdClickableViews SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, APRTestMode, open) {
  APRTestModeNone = 0,
  APRTestModeBid = 1,
  APRTestModeNoBid = 2,
};



SWIFT_PROTOCOL("_TtP9AppierAds16NativeAdDelegate_")
@protocol NativeAdDelegate
- (void)onAdLoadedWithNativeAd:(APRNativeAd * _Nonnull)nativeAd;
- (void)onAdLoadedFailedWithNativeAd:(APRNativeAd * _Nonnull)nativeAd error:(APRError * _Nonnull)error;
- (void)onAdImpressionRecordedWithNativeAd:(APRNativeAd * _Nonnull)nativeAd;
- (void)onAdImpressionRecordedFailedWithNativeAd:(APRNativeAd * _Nonnull)nativeAd error:(APRError * _Nonnull)error;
- (void)onAdClickedRecordedWithNativeAd:(APRNativeAd * _Nonnull)nativeAd;
- (void)onAdClickedRecordedFailedWithNativeAd:(APRNativeAd * _Nonnull)nativeAd error:(APRError * _Nonnull)error;
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.5.2 (swiftlang-1300.0.47.5 clang-1300.0.29.30)
#ifndef APPIERADS_SWIFT_H
#define APPIERADS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
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

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
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
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AppierAds",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

enum APRDataKey : NSInteger;

SWIFT_CLASS("_TtC9AppierAds11APRAdExtras")
@interface APRAdExtras : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)setWithKey:(enum APRDataKey)key value:(id _Nonnull)value;
- (id _Nullable)getWithKey:(enum APRDataKey)key SWIFT_WARN_UNUSED_RESULT;
@end

@class NSString;

SWIFT_PROTOCOL("_TtP9AppierAds19APRAdUnitIdentifier_")
@protocol APRAdUnitIdentifier
- (NSString * _Nonnull)get SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)build SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9AppierAds11APRAdUnitId")
@interface APRAdUnitId : NSObject <APRAdUnitIdentifier>
- (nonnull instancetype)init:(NSString * _Nonnull)adUnitId OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)get SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)build SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@class APRAdsConfiguraiton;
@class NSNumber;

SWIFT_CLASS("_TtC9AppierAds6APRAds")
@interface APRAds : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) APRAds * _Nonnull shared;)
+ (APRAds * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (void)setShared:(APRAds * _Nonnull)value;
@property (nonatomic, strong) APRAdsConfiguraiton * _Nonnull configuration;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@property (nonatomic, readonly, copy) NSString * _Nonnull version;
- (void)startWithCompletion:(void (^ _Nullable)(BOOL))completion;
@end

enum APRTestMode : NSInteger;
enum APRBrowserAgent : NSInteger;

SWIFT_CLASS("_TtC9AppierAds19APRAdsConfiguraiton")
@interface APRAdsConfiguraiton : NSObject
@property (nonatomic) enum APRTestMode testMode;
@property (nonatomic) enum APRBrowserAgent browserAgent;
@property (nonatomic, copy) NSString * _Nullable sourceAppId;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9AppierAds12AppierBaseAd")
@interface AppierBaseAd : NSObject
- (void)setWithExtras:(APRAdExtras * _Nullable)extras;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@protocol APRBannerAdDelegate;
@class UIWebView;

SWIFT_CLASS("_TtC9AppierAds11APRBannerAd")
@interface APRBannerAd : AppierBaseAd
@property (nonatomic, weak) id <APRBannerAdDelegate> _Nullable delegate;
- (nonnull instancetype)initWithAdUnitId:(id <APRAdUnitIdentifier> _Nonnull)adUnitId OBJC_DESIGNATED_INITIALIZER;
- (UIWebView * _Nullable)getWebView SWIFT_WARN_UNUSED_RESULT;
- (void)loadAd;
@end

@class NSURLRequest;

@interface APRBannerAd (SWIFT_EXTENSION(AppierAds)) <UIWebViewDelegate>
- (BOOL)webView:(UIWebView * _Nonnull)webView shouldStartLoadWithRequest:(NSURLRequest * _Nonnull)request navigationType:(UIWebViewNavigationType)navigationType SWIFT_WARN_UNUSED_RESULT;
@end

@class APRError;

SWIFT_PROTOCOL("_TtP9AppierAds19APRBannerAdDelegate_")
@protocol APRBannerAdDelegate
- (void)onAdLoadedWithBannerAd:(APRBannerAd * _Nonnull)bannerAd;
- (void)onAdLoadFailedWithBannerAd:(APRBannerAd * _Nonnull)bannerAd error:(APRError * _Nonnull)error;
- (void)onViewClickWithBannerAd:(APRBannerAd * _Nonnull)bannerAd;
@end

@protocol APRBannerAdViewDelegate;
@class NSCoder;

SWIFT_CLASS("_TtC9AppierAds15APRBannerAdView")
@interface APRBannerAdView : UIView
@property (nonatomic, weak) id <APRBannerAdViewDelegate> _Nullable delegate;
- (nonnull instancetype)initWithAdUnitId:(id <APRAdUnitIdentifier> _Nonnull)adUnitId;
- (nonnull instancetype)initWithAdUnitId:(id <APRAdUnitIdentifier> _Nonnull)adUnitId size:(CGSize)size OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)setWithAdUnitId:(id <APRAdUnitIdentifier> _Nonnull)adUnitId;
- (void)setWithExtras:(APRAdExtras * _Nonnull)extras;
- (void)loadAd;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


@interface APRBannerAdView (SWIFT_EXTENSION(AppierAds)) <APRBannerAdDelegate>
- (void)onAdLoadFailedWithBannerAd:(APRBannerAd * _Nonnull)bannerAd error:(APRError * _Nonnull)error;
- (void)onViewClickWithBannerAd:(APRBannerAd * _Nonnull)bannerAd;
- (void)onAdLoadedWithBannerAd:(APRBannerAd * _Nonnull)bannerAd;
@end


SWIFT_PROTOCOL("_TtP9AppierAds23APRBannerAdViewDelegate_")
@protocol APRBannerAdViewDelegate
- (void)adViewDidLoadAdWithView:(APRBannerAdView * _Nonnull)view adSize:(CGSize)adSize;
- (void)adViewDidFailToLoadAdWithErrorWithView:(APRBannerAdView * _Nonnull)view error:(APRError * _Nonnull)error;
@end

typedef SWIFT_ENUM(NSInteger, APRBrowserAgent, open) {
  APRBrowserAgentNative = 0,
};

typedef SWIFT_ENUM(NSInteger, APRDataKey, open) {
  APRDataKeyAdUnitId = 0,
  APRDataKeyZoneId = 1,
  APRDataKeyAdWidth = 2,
  APRDataKeyAdHeight = 3,
  APRDataKeyAdOrientation = 4,
};

enum APRErrorType : NSInteger;

SWIFT_CLASS("_TtC9AppierAds8APRError")
@interface APRError : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)initWithType:(enum APRErrorType)type OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, APRErrorType, open) {
  APRErrorTypeNoFill = 0,
  APRErrorTypeZoneIdError = 1,
  APRErrorTypeAdUnitIdError = 2,
  APRErrorTypeNetworkError = 3,
  APRErrorTypeBadRequest = 4,
  APRErrorTypeInternalServerError = 5,
  APRErrorTypeInvalidJson = 6,
  APRErrorTypeWebViewError = 7,
  APRErrorTypeVideoPlaybackError = 8,
  APRErrorTypeVideoFileError = 9,
  APRErrorTypeFetchImageError = 10,
  APRErrorTypeUnknownError = 11,
};


SWIFT_CLASS("_TtC9AppierAds9APRLogger")
@interface APRLogger : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull category;
@property (nonatomic, readonly) BOOL enable;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@protocol NativeAdDelegate;
@class UIImage;
@protocol APRNativeAdRendering;

SWIFT_CLASS("_TtC9AppierAds11APRNativeAd")
@interface APRNativeAd : AppierBaseAd
@property (nonatomic, weak) id <NativeAdDelegate> _Nullable delegate;
@property (nonatomic, readonly, copy) NSString * _Nullable title;
@property (nonatomic, readonly, copy) NSString * _Nullable mainText;
@property (nonatomic, readonly, copy) NSString * _Nullable callToAction;
@property (nonatomic, readonly, strong) UIImage * _Nullable iconImage;
@property (nonatomic, readonly, strong) UIImage * _Nullable mainImage;
@property (nonatomic, readonly, strong) UIImage * _Nullable privacyInformationImage;
- (nonnull instancetype)initWithAdUnitId:(id <APRAdUnitIdentifier> _Nonnull)adUnitId;
- (void)setWithRenderer:(id <APRNativeAdRendering> _Nonnull)renderer;
- (void)loadAd;
- (void)render;
- (void)clickAdViewWithSender:(id _Nullable)sender;
- (void)clickPrivacyInformationViewWithSender:(id _Nullable)sender;
@end

@class UILabel;
@class UIImageView;

/// The APRNativeAdRendering protocol provides methods for displaying ad content in custom view classes.
SWIFT_PROTOCOL("_TtP9AppierAds20APRNativeAdRendering_")
@protocol APRNativeAdRendering
/// UILabel that your view is using for the title.
@property (nonatomic, readonly, strong) UILabel * _Nullable nativeAdTitleLabel;
/// UILabel that your view is using for the main text.
@property (nonatomic, readonly, strong) UILabel * _Nullable nativeAdMainTextLabel;
/// UILabel that your view is using for the call to action (cta).
@property (nonatomic, readonly, strong) UILabel * _Nullable nativeAdCallToActionLabel;
/// UIImageView that your view is using for the icon image.
@property (nonatomic, readonly, strong) UIImageView * _Nullable nativeAdIconImageView;
/// UIImageView that your view is using for the main image.
@property (nonatomic, readonly, strong) UIImageView * _Nullable nativeAdMainImageView;
/// UIView that your view is using for the privacy information icon image.
@property (nonatomic, readonly, strong) UIView * _Nullable nativeAdPrivacyInformationIconView;
/// Return the array of UIView instances that may be clickable.
/// In some cases, especially in view subclasses that have a complex view hierarchy,
/// it may be desirable to specify a subset of views that are considered clickable.
/// Supply these views here.
/// <ul>
///   <li>
///     return: an array of UIView instances.
///   </li>
/// </ul>
- (NSArray<UIView *> * _Nonnull)getNativeAdClickableViews SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, APRTestMode, open) {
  APRTestModeNone = 0,
  APRTestModeBid = 1,
  APRTestModeNoBid = 2,
};



SWIFT_PROTOCOL("_TtP9AppierAds16NativeAdDelegate_")
@protocol NativeAdDelegate
- (void)onAdLoadedWithNativeAd:(APRNativeAd * _Nonnull)nativeAd;
- (void)onAdLoadedFailedWithNativeAd:(APRNativeAd * _Nonnull)nativeAd error:(APRError * _Nonnull)error;
- (void)onAdImpressionRecordedWithNativeAd:(APRNativeAd * _Nonnull)nativeAd;
- (void)onAdImpressionRecordedFailedWithNativeAd:(APRNativeAd * _Nonnull)nativeAd error:(APRError * _Nonnull)error;
- (void)onAdClickedRecordedWithNativeAd:(APRNativeAd * _Nonnull)nativeAd;
- (void)onAdClickedRecordedFailedWithNativeAd:(APRNativeAd * _Nonnull)nativeAd error:(APRError * _Nonnull)error;
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif