//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSDraggingSource.h"
#import "PTYScrollerDelegate.h"
#import "SessionTitleViewDelegate.h"
#import "SplitSelectionViewDelegate.h"
#import "iTermAnnouncementDelegate.h"
#import "iTermFindDriverDelegate.h"
#import "iTermGenericStatusBarContainer.h"
#import "iTermSearchResultsMinimapViewDelegate.h"

@class MTKView, NSColor, NSImage, NSMutableArray, NSString, NSTextField, PTYScrollView, PTYScroller, SessionTitleView, SplitSelectionView, iTermAnnouncementViewController, iTermBackgroundColorView, iTermDropDownFindViewController, iTermFindDriver, iTermGenericStatusBarContainer, iTermHoverContainerView, iTermImageView, iTermIncrementalMinimapView, iTermMetalClipView, iTermMetalDriver, iTermSearchResultsMinimapView, iTermUnobtrusiveMessage;

@interface SessionView : NSView <iTermAnnouncementDelegate, iTermFindDriverDelegate, iTermGenericStatusBarContainer, iTermSearchResultsMinimapViewDelegate, NSDraggingSource, PTYScrollerDelegate, SplitSelectionViewDelegate, SessionTitleViewDelegate>
{
    NSMutableArray *_announcements;
    BOOL _inDealloc;
    iTermAnnouncementViewController *_currentAnnouncement;
    BOOL _dim;
    BOOL _backgroundDimmed;
    struct CGSize _savedSize;
    SplitSelectionView *_splitSelectionView;
    BOOL _showTitle;
    BOOL _showBottomStatusBar;
    SessionTitleView *_title;
    iTermHoverContainerView *_hoverURLView;
    NSTextField *_hoverURLTextField;
    BOOL _useMetal;
    iTermMetalClipView *_metalClipView;
    iTermDropDownFindViewController *_dropDownFindViewController;
    iTermFindDriver *_dropDownFindDriver;
    iTermFindDriver *_permanentStatusBarFindDriver;
    iTermFindDriver *_temporaryStatusBarFindDriver;
    iTermGenericStatusBarContainer *_genericStatusBarContainer;
    iTermImageView *_imageView;
    NSColor *_terminalBackgroundColor;
    iTermBackgroundColorView *_legacyScrollerBackgroundView;
    iTermUnobtrusiveMessage *_unobtrusiveMessage;
    int _viewId;
    int _ordinal;
    id <iTermSessionViewDelegate> _delegate;
    iTermSearchResultsMinimapView *_searchResultsMinimap;
    iTermIncrementalMinimapView *_marksMinimap;
    PTYScrollView *_scrollview;
    iTermMetalDriver *_driver;
    MTKView *_metalView;
    unsigned long long _findDriverType;
    id <iTermSearchResultsMinimapViewDelegate> _searchResultsMinimapViewDelegate;
    unsigned long long _imageMode;
    iTermBackgroundColorView *_backgroundColorView;
}

