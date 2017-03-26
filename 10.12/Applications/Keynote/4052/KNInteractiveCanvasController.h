//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSAInteractiveCanvasController.h"

#import "TSDConnectedInfoReplacing-Protocol.h"
#import "TSWPStorageObserver-Protocol.h"

@class CALayer, KNAbstractSlide, KNActionGhostManager, KNRepDragTrackerDelegate, KNRepTrackerDelegate, KNShow, KNSlideNode, NSArray, NSMutableArray, NSObject, NSSet, NSString, TSDDrawableInfo, TSUColor;
@protocol KNHyperlinkDelegate, TSDInfo;

@interface KNInteractiveCanvasController : TSAInteractiveCanvasController <TSDConnectedInfoReplacing, TSWPStorageObserver>
{
    KNShow *mShow;
    KNSlideNode *mSlideNode;
    KNAbstractSlide *mSlide;
    double mOriginalY;
    NSArray *mUnhiddenInfos;
    BOOL mRulersVisible;
    BOOL mStoppedUIIdleTimer;
    BOOL mIsSuppressingInterfaceGestures;
    BOOL mSuppressZoomOnSelectionChange;
    BOOL mForceSuppressSpellChecking;
    BOOL mFadesDrawablesOutsideSlide;
    NSArray *mDrawableFadeMaskSublayers;
    CALayer *mDrawableFadeMaskLayer;
    NSMutableArray *mBackgroundDecorators;
    CALayer *mSlideShadowLayer;
    BOOL mSlideHidden;
    KNActionGhostManager *mActionGhostManager;
    KNRepDragTrackerDelegate *mRepDragTrackerDelegate;
    KNRepTrackerDelegate *mRepTrackerDelegate;
    NSObject<KNHyperlinkDelegate> *mHyperlinkDelegate;
    NSSet *mPendingChunksToSelect;
    NSSet *mPendingChunksToDeselect;
    TSUColor *mSlideShadowColor;
    double mSlideShadowOpacity;
    double mSlideShadowRadius;
    struct CGSize mSlideShadowOffset;
}

