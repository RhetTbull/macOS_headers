//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "KNMacPresenterDisplayContentViewDelegate-Protocol.h"
#import "KNMacPresenterDisplayElementDragControllerDelegate-Protocol.h"

@class KNMacAnimatedPlaybackViewController, KNMacPresenterDisplayClockViewController, KNMacPresenterDisplayConfiguration, KNMacPresenterDisplayElementDragController, KNMacPresenterDisplayElementResizeKnobView, KNMacPresenterDisplayNotesContainerViewController, KNMacPresenterDisplayTimerViewController, KNPlaybackController, KNPlaybackThumbnailGenerator, KNPresenterDisplayClockController, KNPresenterDisplayTimerController, NSString;
@protocol KNMacPlaybackViewController, KNMacPresenterDisplayContentViewControllerDelegate;

@interface KNMacPresenterDisplayContentViewController : NSViewController <KNMacPresenterDisplayContentViewDelegate, KNMacPresenterDisplayElementDragControllerDelegate>
{
    KNPlaybackThumbnailGenerator *_thumbnailGenerator;
    KNMacPresenterDisplayNotesContainerViewController *_notesViewController;
    NSViewController<KNMacPlaybackViewController> *_currentSlideViewController;
    NSViewController<KNMacPlaybackViewController> *_nextSlideViewController;
    KNPlaybackController *_playbackController;
    KNPresenterDisplayClockController *_clockController;
    KNPresenterDisplayTimerController *_timerController;
    KNMacPresenterDisplayClockViewController *_clockViewController;
    KNMacPresenterDisplayTimerViewController *_timerViewController;
    KNMacPresenterDisplayElementDragController *_dragController;
    KNMacPresenterDisplayElementResizeKnobView *_knobHitOnMouseDown;
    NSString *_knobHitElementIdentifier;
    struct CGPoint _lastMouseDownPoint;
    BOOL _handleSelectionChangeOnMouseUp;
    BOOL _isUpdatingPresenterNotesTextScaleFactorFromConfiguration;
    BOOL _isCurrentSlideViewVisible;
    BOOL _isNextSlideViewVisible;
    BOOL _didDisableCurrentSlideViewControllerResolutionUpdates;
    BOOL _isLoaded;
    BOOL _canEditPresenterNotes;
    BOOL _isCustomizingMetrics;
    BOOL _configurationLocked;
    id <KNMacPresenterDisplayContentViewControllerDelegate> _delegate;
    KNMacPresenterDisplayConfiguration *_configuration;
    KNMacAnimatedPlaybackViewController *_animatedPlaybackViewController;
}

