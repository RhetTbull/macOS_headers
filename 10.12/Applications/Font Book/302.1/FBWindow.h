//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@interface FBWindow : NSWindow
{
    BOOL _animating;
}

@property BOOL animating; // @synthesize animating=_animating;
- (BOOL)makeFirstResponder:(id)arg1;
- (double)animationResizeTime:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2 animate:(BOOL)arg3;

@end

