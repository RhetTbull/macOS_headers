//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSAnimationDelegate-Protocol.h"

@class DGCurveAnimation, DGCurvesCustomViewController, NSCursor, NSString, NSTrackingArea;

@interface DGCurveView : NSView <NSAnimationDelegate>
{
    DGCurvesCustomViewController *_curveController;
    NSCursor *_selectCursor;
    NSCursor *_moveCursor;
    int _currentCursor;
    BOOL _dragging;
    NSTrackingArea *_trackingArea;
    BOOL _marqueeSelection;
    struct CGPoint _marqueeStart;
    struct CGPoint _currentCoords;
    long long _redTableSize;
    float *_redTable;
    long long _greenTableSize;
    float *_greenTable;
    long long _blueTableSize;
    float *_blueTable;
    long long _rgbTableSize;
    float *_rgbTable;
    double _curveWidth;
    double _curveHeight;
    DGCurveAnimation *_animation;
    struct CGPoint _minRange;
    struct CGPoint _maxRange;
    struct CGPoint _specialMinRange;
    struct CGPoint _specialMaxRange;
    BOOL _specialRangeOn;
    BOOL _inside;
    BOOL _enabled;
    id _histogram;
}

@property(retain, nonatomic) id histogram; // @synthesize histogram=_histogram;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (BOOL)mouseIsInside;
- (void)setSpecialRange:(struct CGPoint)arg1 max:(struct CGPoint)arg2;
- (void)animationDidEnd:(id)arg1;
- (void)setMinRange:(struct CGPoint)arg1 maxRange:(struct CGPoint)arg2 animate:(BOOL)arg3;
- (struct CGPoint)maxRange;
- (struct CGPoint)minRange;
- (double)curveHeight;
- (double)curveWidth;
- (BOOL)isHud;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawHistogram:(struct CGRect)arg1;
- (void)drawSpecialRange;
- (void)drawMarquee;
- (void)drawCurveBox:(struct CGRect)arg1;
- (void)drawControlPoints:(struct CGRect)arg1 type:(int)arg2 table:(float *)arg3;
- (float *)drawCubicSpline:(struct CGRect)arg1 type:(int)arg2;
- (void)drawWashes;
- (id)curveColor:(int)arg1;
- (void)removePoint:(id)arg1;
- (void)resetCurve:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (id)menuForEvent:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)keyDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseDown:(id)arg1;
- (int)_setCursorForPoint:(struct CGPoint)arg1;
- (void)updateTrackingAreas;
- (void)resetCursorRects;
- (id)_moveCursor;
- (id)_selectCursor;
- (void)_updateInputOutput;
- (long long)_countSelectedAndRemovablePoints;
- (long long)_tableSize:(int)arg1;
- (float *)_table:(int)arg1;
- (float *)_table:(int)arg1 tableSize:(long long)arg2;
- (float *)_table:(long long)arg1 currentTableSize:(long long *)arg2 currentTablePtr:(float *)arg3;
- (long long)_indexOfClosestControlPointToPoint:(struct CGPoint)arg1;
- (id)_closestControlPointToPoint:(struct CGPoint)arg1;
- (BOOL)_updateCurrentCoords:(id)arg1;
- (struct CGRect)_marqueeRect;
- (struct CGRect)curveBox;
- (CDStruct_c3b9c2ee)viewPointToCurvePoint:(struct CGPoint)arg1;
- (struct CGPoint)curvePointToViewPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)curvePointToViewPointFloat:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)_ptOnCurve:(long long)arg1 type:(int)arg2;
- (id)_controlPointAtIndex:(long long)arg1 type:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

