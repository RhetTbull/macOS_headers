//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UXKit/UXView.h>

#import "NSAccessibilityGroup.h"
#import "NSGestureRecognizerDelegate.h"
#import "_UXSourceSplitViewCursorProvider.h"

@class NSArray, NSBox, NSCursor, NSGestureRecognizer, NSLayoutConstraint, NSString, NSWindow, _UXContainerView, _UXSourceSplitViewShadowView, _UXSourceSplitViewSpringLoadingView;

@interface _UXSourceSplitView : UXView <NSGestureRecognizerDelegate, _UXSourceSplitViewCursorProvider, NSAccessibilityGroup>
{
    NSLayoutConstraint *_separatorTrailingConstraint;
    NSArray *_separatorVerticalConstraints;
    NSLayoutConstraint *_masterViewWidthConstraint;
    BOOL _resizing;
    BOOL _currentlySpringLoading;
    BOOL _transientlyUncollapsed;
    BOOL _collapsed;
    BOOL _revealsOnEdgeHoverInFullscreen;
    BOOL _springLoaded;
    BOOL _wantsCollapsed;
    BOOL _autoCollapsed;
    _UXContainerView *_masterView;
    _UXContainerView *_detailView;
    double _minimumMasterWidth;
    double _maximumMasterWidth;
    double _minimumWidthForInlineSourceList;
    id <_UXSourceSplitViewDelegate> _delegate;
    NSBox *_separator;
    _UXSourceSplitViewSpringLoadingView *_leadingSpringLoadingView;
    _UXSourceSplitViewShadowView *_leadingOverlayShadowView;
    NSWindow *_transientOverlayWindow;
    NSGestureRecognizer *_resizeRecognizer;
}

@property(retain, nonatomic) NSGestureRecognizer *resizeRecognizer; // @synthesize resizeRecognizer=_resizeRecognizer;
@property(retain, nonatomic) NSWindow *transientOverlayWindow; // @synthesize transientOverlayWindow=_transientOverlayWindow;
@property(readonly, nonatomic) BOOL autoCollapsed; // @synthesize autoCollapsed=_autoCollapsed;
@property(readonly, nonatomic) _UXSourceSplitViewShadowView *leadingOverlayShadowView; // @synthesize leadingOverlayShadowView=_leadingOverlayShadowView;
@property(readonly, nonatomic) _UXSourceSplitViewSpringLoadingView *leadingSpringLoadingView; // @synthesize leadingSpringLoadingView=_leadingSpringLoadingView;
@property(readonly, nonatomic) NSBox *separator; // @synthesize separator=_separator;
@property(nonatomic) __weak id <_UXSourceSplitViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL wantsCollapsed; // @synthesize wantsCollapsed=_wantsCollapsed;
@property(nonatomic) BOOL springLoaded; // @synthesize springLoaded=_springLoaded;
@property(nonatomic) BOOL revealsOnEdgeHoverInFullscreen; // @synthesize revealsOnEdgeHoverInFullscreen=_revealsOnEdgeHoverInFullscreen;
@property(nonatomic) double minimumWidthForInlineSourceList; // @synthesize minimumWidthForInlineSourceList=_minimumWidthForInlineSourceList;
@property(nonatomic) double maximumMasterWidth; // @synthesize maximumMasterWidth=_maximumMasterWidth;
@property(nonatomic) double minimumMasterWidth; // @synthesize minimumMasterWidth=_minimumMasterWidth;
@property(readonly, nonatomic) BOOL collapsed; // @synthesize collapsed=_collapsed;
@property(readonly, nonatomic) BOOL transientlyUncollapsed; // @synthesize transientlyUncollapsed=_transientlyUncollapsed;
@property(readonly, nonatomic) _UXContainerView *detailView; // @synthesize detailView=_detailView;
@property(readonly, nonatomic) _UXContainerView *masterView; // @synthesize masterView=_masterView;
- (void).cxx_destruct;
- (id)accessibilityRole;
- (id)accessibilityChildren;
- (id)accessibilitySplitters;
- (void)cursorUpdate:(id)arg1;
- (void)_performResizeWithGestureRecognizer:(id)arg1;
- (void)handlePanGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldAttemptToRecognizeWithEvent:(id)arg2;
- (void)resetCursorRects;
- (id)hitTest:(struct CGPoint)arg1;
- (void)layout;
- (BOOL)_canSpringLoad;
- (BOOL)_springLoading:(BOOL)arg1;
- (void)_setCollapsed:(BOOL)arg1 shouldLayoutSubtree:(BOOL)arg2;
- (void)_didChangeTransientlyUncollapsed;
- (BOOL)_shouldBeCollapsed;
- (void)_endSeparatorLiveResize;
- (void)_startSeparatorLiveResize;
- (void)_resizeToWidth:(double)arg1;
@property(readonly, nonatomic) NSCursor *separatorCursor;
@property(readonly, nonatomic) UXView *subviewToReveal;
- (void)setTransientlyUncollapsed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_tearDownTransientOverlayWindow;
- (void)_setupTransientOverlayWindow;
- (void)_moveMasterAndSeparatorToView:(id)arg1;
- (void)didChangeCollapsed;
@property(readonly, nonatomic) double leadingContentInset;
- (double)leadingContentInsetForWantsCollapsed:(BOOL)arg1;
@property(nonatomic) double masterWidth;
- (void)updateConstraintsForSeparatorAndMain;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