+ (id)lastResizeDate;
+ (void)windowDidResize;
+ (void)initialize;
+ (double)titleHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) iTermBackgroundColorView *backgroundColorView; // @synthesize backgroundColorView=_backgroundColorView;
@property(nonatomic) unsigned long long imageMode; // @synthesize imageMode=_imageMode;
@property(nonatomic) __weak id <iTermSearchResultsMinimapViewDelegate> searchResultsMinimapViewDelegate; // @synthesize searchResultsMinimapViewDelegate=_searchResultsMinimapViewDelegate;
@property(readonly, nonatomic) unsigned long long findDriverType; // @synthesize findDriverType=_findDriverType;
@property(readonly, nonatomic) MTKView *metalView; // @synthesize metalView=_metalView;
@property(readonly, nonatomic) iTermMetalDriver *driver; // @synthesize driver=_driver;
@property(retain, nonatomic) PTYScrollView *scrollview; // @synthesize scrollview=_scrollview;
@property(readonly, nonatomic) iTermIncrementalMinimapView *marksMinimap; // @synthesize marksMinimap=_marksMinimap;
@property(readonly, nonatomic) iTermSearchResultsMinimapView *searchResultsMinimap; // @synthesize searchResultsMinimap=_searchResultsMinimap;
@property(nonatomic) __weak id <iTermSessionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) iTermAnnouncementViewController *currentAnnouncement; // @synthesize currentAnnouncement=_currentAnnouncement;
@property(nonatomic) int ordinal; // @synthesize ordinal=_ordinal;
@property(nonatomic) int viewId; // @synthesize viewId=_viewId;
- (struct _NSRange)searchResultsMinimapViewRangeOfVisibleLines:(id)arg1;
- (id)searchResultsMinimapViewLocations:(id)arg1;
- (void)didSelectDestinationSession:(id)arg1 half:(long long)arg2;
- (id)ptyScrollerScrollView;
- (id)genericStatusBarContainerBackgroundColor;
- (void)showUnobtrusiveMessage:(id)arg1;
- (long long)findDriverNumberOfSearchResults;
- (long long)findDriverCurrentIndex;
- (void)findViewControllerDidCeaseToBeMandatory:(id)arg1;
- (void)findViewControllerVisibilityDidChange:(id)arg1;
- (void)findString:(id)arg1 forwardDirection:(BOOL)arg2 mode:(unsigned long long)arg3 withOffset:(int)arg4 scrollToFirstResult:(BOOL)arg5;
- (void)findViewControllerClearSearch;
- (void)findViewControllerMakeDocumentFirstResponder;
- (void)pasteString:(id)arg1;
- (void)copySelection;
- (id)unpaddedSelectedText;
- (id)selectedText;
- (void)growSelectionRight;
- (BOOL)growSelectionLeft;
- (BOOL)continueFind:(double *)arg1;
- (BOOL)findInProgress;
- (void)resetFindCursor;
- (BOOL)canSearch;
- (void)ptyScrollerDidTransitionToState:(unsigned long long)arg1;
- (void)updateMinimapAlpha;
- (void)viewDidChangeEffectiveAppearance;
- (void)userScrollDidChange:(BOOL)arg1;
- (void)announcementWillDismiss:(id)arg1;
- (void)showNextAnnouncement;
- (id)nextAnnouncement;
- (void)updateAnnouncementFrame;
- (void)addAnnouncement:(id)arg1;
- (id)sessionTitleViewBackgroundColor;
- (void)sessionTitleViewBecomeFirstResponder;
- (void)doubleClickOnTitleView;
- (void)beginDrag;
- (void)close;
- (id)menu;
- (id)tabColor;
@property(readonly, copy) NSString *description;
- (void)setTitle:(id)arg1;
- (void)updateMinimapFrameAnimated:(BOOL)arg1;
- (void)updateScrollViewFrame;
- (void)updateFindViewFrame;
- (void)updateBottomStatusBarFrame;
- (void)updateTitleFrame;
- (struct CGSize)maximumPossibleScrollViewContentSize;
- (struct CGSize)compactFrame;
- (void)updateFindDriver;
- (void)invalidateStatusBar;
- (BOOL)setShowBottomStatusBar:(BOOL)arg1 adjustScrollView:(BOOL)arg2;
- (BOOL)showBottomStatusBar;
- (BOOL)setShowTitle:(BOOL)arg1 adjustScrollView:(BOOL)arg2;
- (BOOL)showTitle;
- (BOOL)wantsPeriodicDraggingUpdates;
- (BOOL)prepareForDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (BOOL)ignoreModifierKeysForDraggingSession:(id)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
@property(readonly, nonatomic) PTYScroller *verticalScroller;
- (void)viewDidMoveToWindow;
- (BOOL)setHoverURL:(id)arg1;
- (BOOL)hasHoverURL;
- (long long)removeSplitSelectionView;
- (void)createSplitSelectionView;
- (struct CGRect)contentRect;
- (struct CGRect)insetRect:(struct CGRect)arg1 flipped:(BOOL)arg2 includeBottomStatusBar:(BOOL)arg3;
@property(readonly, nonatomic) struct NSEdgeInsets extraMargins;
- (void)drawAroundFrame:(struct CGRect)arg1 dirtyRect:(struct CGRect)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)backgroundColorForDecorativeSubviews;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (void)setSplitSelectionMode:(long long)arg1 move:(BOOL)arg2 session:(id)arg3;
- (void)createSplitSelectionViewWithMode:(long long)arg1 session:(id)arg2;
- (void)restoreFrameSize;
- (void)saveFrameSize;
- (void)viewDidEndLiveResize;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)mouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)setBackgroundDimmed:(BOOL)arg1;
- (void)setDimmed:(BOOL)arg1;
- (void)updateColors;
- (void)updateDim;
- (double)adjustedDimmingAmount;
- (double)dimmedDimmingAmount;
- (void)_dimShadeToDimmingAmount:(float)arg1;
- (struct CGRect)frameByInsettingForMetal:(struct CGRect)arg1;
- (void)reallyUpdateMetalViewFrame;
- (void)updateMetalViewFrame;
- (void)didBecomeVisible;
- (void)updateLayout;
- (void)scrollerStyleDidChange:(id)arg1;
- (struct CGRect)frameForLegacyScroller;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)addSubviewBelowFindView:(id)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)tabColorDidChange;
- (void)metalViewVisibilityDidChange;
- (void)didChangeMetalViewAlpha;
- (void)setMetalViewNeedsDisplayInTextViewRect:(struct CGRect)arg1;
- (void)removeMetalView;
- (void)installMetalViewWithDataSource:(id)arg1;
- (id)metalDevice;
- (void)preferredMetalDeviceDidChange:(id)arg1;
- (void)setUseMetal:(BOOL)arg1 dataSource:(id)arg2;
@property(readonly, nonatomic) BOOL useMetal;
- (void)findViewDidHide;
- (void)showFindUI;
- (void)loadTemporaryStatusBarFindDriverWithStatusBarViewController:(id)arg1;
@property(readonly, nonatomic) struct CGSize internalDecorationSize;
@property(readonly, nonatomic) iTermFindDriver *findDriver;
@property(readonly, nonatomic) BOOL findViewIsHidden;
@property(readonly, nonatomic) BOOL findViewHasKeyboardFocus;
@property(nonatomic) __weak id <iTermFindDriverDelegate> findDriverDelegate;
@property(readonly, nonatomic) BOOL isDropDownSearchVisible;
- (id)newDropDownFindView;
- (void)dealloc;
- (struct CGRect)frameForScroller;
- (void)setTransparencyAlpha:(double)arg1 blend:(double)arg2;
- (void)setTerminalBackgroundColor:(id)arg1;
@property(retain, nonatomic) NSImage *image;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

