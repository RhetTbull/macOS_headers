//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVSlowMotionSlider : NSView
{
    double _minValue;
    double _maxValue;
    id <AVSlowMotionSliderDelegate> _delegate;
    struct {
        char slowMotionSliderMouseDownEventTrackingBegan;
        char slowMotionSlider_tracksMouseDownEventWithCurrentValue;
        char slowMotionSliderMouseDownEventTrackingEnded;
    } _delegateRespondsTo;
    NSView *_trackView;
    NSView *_minHandleView;
    NSView *_maxHandleView;
    BOOL _needsUpdateTrackAndHandles;
    NSMutableArray *_layoutConstraints;
}

+ (BOOL)automaticallyNotifiesObserversOfMaxValue;
+ (BOOL)automaticallyNotifiesObserversOfMinValue;
- (void).cxx_destruct;
- (void)_updateTrackAndHandles;
- (void)_updateTrackAndHandlesIfNeeded;
- (void)_setNeedsUpdateTrackAndHandles;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (id)hitTest:(struct CGPoint)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)allowsVibrancy;
- (void)setFrameSize:(struct CGSize)arg1;
@property __weak id <AVSlowMotionSliderDelegate> delegate;
@property double maxValue;
@property double minValue;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

