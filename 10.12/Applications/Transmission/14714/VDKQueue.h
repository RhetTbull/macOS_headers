//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol VDKQueueDelegate;

@interface VDKQueue : NSObject
{
    id <VDKQueueDelegate> _delegate;
    BOOL _alwaysPostNotifications;
    int _coreQueueFD;
    NSMutableDictionary *_watchedPathEntries;
    BOOL _keepWatcherThreadRunning;
}

@property BOOL alwaysPostNotifications; // @synthesize alwaysPostNotifications=_alwaysPostNotifications;
@property id <VDKQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)numberOfWatchedPaths;
- (void)removeAllPaths;
- (void)removePath:(id)arg1;
- (void)addPath:(id)arg1 notifyingAbout:(unsigned int)arg2;
- (void)addPath:(id)arg1;
- (void)watcherThread:(id)arg1;
- (id)addPathToQueue:(id)arg1 notifyingAbout:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end