@property(copy, nonatomic) NSArray *unhiddenInfos; // @synthesize unhiddenInfos=mUnhiddenInfos;
@property(nonatomic) NSObject<KNHyperlinkDelegate> *hyperlinkDelegate; // @synthesize hyperlinkDelegate=mHyperlinkDelegate;
@property(readonly, nonatomic) KNActionGhostManager *actionGhostManager; // @synthesize actionGhostManager=mActionGhostManager;
@property(nonatomic, getter=isSlideHidden) BOOL slideHidden; // @synthesize slideHidden=mSlideHidden;
@property(nonatomic) struct CGSize slideShadowOffset; // @synthesize slideShadowOffset=mSlideShadowOffset;
@property(nonatomic) double slideShadowRadius; // @synthesize slideShadowRadius=mSlideShadowRadius;
@property(nonatomic) double slideShadowOpacity; // @synthesize slideShadowOpacity=mSlideShadowOpacity;
@property(copy, nonatomic) TSUColor *slideShadowColor; // @synthesize slideShadowColor=mSlideShadowColor;
@property(nonatomic) BOOL fadesDrawablesOutsideSlide; // @synthesize fadesDrawablesOutsideSlide=mFadesDrawablesOutsideSlide;
@property(nonatomic) BOOL forceSuppressSpellChecking; // @synthesize forceSuppressSpellChecking=mForceSuppressSpellChecking;
@property(nonatomic) BOOL suppressZoomOnSelectionChange; // @synthesize suppressZoomOnSelectionChange=mSuppressZoomOnSelectionChange;
@property(nonatomic, getter=isSuppressingInterfaceGestures) BOOL suppressInterfaceGestures; // @synthesize suppressInterfaceGestures=mIsSuppressingInterfaceGestures;
@property(retain, nonatomic) KNSlideNode *slideNode; // @synthesize slideNode=mSlideNode;
@property(retain, nonatomic) KNShow *show; // @synthesize show=mShow;
- (id)filteredMainCanvasRestoredSelectionPath:(id)arg1;
- (BOOL)p_currentSlideContainsInfo:(id)arg1;
- (BOOL)shouldDisplayCommentForAuthor:(id)arg1 info:(id)arg2;
- (void)setShowsComments:(BOOL)arg1;
- (BOOL)showsComments;
- (id)repTrackerDelegate;
- (id)repDragTrackerDelegateForRep:(id)arg1;
- (id)infosToHideForCanvas:(id)arg1;
- (BOOL)shouldZoomOnSelectionChange;
- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1;
- (BOOL)isInfoAKeynoteMasterObject:(id)arg1;
- (BOOL)spellCheckingSuppressed;
- (BOOL)allowNegativeAutoscroll;
@property(readonly, nonatomic) NSSet *multipleSelectedDrawables;
@property(readonly, nonatomic) TSDDrawableInfo *selectedOrEditingDrawable;
@property(readonly, nonatomic) TSDDrawableInfo *selectedDrawableInfo;
@property(readonly, nonatomic) NSObject<TSDInfo> *selectedInfo;
- (id)zOrderedInfosForPasteboardFromCanvasSelection:(id)arg1;
- (void)showHyperlinkInfoForDrawables:(id)arg1;
- (BOOL)p_textRepIsEditable:(id)arg1;
- (id)macHyperlinkController;
- (Class)hyperlinkControllerClass;
- (id)p_updatedSlideShadowLayer;
- (double)p_slideShadowGeometryScale;
@property(readonly, nonatomic) struct CGSize scaledSlideShadowOffset;
@property(readonly, nonatomic) double scaledSlideShadowRadius;
- (void)removeBackgroundDecorator:(id)arg1;
- (void)addBackgroundDecorator:(id)arg1;
- (id)p_updatedDrawableFadeMaskLayer;
- (id)p_actionGhostKnobImageForRep:(id)arg1;
- (id)actionGhostKnobForRep:(id)arg1;
- (BOOL)shouldShowOnRepHyperlinkUI;
- (void)makeUserDefinedGuidesVisible;
- (BOOL)shouldShowPathHighlightOnUnselectedInvisibleShapes;
- (id)additionalLayersUnderRepLayers;
- (id)provideUserDefinedGuides;
- (id)provideDynamicGuidesForLayout:(id)arg1;
- (id)localizedPercentStringForAlignmentGuide:(id)arg1;
- (id)guideStorageProviderAtPoint:(struct CGPoint)arg1;
- (void)p_fixGuideEnds:(id)arg1;
- (void)canvasDidUpdateRepsFromLayouts:(id)arg1;
- (void)actionGhostKnobHitForRep:(id)arg1;
- (void)toggleHyperlinkUIForRep:(id)arg1;
- (void)endEditing;
- (id)newCanvasEditor;
@property(readonly, nonatomic) BOOL isRepEditingText;
- (id)p_pendingChunksToSelectOnSlide;
- (BOOL)p_hasPendingChunksToSelectOrDeselect;
- (BOOL)p_hasChunksInCanvasSelectionWhichAreNotOnSlideForSelectionPath:(id)arg1;
- (BOOL)p_pendingChunksAreValidForSelectionPath:(id)arg1;
- (id)p_selectionPathUpdatingChunksInCanvasSelectionComponentForSelectionPath:(id)arg1;
- (void)setSelectionPath:(id)arg1 withSelectionFlags:(unsigned long long)arg2;
- (void)didProcessAllChanges;
- (void)p_asyncProcessShowChanges:(id)arg1;
- (void)p_asyncProcessSlideNodeChanges:(id)arg1;
- (void)p_asyncProcessSlideChanges:(id)arg1;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)p_updateInfosToDisplayIfNeeded;
- (void)canvasWillLayout:(id)arg1;
- (BOOL)selectionPathContainsOnlyInfosOnCanvas:(id)arg1;
- (BOOL)allowedToEditMask;
- (BOOL)canPerformInteractiveAction:(SEL)arg1 withSender:(id)arg2;
- (double)viewScaleFittingContentInBounds:(struct CGRect)arg1 withInset:(double)arg2;
- (void)slideValueChanged:(id)arg1;
- (void)invalidateSlideNumber;
- (unsigned long long)slideNumber;
- (void)setSlideNode:(id)arg1 andShow:(id)arg2;
- (void)storage:(id)arg1 setNeedsDisplayInRange:(struct _NSRange)arg2;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (void)setInfosToDisplay:(id)arg1;
- (void)teardown;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

