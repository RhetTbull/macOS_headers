//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MKSystemController : NSObject
{
    id <MKSystemControllerOpenURLDelegate> _openURLDelegate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MKSystemControllerOpenURLDelegate> openURLDelegate; // @synthesize openURLDelegate=_openURLDelegate;
- (BOOL)shouldCaptureMapViewGestureAnalytics;
- (BOOL)overrideBlurStyle;
- (void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 requireOptionKeyPromptUnlockDevice:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)placeDialRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_transformURLIfNecessary:(id)arg1;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)openURL:(id)arg1;
- (BOOL)_openURLsOnBackgroundThread;
- (id)_defaultOpenURLOptions;
- (BOOL)reduceMotionEnabled;
- (BOOL)requiresRTT;
- (BOOL)supports3DImagery;
- (BOOL)supportsPitchAPI;
- (BOOL)supports3DMaps;
- (BOOL)isInternalInstall;
- (int)userInterfaceIdiom;
- (BOOL)isHiDPI;
- (struct CGSize)screenSize;
- (double)screenScale;
- (BOOL)shouldUseDarkAppearanceForAppearance:(id)arg1;

@end

