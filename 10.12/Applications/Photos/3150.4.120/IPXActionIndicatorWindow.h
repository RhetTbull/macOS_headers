//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSTimer;

@interface IPXActionIndicatorWindow : NSWindow
{
    NSTimer *mWindowTimer;
    double mFadeIncrement;
    double mFade;
    BOOL mPoof;
    double mAnimationDelay;
}

- (void).cxx_destruct;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)_hideUsingTimer:(id)arg1;
- (void)scheduleHide:(double)arg1;
- (void)setPoof:(BOOL)arg1;
- (id)initWithView:(id)arg1;
- (void)dealloc;

@end

