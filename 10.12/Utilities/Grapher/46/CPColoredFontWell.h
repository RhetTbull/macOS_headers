//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CPFocusRingView.h"

@class CPColoredFont;

@interface CPColoredFontWell : CPFocusRingView
{
    id mTarget;
    CPColoredFont *mColoredFont;
}

- (void)mouseDown:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)windowDidChangeStatus:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)drawInteriorWithRect:(struct CGRect)arg1;
- (void)changeColor:(id)arg1;
- (void)setColor:(id)arg1;
- (void)changeFont:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setColoredFont:(id)arg1;
- (void)coloredFontDidChange;
- (void)update:(id)arg1;
- (id)coloredFont;
- (void)dealloc;
- (void)awakeFromNib;

@end

