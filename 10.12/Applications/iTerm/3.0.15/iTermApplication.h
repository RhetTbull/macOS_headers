//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

@class NSEvent;

@interface iTermApplication : NSApplication
{
    NSEvent *_fakeCurrentEvent;
}

+ (id)sharedApplication;
@property(retain) NSEvent *fakeCurrentEvent; // @synthesize fakeCurrentEvent=_fakeCurrentEvent;
- (id)orderedTerminalWindows;
- (id)currentEvent;
- (id)delegate;
- (void)sendEvent:(id)arg1;
- (BOOL)_eventUsesNavigationKeys:(id)arg1;
- (void)dealloc;
- (id)currentWindow;
- (id)valueForUndefinedKey:(id)arg1;

@end

