//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSPComponentWriteChannel-Protocol.h"

@class NSString, TSUDispatchData;
@protocol OS_dispatch_queue;

@interface TSPMemoryComponentWriteChannel : NSObject <TSPComponentWriteChannel>
{
    NSObject<OS_dispatch_queue> *_streamQueue;
    TSUDispatchData *_streamData;
    BOOL _isClosed;
}

- (void).cxx_destruct;
- (id)serializedData;
- (void)_close;
- (void)close;
- (void)writeData:(id)arg1;
- (id)init;
- (id)initWithAlwaysDefragmentData:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