+ (BOOL)automaticallyNotifiesObserversOfConfiguration;
@property(nonatomic, getter=isConfigurationLocked) BOOL configurationLocked; // @synthesize configurationLocked=_configurationLocked;
@property(nonatomic, getter=isCustomizingMetrics) BOOL customizingMetrics; // @synthesize customizingMetrics=_isCustomizingMetrics;
@property(nonatomic) BOOL canEditPresenterNotes; // @synthesize canEditPresenterNotes=_canEditPresenterNotes;
@property(retain, nonatomic) KNMacAnimatedPlaybackViewController *animatedPlaybackViewController; // @synthesize animatedPlaybackViewController=_animatedPlaybackViewController;
@property(copy, nonatomic) KNMacPresenterDisplayConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <KNMacPresenterDisplayContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)presenterDisplayElementDragController:(id)arg1 dragScaleFactorForElementIdentifier:(id)arg2;
- (struct CGPoint)presenterDisplayElementDragController:(id)arg1 validateSelectedElementMoveForOffset:(struct CGPoint)arg2;
- (void)p_updateNextSlideViewControllerForContainerView:(id)arg1;
- (void)p_updateCurrentSlideViewControllerForContainerView:(id)arg1;
- (id)p_makeReadyToAdvanceIndicatorView;
- (void)p_tearDownTimerElementView;
- (id)p_makeTimerElementView;
- (void)p_tearDownClockElementView;
- (id)p_makeClockElementView;
- (void)p_teardownPresenterNotesElementView;
- (id)p_makePresenterNotesElementView;
- (id)p_makeSlideLabel;
- (void)p_tearDownNextSlideElementView;
- (id)p_makeNextSlideElementView;
- (void)p_tearDownCurrentSlideElementView;
- (id)p_makeCurrentSlideElementView;
- (struct CGPoint)p_offsetForKeyDownEvent:(id)arg1;
- (BOOL)p_handleArrowKeypressForEvent:(id)arg1;
- (struct CGPoint)p_validElementMoveForOffset:(struct CGPoint)arg1;
- (id)p_selectedElementsWithAllVisibleChildren;
- (id)p_selectedElementsWithoutSelectedParent;
- (BOOL)p_handleDeleteKeypressForContentView:(id)arg1 event:(id)arg2;
- (BOOL)p_handleTabKeypressForContentView:(id)arg1 backTab:(BOOL)arg2;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)presenterDisplayContentViewDidEndAnimations:(id)arg1;
- (void)presenterDisplayContentViewWillBeginAnimations:(id)arg1;
- (id)presenterDisplayContentView:(id)arg1 relativeLayoutSubviewForElementView:(id)arg2 elementIdentifier:(id)arg3;
- (id)p_offsetMetricsForOffset:(struct CGPoint)arg1 draggableElements:(id)arg2;
- (BOOL)presenterDisplayContentView:(id)arg1 handleKeyDown:(id)arg2;
- (BOOL)presenterDisplayContentView:(id)arg1 handleMouseDragged:(id)arg2;
- (void)p_updateConfigurationWithViewMetrics;
- (BOOL)presenterDisplayContentView:(id)arg1 handleMouseUp:(id)arg2 onActiveElementWithIdentifier:(id)arg3;
- (BOOL)presenterDisplayContentView:(id)arg1 handleMouseDown:(id)arg2 onActiveElementWithIdentifier:(id)arg3 knob:(id)arg4;
- (id)p_elementWithAllRelatedElements:(id)arg1;
- (id)p_selectedElementsByAddingElement:(id)arg1;
- (id)p_selectedElementsByRemovingElement:(id)arg1;
- (void)p_selectElementIdentifier:(id)arg1 withEvent:(id)arg2;
- (void)presenterDisplayContentView:(id)arg1 didRemoveView:(id)arg2 forElementIdentifier:(id)arg3;
- (id)presenterDisplayContentView:(id)arg1 viewForElementIdentfier:(id)arg2;
- (void)p_playbackControllerCurrentEventDidChange:(id)arg1;
- (void)p_playbackControllerEventEventAnimationsDidBecomeActive:(id)arg1;
- (void)p_playbackControllerEventDidStart:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)p_initalElementSelection;
@property(readonly, nonatomic) BOOL isEditingPresenterNotes;
- (void)scrollPresenterNotesPageDown:(id)arg1;
- (void)scrollPresenterNotesPageUp:(id)arg1;
- (BOOL)endEditingPresenterNotesIfNeeded;
- (void)setNotesSelectionPath:(id)arg1 withFlags:(unsigned long long)arg2;
- (struct CGRect)p_scaledRectForUnscaledRect:(struct CGRect)arg1;
- (void)p_updateContentElementsAnimated:(BOOL)arg1;
- (id)p_thumbnailGenerator;
- (void)p_updateNotesForCurrentSlide;
- (void)p_updateForCurrentEventAnimated:(BOOL)arg1;
- (void)setConfiguration:(id)arg1 animated:(BOOL)arg2;
- (unsigned long long)p_numberOfEventsRemainingOnVisibleSlideNode;
- (void)endPresentation;
- (void)beginPresentationWithPlaybackController:(id)arg1 clockController:(id)arg2 timerController:(id)arg3;
- (id)p_contentView;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

