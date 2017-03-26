//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer;
@protocol KNMacEffectCustomCurveHandleDelegate;

@interface KNMacEffectCustomCurveHandle : NSView
{
    struct CGPoint _currentUnitCenter;
    struct CGPoint _currentAnchorPoint;
    struct CGPoint _mouseDownPoint;
    double _scaleFactor;
    BOOL _dragging;
    BOOL _cursorExitedWhileDragging;
    BOOL _selected;
    BOOL _visible;
    id <KNMacEffectCustomCurveHandleDelegate> _delegate;
    long long _handleType;
    id _pointSetReference;
    NSView *_containingView;
    CALayer *_imageLayer;
    struct CGSize _defaultSize;
}

@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(nonatomic) NSView *containingView; // @synthesize containingView=_containingView;
@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) id pointSetReference; // @synthesize pointSetReference=_pointSetReference;
@property(nonatomic) long long handleType; // @synthesize handleType=_handleType;
@property(nonatomic) struct CGSize defaultSize; // @synthesize defaultSize=_defaultSize;
@property(nonatomic) id <KNMacEffectCustomCurveHandleDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGPoint center;
- (struct CGPoint)p_convertFramePointToUnit:(struct CGPoint)arg1;
- (struct CGPoint)p_convertUnitPointToFrameCoordinates:(struct CGPoint)arg1;
- (void)p_scaleFrameToScaleFactor:(double)arg1;
- (struct CGPoint)p_boundsCorrectedCenter:(struct CGPoint)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)changeYToNormalizedValue:(double)arg1;
- (void)changeXToNormalizedValue:(double)arg1;
- (void)p_updatePointOnAxis:(unsigned long long)arg1 toValue:(double)arg2;
- (struct CGPoint)closestValidPointForValue:(double)arg1 onAxis:(unsigned long long)arg2 origionalUnitCenterPoint:(struct CGPoint)arg3;
- (void)changeXAndYToNormalizedPoint:(struct CGPoint)arg1;
- (void)changeYValueByValue:(double)arg1;
- (void)changeXValueByValue:(double)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

