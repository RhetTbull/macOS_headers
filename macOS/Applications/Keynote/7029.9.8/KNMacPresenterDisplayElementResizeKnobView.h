//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface KNMacPresenterDisplayElementResizeKnobView : NSView
{
    struct CGPoint _knobPosition;
}

+ (id)knobViewWithPosition:(struct CGPoint)arg1;
+ (struct CGSize)knobSize;
@property(nonatomic) struct CGPoint knobPosition; // @synthesize knobPosition=_knobPosition;
- (void)resetCursorRects;
- (struct CGSize)intrinsicContentSize;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)p_knobImage;

@end

