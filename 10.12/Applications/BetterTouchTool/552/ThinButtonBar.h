//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSMutableArray, NSTrackingArea, ThinButton;

__attribute__((visibility("hidden")))
@interface ThinButtonBar : NSView
{
    NSMutableArray *_list;
    double _offsetX;
    NSTrackingArea *_tracking_area;
    id _delegate;
    ThinButton *_pushed_button;
}

- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (BOOL)isFlipped;
- (void)setDelegate:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)changeState:(unsigned int)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)addButtonWithImageResource:(id)arg1 alterImageResource:(id)arg2 tag:(unsigned int)arg3 tooltip:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

