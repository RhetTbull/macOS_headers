//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Flexo/FFApplication.h>

@class SPODDetector;

@interface PEApplication : FFApplication
{
    SPODDetector *m_spodDetector;
}

- (id)presentingWindowForSheetWindow;
- (BOOL)hideTitlebarWhenFullScreen;
- (void)miniaturizeAll:(id)arg1;
- (void)dealloc;
- (void)finishLaunching;
- (void)reportException:(id)arg1;
- (BOOL)useOverlayScrollers;
- (id)libraries;

@end

