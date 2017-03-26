//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXScrubberControllerChangeReceiver-Protocol.h"
#import "IPXTilingViewTileAnimatorDelegate-Protocol.h"
#import "IPXTilingViewTileDelegate-Protocol.h"
#import "PXReusableObjectPoolDelegate-Protocol.h"
#import "PXScrollViewControllerObserver-Protocol.h"
#import "PXTileSource-Protocol.h"
#import "PXTilingControllerScrollDelegate-Protocol.h"
#import "PXTilingControllerTransitionDelegate-Protocol.h"
#import "_IPXScrubberContainerViewDelegate-Protocol.h"

@class IPAImageSizePolicy, IPXNablaGlyphView, IPXSelectionTile, IPXTilingScrubberLayout, IPXTilingViewTileAnimator, NSColor, NSLayoutConstraint, NSMutableSet, NSString, NSTimer, PFCanceler, PFDispatchQueue, PXNSScrollViewController, PXReusableObjectPool, PXTilingController;
@protocol IPXScrubberViewControllerDelegate, IPXSelectionTileMediaDelegate;

@interface IPXScrubberViewController : IPXViewController <IPXTilingViewTileAnimatorDelegate, IPXScrubberControllerChangeReceiver, IPXTilingViewTileDelegate, _IPXScrubberContainerViewDelegate, PXScrollViewControllerObserver, PXTileSource, PXReusableObjectPoolDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate>
{
    PXReusableObjectPool *_tilePool;
    id _anchorItemIdentifier;
    IPXTilingViewTileAnimator *_tileAnimator;
    id _selectedItem;
    id _previousItem;
    id _nextItem;
    id _lastTouchedItemId;
    BOOL _needsFocus;
    struct CGPoint _initialDragPoint;
    struct CGPoint _initialScrollPoint;
    NSTimer *_legacyScrollWheelTimer;
    double _windowBackingScale;
    double _scrollAnimationDuration;
    NSString *_versionIdInSelectionLayer;
    IPAImageSizePolicy *_sizePolicy;
    NSColor *_lightBackgroundThumbnailColor;
    NSColor *_darkBackgroundThumbnailColor;
    NSLayoutConstraint *_topPaddingConstraint;
    IPXNablaGlyphView *_centerMarker;
    PFCanceler *_selectionTileCanceler;
    PFDispatchQueue *_scrubberImageQueue;
    struct {
        char respondsToTouchesBegan;
        char respondsToTouchesEnded;
        char respondsToDidSelect;
        char respondsToWantsFocus;
        char respondsToWantsInvalidation;
        char respondsToDidClick;
        char respondsToWillBeginScrolling;
        char respondsToDidScroll;
        char respondsToWillEndScrolling;
        char respondsToDidEndScrolling;
        char respondsToScrollStateDidChange;
    } _delegateFlags;
    BOOL _isScrolling;
    BOOL _isDark;
    BOOL _hasMarker;
    IPXSelectionTile *_selectionView;
    id <IPXScrubberViewControllerDelegate> _delegate;
    id <IPXSelectionTileMediaDelegate> _mediaDelegate;
    PXTilingController *_tilingController;
    PXNSScrollViewController *_scrollViewController;
    NSMutableSet *_tilesInUse;
    struct CGSize _maxItemSize;
}

