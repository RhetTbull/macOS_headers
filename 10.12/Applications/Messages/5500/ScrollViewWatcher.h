//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FezUserScrollEventDelegate-Protocol.h"
#import "NSScrollViewDelegate-Protocol.h"

@class FezWebView, NSScrollView, NSString;

@interface ScrollViewWatcher : NSObject <NSScrollViewDelegate, FezUserScrollEventDelegate>
{
    BOOL _isPinnedToBottom;
    BOOL _watchingForBoundsChange;
    BOOL _isWheelEvent;
    NSScrollView *_scrollView;
    FezWebView *_webView;
    double _lastScrollChange;
    double _lastDistanceFromBottom;
}

@property(nonatomic) BOOL isWheelEvent; // @synthesize isWheelEvent=_isWheelEvent;
@property double lastDistanceFromBottom; // @synthesize lastDistanceFromBottom=_lastDistanceFromBottom;
@property BOOL watchingForBoundsChange; // @synthesize watchingForBoundsChange=_watchingForBoundsChange;
@property double lastScrollChange; // @synthesize lastScrollChange=_lastScrollChange;
@property __weak FezWebView *webView; // @synthesize webView=_webView;
@property __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) BOOL isPinnedToBottom; // @synthesize isPinnedToBottom=_isPinnedToBottom;
- (void).cxx_destruct;
- (void)fezWebView:(id)arg1 userPerformedScrollEvent:(id)arg2;
- (void)didEndScrollInScrollView:(id)arg1;
- (void)didScrollInScrollView:(id)arg1;
- (void)didBeginScrollInScrollView:(id)arg1;
- (void)_wheelEvent:(id)arg1;
- (void)_scrollEvent:(id)arg1;
- (void)userPerformedScrollAction;
- (void)_watchForBoundsChange;
- (void)_boundsChanged:(id)arg1;
- (double)_distanceFromBottom;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1 webView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

