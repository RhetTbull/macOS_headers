//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AuthKitUI/AKAppleIDAuthenticationInAppContext.h>

#import "AuthWebViewDelegate.h"

@class AKAuthWebTabView, NSString, NSView;

@interface AKAppleIDAuthenticationMacOSExtenstionContext : AKAppleIDAuthenticationInAppContext <AuthWebViewDelegate>
{
    AKAuthWebTabView *_webviewController;
    NSView *_webView;
}

@property(retain) NSView *webView; // @synthesize webView=_webView;
@property(retain) AKAuthWebTabView *webviewController; // @synthesize webviewController=_webviewController;
- (void).cxx_destruct;
- (void)sizeChangedFrom:(struct CGSize)arg1 toSize:(struct CGSize)arg2 webViewName:(id)arg3 callback:(id)arg4;
- (void)loadFailed:(id)arg1 withError:(id)arg2;
- (void)endWebView:(id)arg1;
- (void)closeWebViewAndCleanUp:(id)arg1 andError:(id)arg2;
- (void)switchToView:(id)arg1;
- (void)presentServerProvidedUIWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