+ (Class)tileClass;
+ (double)scrollAnimationDuration;
@property(retain) NSMutableSet *tilesInUse; // @synthesize tilesInUse=_tilesInUse;
@property(retain) PXNSScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(retain) PXTilingController *tilingController; // @synthesize tilingController=_tilingController;
@property(nonatomic) struct CGSize maxItemSize; // @synthesize maxItemSize=_maxItemSize;
@property(nonatomic) BOOL hasMarker; // @synthesize hasMarker=_hasMarker;
@property(nonatomic) BOOL isDark; // @synthesize isDark=_isDark;
@property(nonatomic) __weak id <IPXSelectionTileMediaDelegate> mediaDelegate; // @synthesize mediaDelegate=_mediaDelegate;
@property(nonatomic) __weak id <IPXScrubberViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IPXSelectionTile *selectionView; // @synthesize selectionView=_selectionView;
@property(nonatomic) BOOL isScrolling; // @synthesize isScrolling=_isScrolling;
- (void).cxx_destruct;
- (id)accessibilityLabelForTile:(id)arg1;
- (void)animationsDidFinish:(id)arg1;
- (struct CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (void)_scrollViewControllerDidEndScrolling;
- (void)_scrollViewControllerInvalidateIfNeeded;
- (void)scrollViewControllerDidEndScrolling:(id)arg1;
- (void)scrollViewControllerWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)scrubberDidEndScrolling:(id)arg1 withViewController:(id)arg2;
- (void)scrubberWillEndScrolling:(id)arg1 withViewController:(id)arg2 atItem:(id)arg3;
- (void)_continualScrollUpdateNotification:(id)arg1;
- (void)_legacyScrollWheelTimerFired:(id)arg1;
- (void)scrubberDidScroll:(id)arg1 withViewController:(id)arg2 toItem:(id)arg3;
- (double)_convertOffset:(double)arg1 fromSVC:(id)arg2;
- (void)scrubberWillBeginScrolling:(id)arg1 withViewController:(id)arg2;
- (void)scrubberTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)scrubberTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)scrubber:(id)arg1 selectedItem:(id)arg2 animate:(BOOL)arg3;
- (void)scrubberResetTiles:(id)arg1 withObjects:(id)arg2;
- (void)scrubberResetTiles:(id)arg1;
- (void)scrubberLayoutInvalidation:(id)arg1;
- (void)resetTilesWithObjects:(id)arg1;
- (void)scrubber:(id)arg1 didSetDataSource:(id)arg2 withSelectedItem:(id)arg3;
- (void)scrubber:(id)arg1 didSetDataSource:(id)arg2;
- (void)_handlePan:(id)arg1;
- (id)_tileAtLocation:(struct CGPoint)arg1;
- (id)itemIdAtLocation:(struct CGPoint)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)_handleClick:(id)arg1;
- (BOOL)hasFocus;
- (void)reusableObjectPool:(id)arg1 objectPreparedForReuse:(id)arg2;
- (void)reusableObjectPool:(id)arg1 objectBecameReusable:(id)arg2;
- (void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (void)tilingController:(id)arg1 prepareForChange:(id)arg2;
- (id)requestPreviewForItem:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_keyForItem:(id)arg1;
- (id)versionForItemIdentifier:(id)arg1;
- (double)_aspectRatioForItemIdentifier:(id)arg1;
- (void)processNewTile:(id)arg1 withIdentifier:(id)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void)_setDefaultBackgroundColorOnTile:(id)arg1;
- (id)identifierForObject:(id)arg1;
@property(readonly, nonatomic) IPXTilingScrubberLayout *layout;
- (double)boundsOrigin;
- (void)scrollToPosition:(double)arg1 animate:(BOOL)arg2;
- (void)scrollToItem:(id)arg1 animate:(BOOL)arg2;
- (struct CGPoint)_convertPointForLayout:(struct CGPoint)arg1;
- (id)itemIdentifierAtContentOffset:(struct CGPoint)arg1;
- (id)_itemAtSelectionRect;
- (id)_tileImageContentForItemId:(id)arg1;
- (void)_updateSelectionLayerWithItem:(id)arg1 fetchFromTile:(BOOL)arg2;
- (void)updateSelectionLayer;
- (void)layoutSelectionLayer;
- (void)setAVInProgress:(BOOL)arg1;
- (void)setAVExpansionState:(long long)arg1;
@property(readonly, nonatomic) BOOL isAnimating;
- (void)_updateBackingScaleFromNotification:(id)arg1;
- (double)currentWindowBackingScale;
- (void)viewDidAppear;
- (void)viewDidLayout;
- (void)viewWillLayout;
- (void)didBecomeInactive;
- (void)didBecomeActive;
- (void)loadView;
- (id)initWithLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

