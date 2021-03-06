//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CLgSectionView.h"

@class SclhMetrics;

@interface ScHeaderView : CLgSectionView
{
    struct ScViewState *m_viewState;
    SclhMetrics *m_hdrMetrics;
    struct SclhPartData m_sclhPartData;
    double m_deltaY0;
    struct CGRect m_lastUpdateRect;
    BOOL m_allowHitTest;
    BOOL m_recalcMouseOver;
    BOOL m_allowUpdate;
}

- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityChildrenWereCreated:(id)arg1;
- (id)accessibilityChildren;
- (void)flagsChanged:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUpdate:(id)arg1;
- (void)setForViewPos:(struct CGPoint)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDownForStyleChooser:(struct CGRect)arg1;
- (void)mouseDownForVertTracking:(id)arg1 firstPos:(struct CGPoint)arg2 partData:(struct SclhPartData *)arg3 viewState:(struct ScViewState *)arg4;
- (void)showStaffTypeChooser:(id)arg1 viewPos:(struct CGPoint)arg2 partRect:(struct CGRect)arg3 currentStaffTypeID:(int)arg4;
- (void)showStyleChooser:(id)arg1 viewPos:(struct CGPoint)arg2 partRect:(struct CGRect)arg3 currentStyle:(int)arg4;
- (void)stylesMenuAction:(id)arg1;
- (unsigned long long)openStaffStyleWindow;
- (unsigned long long)duplicateStaffStyle:(int)arg1;
- (void)postMouseMovedEvent;
- (struct CGRect)clefIconRect:(struct CGRect)arg1 viewPos:(struct CGPoint)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (long long)doVerticalRuler:(struct ScViewState *)arg1 viewPos:(const struct CGPoint *)arg2;
- (void)drawRect_linear:(struct CGRect)arg1 viewState:(struct ScViewState *)arg2;
- (void)invalidateCursorRects:(id)arg1;
- (void)resetCursorRects;
- (void)updateMouseOverRect;
- (void)clickInstNames_page:(BOOL)arg1 viewState:(struct ScViewState *)arg2 viewPos:(struct CGPoint)arg3;
- (void)clickOnLeftSideRuler:(struct CGPoint)arg1 viewState:(struct ScViewState *)arg2;
- (double)drawInstNames_page:(BOOL)arg1 viewState:(struct ScViewState *)arg2;
- (id)scphArray:(BOOL)arg1 viewState:(struct ScViewState *)arg2;
- (id)createScphArray_hasRulers:(BOOL)arg1 viewState:(struct ScViewState *)arg2;
- (struct ScViewState *)viewState;
- (struct ScViewState *)viewState1;
- (void)setAllowUpdate:(BOOL)arg1;
- (void)forceLayoutUpdate;
- (void)doForceLayoutUpdate:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)handleUM_SCOREPREF:(id)arg1;
- (BOOL)feature_keyAndTimeSignDlogs;
- (BOOL)feature_vertTracking;
- (BOOL)feature_staffStyleChooser;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 parentView:(id)arg2;

@end

