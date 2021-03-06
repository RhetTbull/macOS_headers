//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BrowserTabPersistentState, BrowserWindowControllerMac;

__attribute__((visibility("hidden")))
@interface ClosedTabStateHolder : NSObject
{
    BrowserWindowControllerMac *_browserWindowController;
    BrowserTabPersistentState *_lastClosedTabState;
}

- (void).cxx_destruct;
- (void)_closeTabWithoutConfirming:(id)arg1;
- (void)_undoCloseTabAtIndex:(unsigned long long)arg1 andSelect:(BOOL)arg2;
- (void)clearLastClosedTabState;
- (void)setLastClosedTabState:(id)arg1;
- (id)lastClosedTabState;
- (id)initWithBrowserWindowController:(id)arg1;

@end

