//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCell.h>

@class NSFont;

@interface FBGlyphMatrixCell : NSCell
{
    unsigned short glyphID;
    double pointSize;
    NSFont *glyphViewFont;
    struct CGContext *_context;
}

@property(retain) NSFont *glyphViewFont; // @synthesize glyphViewFont;
@property double pointSize; // @synthesize pointSize;
@property unsigned short glyphID; // @synthesize glyphID;
- (BOOL)refusesFirstResponder;
- (BOOL)acceptsFirstResponder;
- (long long)state;
- (void)setState:(long long)arg1;
- (long long)tag;
- (void)setTag:(long long)arg1;
@property(readonly) struct CGFont *cgFont;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)dealloc;
- (void)_restoreGraphicsState;
- (void)_prepareGraphicsState;

@end

