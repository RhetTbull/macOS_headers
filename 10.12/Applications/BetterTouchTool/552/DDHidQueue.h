//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSRunLoop;

__attribute__((visibility("hidden")))
@interface DDHidQueue : NSObject
{
    struct IOHIDQueueInterface **mQueue;
    NSRunLoop *mRunLoop;
    BOOL mStarted;
    id mDelegate;
    struct __CFRunLoopSource *mEventSource;
}

- (id)nextEvent;
- (BOOL)getNextEvent:(struct IOHIDEventStruct *)arg1;
- (BOOL)isStarted;
- (void)stop;
- (void)startOnRunLoop:(id)arg1;
- (void)startOnCurrentRunLoop;
- (void)setDelegate:(id)arg1;
- (void)addElements:(id)arg1 recursively:(BOOL)arg2;
- (void)addElements:(id)arg1;
- (void)addElement:(id)arg1;
- (void)dealloc;
- (id)initWithHIDQueue:(struct IOHIDQueueInterface **)arg1 size:(unsigned int)arg2;
- (void)handleQueueCallback;

@end

