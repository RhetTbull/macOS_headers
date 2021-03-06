//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalCancelable.h"

@class NSRunLoop;

@interface CalCancelableRunLoopPerformBlock : NSObject <CalCancelable>
{
    NSRunLoop *_runLoop;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
- (void).cxx_destruct;
- (void)_performBlock:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)performAfterDelay:(double)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 inRunLoop:(id)arg2;

@end

