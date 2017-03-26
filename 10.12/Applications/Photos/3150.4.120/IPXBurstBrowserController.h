//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXBrowserController.h"

#import "IPXAssetTransitioning-Protocol.h"
#import "IPXBurstFavoritesViewControllerDelegate-Protocol.h"
#import "IPXBurstSecondaryToolbarDelegate-Protocol.h"
#import "IPXSelectionProvider-Protocol.h"
#import "IPXSummaryViewDelegate-Protocol.h"
#import "IPXViewerContainerViewDelegate-Protocol.h"
#import "IPXViewerControllerDelegate-Protocol.h"
#import "IPXViewerOverlayDataSource-Protocol.h"
#import "IPXViewerSelectionReceiver-Protocol.h"
#import "IPXZoomSliderCellValueFormatterDelegate-Protocol.h"

@class IPXBurstController, IPXBurstFavoritesViewController, IPXBurstSecondaryToolbarViewController, IPXEditorSummaryController, IPXSummaryViewController, IPXViewerContainerView, IPXViewerController, IPXViewerModel, IPXZoomSlider, NSString, RDVersion;
@protocol IPXBurstBrowserControllerDelegate;

@interface IPXBurstBrowserController : IPXBrowserController <IPXBurstSecondaryToolbarDelegate, IPXBurstFavoritesViewControllerDelegate, IPXViewerContainerViewDelegate, IPXSelectionProvider, IPXViewerSelectionReceiver, IPXSummaryViewDelegate, IPXAssetTransitioning, IPXViewerControllerDelegate, IPXZoomSliderCellValueFormatterDelegate, IPXViewerOverlayDataSource>
{
    IPXBurstController *_burstController;
    IPXZoomSlider *_zoomSlider;
    IPXViewerModel *_viewerModel;
    IPXBurstSecondaryToolbarViewController *_secondaryToolbarViewController;
    IPXViewerContainerView *_containerView;
    IPXViewerController *_viewerController;
    IPXBurstFavoritesViewController *_burstFavoritesController;
    IPXSummaryViewController *_summaryViewController;
    IPXEditorSummaryController *_editorSummaryController;
    BOOL _viewDidTransition;
    RDVersion *_stackPick;
    id <IPXBurstBrowserControllerDelegate> _burstDelegate;
}

@property(nonatomic) __weak id <IPXBurstBrowserControllerDelegate> burstDelegate; // @synthesize burstDelegate=_burstDelegate;
- (void).cxx_destruct;
- (id)makeTouchBar;
- (double)percentForZoomValue:(double)arg1;
- (id)selectedVersionsForOverlay:(id)arg1;
- (id)primarySelectionForOverlay:(id)arg1;
- (id)burstVersions;
- (void)didTransitionFromController:(id)arg1 toController:(id)arg2 items:(id)arg3;
- (void)willTransitionFromController:(id)arg1 toController:(id)arg2 items:(id)arg3;
- (struct CGRect)targetFrameForTransitionItem:(id)arg1 imageRect:(struct CGRect *)arg2 cornerRadius:(double *)arg3;
- (id)itemsForAnimatedTransitionWithOperation:(long long)arg1;
- (id)selectionProviderCurrentSelectionWithOptions:(long long)arg1;
- (id)selectionProviderCurrentLiteSelection;
- (void)burstFavoritesViewController:(id)arg1 viewHeightDidChange:(double)arg2;
- (void)burstFavoritesViewController:(id)arg1 selectionDidChange:(id)arg2;
- (void)burstFavoritesViewController:(id)arg1 favoritesDidChange:(unsigned long long)arg2;
- (void)burstFavoritesViewController:(id)arg1 didFinishWithResult:(long long)arg2 preferredSelection:(id)arg3;
- (void)burstFavoritesViewController:(id)arg1 willFinishWithExpectedResult:(long long)arg2;
- (void)bottomButtonClickedInContainerView:(id)arg1 animate:(BOOL)arg2;
- (void)topButtonClickedInContainerView:(id)arg1 animate:(BOOL)arg2;
- (void)rightButtonClickedInContainerView:(id)arg1 animate:(BOOL)arg2;
- (void)leftButtonClickedInContainerView:(id)arg1 animate:(BOOL)arg2;
- (BOOL)isBottomButtonHiddenInContainerView:(id)arg1;
- (BOOL)isTopButtonHiddenInContainerView:(id)arg1;
- (BOOL)isRightButtonHiddenInContainerView:(id)arg1;
- (BOOL)isLeftButtonHiddenInContainerView:(id)arg1;
- (void)setZoomValue:(double)arg1;
- (double)zoomValue;
- (void)viewerController:(id)arg1 didZoom:(double)arg2 event:(id)arg3;
- (BOOL)viewerController:(id)arg1 shouldAllowZoomForItem:(id)arg2;
- (void)viewerController:(id)arg1 willAddItemController:(id)arg2;
- (BOOL)viewerController:(id)arg1 shouldAllowDraggingForItem:(id)arg2;
- (void)viewerController:(id)arg1 setupNewItemController:(id)arg2;
- (unsigned long long)burstPickCount;
- (unsigned long long)burstItemCount;
- (void)cancelModalSelection;
- (void)endModalSelection;
- (void)_updateViewerControllerEdgeInsetsWithBottomInset:(double)arg1;
- (void)_updateViewerControllerEdgeInsets;
- (void)_updateRolloverControls;
- (void)_updateSubcontrollersOverlaysIfNeeded;
- (void)_updateViewerModelWithVersion:(id)arg1;
- (void)_viewerControllerDidUpdateVisibleSelection:(id)arg1;
- (void)_windowDidExitFullScreen:(id)arg1;
- (void)_windowDidEnterFullScreen:(id)arg1;
- (void)_windowWillExitFullScreen:(id)arg1;
- (void)_windowWillEnterFullScreen:(id)arg1;
- (void)_updateBackgroundAppearanceForFullScreen:(BOOL)arg1;
- (void)keyDown:(id)arg1;
- (void)a_viewerImageControllerViewClicked:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (id)preferredFirstResponder;
- (void)viewerModelSelectionDidChange:(id)arg1;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)secondaryToolbarViewController;
- (BOOL)isModal;
- (void)_setupNavigationBar;
- (void)_setupSubviews;
- (void)_stopObservingNotifications;
- (void)_startObservingNotifications;
- (void)viewDidTransitionOutWithContext:(id)arg1;
- (void)viewFailedTransitionOutWithContext:(id)arg1;
- (void)prepareForTransitioningViewOutWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidTransitionInWithContext:(id)arg1;
- (void)viewFailedTransitionInWithContext:(id)arg1;
- (void)prepareForTransitioningViewInWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_activateBurstFavoritesControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadView;
- (id)initWithStackPick:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

