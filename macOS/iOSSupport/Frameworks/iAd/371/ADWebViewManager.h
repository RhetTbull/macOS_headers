//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ADWebView;

@interface ADWebViewManager : NSObject
{
    ADWebView *_preallocatedWebView;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) ADWebView *preallocatedWebView; // @synthesize preallocatedWebView=_preallocatedWebView;
- (void)preallocateWebViewWithBackgroundPriority;
- (id)creativeViewForVideo;
- (id)creativeView;
- (id)_webViewForCreativeForVideo;
- (id)_webViewForCreative;

@end

