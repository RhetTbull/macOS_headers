//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface TMAColorView : NSView
{
    struct CGColor *_bestColorRepForScale;
    NSColor *_color;
    double _cornerRadius;
}

@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy, nonatomic) NSColor *color; // @synthesize color=_color;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)isOpaque;
- (void)setLayerContentsRedrawPolicy:(long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGColor *)p_bestColorRepForScale;
- (BOOL)p_colorIsMultiRepPattern;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)p_commonInitColorView;
- (void)dealloc;

@end

