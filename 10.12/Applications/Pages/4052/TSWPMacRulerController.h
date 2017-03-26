//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPRulerController.h"

#import "TSDRulerController-Protocol.h"
#import "TSWPStorageObserver-Protocol.h"

@class CALayer, NSNumberFormatter, NSString, NSView, TSUColor, TSWPMacRulerView, TSWPStorage;

@interface TSWPMacRulerController : TSWPRulerController <TSDRulerController, TSWPStorageObserver>
{
    NSView *_parentView;
    NSView *_cornerView;
    TSWPMacRulerView *_rulerViews[2];
    CALayer *_horizontalGuideLayers[3];
    CALayer *_verticalGuideLayers[3];
    NSNumberFormatter *_unitFormatter;
    BOOL _hasBeenTornDown;
    BOOL _wantsTranslucentBackground;
    TSWPStorage *_p_tocHostingTextStorage;
}

@property(nonatomic) TSWPStorage *p_tocHostingTextStorage; // @synthesize p_tocHostingTextStorage=_p_tocHostingTextStorage;
@property(nonatomic) BOOL wantsTranslucentBackground; // @synthesize wantsTranslucentBackground=_wantsTranslucentBackground;
- (id)borderColor;
- (id)numericLabelColor;
- (id)tickColor;
- (id)fullTickColor;
- (void)p_setGuideWithRect:(struct CGRect)arg1 horizontal:(BOOL)arg2 vertical:(BOOL)arg3;
- (void)p_localeDidChange:(id)arg1;
- (void)p_createCornerView;
- (void)p_createRulerViewWithOrientation:(int)arg1 canvasEditor:(id)arg2;
- (void)p_teardownCornerView;
- (void)p_createCornerViewWithParentView:(id)arg1;
- (void)p_teardownRulerView:(int)arg1;
- (void)p_createRulerViewWithParentView:(id)arg1 orientation:(int)arg2 canvasEditor:(id)arg3;
- (id)p_newRulerViewWithFrame:(struct CGRect)arg1 canvasEditor:(id)arg2;
- (void)p_performBlockWithRulerViews:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) CALayer *p_vTicksLayer;
@property(readonly, nonatomic) CALayer *p_hTicksLayer;
@property(readonly, nonatomic) TSUColor *p_backgroundColor;
- (void)p_updateRulerLayersContent;
- (void)p_invalidateRulerViews;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)hideRulerDragUI;
- (void)displayRulerDragUIForGuideType:(int)arg1 andOffset:(double)arg2;
- (void)displayRulerDragUIForRect:(struct CGRect)arg1;
- (void)displayRulerDragUI;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (double)rulerXFromScaledCanvasX:(double)arg1;
- (double)scaledCanvasXFromRulerX:(double)arg1;
- (struct CGPoint)rulerPointFromWindowPoint:(struct CGPoint)arg1;
- (double)liveViewScale;
- (struct CGPoint)contentOffset;
- (void)layout;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)i_showMarkers;
- (void)i_removeObserversAndHandlers;
- (void)i_addObserversAndHandlers;
- (void)p_removeTOCHostingTextStorageObserver;
- (void)p_addTOCHostingTextStorageObserver;
- (void)i_drawLabelsStartTickIndex:(long long)arg1 endTickIndex:(long long)arg2 labelFrameInterval:(long long)arg3 tickFrameSpacing:(double)arg4 docViewToRulerConversion:(double)arg5 originOffset:(double)arg6 tickBase:(double)arg7 orientation:(int)arg8 intoContext:(struct CGContext *)arg9;
- (void)i_drawTickRects:(vector_b8c73e0a *)arg1 tickType:(unsigned long long)arg2 tickBase:(double)arg3 intoContext:(struct CGContext *)arg4;
- (BOOL)i_drawPageTrailingEdgeTickForOrientation:(int)arg1;
- (BOOL)i_drawPageLeadingEdgeTickForOrientation:(int)arg1;
- (id)i_layerForRulerSublayers:(int)arg1;
- (double)i_contentsScaleForLayer:(id)arg1;
- (Class)i_rulerMarkerControllerClass;
@property(readonly, retain, nonatomic) TSWPMacRulerView *vRulerView;
@property(readonly, retain, nonatomic) TSWPMacRulerView *hRulerView;
@property(readonly, retain, nonatomic) NSView *cornerView;
@property(readonly, nonatomic) NSView *parentView;
- (void)setWritingDirection:(int)arg1;
- (void)setIncludeVertical:(BOOL)arg1;
- (void)setInteractiveCanvasController:(id)arg1;
- (void)teardown;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1 interactiveCanvasController:(id)arg2;
- (id)initWithParentView:(id)arg1 delegate:(id)arg2 interactiveCanvasController:(id)arg3;
- (void)setupInstanceWithInteractiveCanvasController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

