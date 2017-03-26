//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class NSColor, NSView;

@interface MAAttachedWindow : NSPanel
{
    NSColor *borderColor;
    float borderWidth;
    float viewMargin;
    float arrowBaseWidth;
    float shadowOffset;
    float arrowHeight;
    BOOL hasArrow;
    float cornerRadius;
    BOOL drawsRoundCornerBesideArrow;
    NSColor *_MABackgroundColor;
    struct CGPoint _point;
    int _side;
    float _distance;
    struct CGRect _viewFrame;
    BOOL _resizing;
    struct CGSize _contentSize;
}

@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (void)setBackgroundImage:(id)arg1;
- (void)setDrawsRoundCornerBesideArrow:(float)arg1;
- (float)drawsRoundCornerBesideArrow;
- (void)setCornerRadius:(float)arg1;
- (float)cornerRadius;
- (void)setHasArrow:(float)arg1;
- (float)hasArrow;
- (void)setArrowHeight:(float)arg1;
- (float)arrowHeight;
- (void)setArrowBaseWidth:(float)arg1;
- (float)arrowBaseWidth;
- (void)setViewMargin:(float)arg1;
- (float)viewMargin;
- (void)setBorderWidth:(float)arg1;
- (float)borderWidth;
- (void)setBorderColor:(id)arg1;
- (id)borderColor;
- (void)setBackgroundColor:(id)arg1;
- (id)windowBackgroundColor;
- (void)setPoint:(struct CGPoint)arg1 side:(int)arg2;
- (void)windowDidResize:(id)arg1;
- (BOOL)isExcludedFromWindowsMenu;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)_redisplay;
- (void)_appendArrowToPath:(id)arg1;
- (id)_backgroundPathWithInsetRect:(struct CGRect)arg1;
- (id)_backgroundColorPatternImage;
- (void)_updateBackground;
- (float)_arrowInset;
- (void)_updateGeometry;
- (void)dealloc;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
@property(readonly, nonatomic) NSView *contentView;

@end

