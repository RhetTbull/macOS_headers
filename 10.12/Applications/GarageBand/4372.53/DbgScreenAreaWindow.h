//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class DbgScreenAreaView, NSTimer;

@interface DbgScreenAreaWindow : NSWindow
{
    DbgScreenAreaView *_highlightView;
    NSTimer *highlightTimer;
}

- (void)highlightTimerProc:(id)arg1;
- (void)updateHighlightWindow;
- (void)removeDbgScreenAreaObserver:(id)arg1;
- (void)addDbgScreenAreaObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

