//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSMutableArray, Notifier;

@interface FloaterWindow : NSWindow
{
    NSMutableArray *_keyDownQueue;
    BOOL _useClientDragging;
    Notifier *_notifier;
}

@property __weak Notifier *notifier; // @synthesize notifier=_notifier;
- (void).cxx_destruct;
- (void)sendEvent:(id)arg1;
- (void)moveWindow:(id)arg1;

@end

