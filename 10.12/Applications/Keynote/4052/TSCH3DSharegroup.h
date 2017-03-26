//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSUFlushable-Protocol.h"

@class NSMutableSet, NSString, NSThread, TSCH3DResourceCache, TSCH3DShaderCache, TSCH3DSharegroupToken;
@protocol TSCH3DSharegroupDelegate;

@interface TSCH3DSharegroup : NSObject <TSUFlushable>
{
    NSThread *mOwningThread;
    TSCH3DResourceCache *mResourceCache;
    TSCH3DShaderCache *mShaderCache;
    NSMutableSet *mPurgeableResourceSet;
    int mPerformance;
    BOOL mDidReceiveFlush;
    id <TSCH3DSharegroupDelegate> mDelegate;
    TSCH3DSharegroupToken *mToken;
}

+ (id)uniqueSharegroupWithOwningThread:(id)arg1 token:(id)arg2;
@property(readonly, nonatomic) TSCH3DSharegroupToken *token; // @synthesize token=mToken;
@property(nonatomic) id <TSCH3DSharegroupDelegate> delegate; // @synthesize delegate=mDelegate;
@property(readonly, nonatomic) TSCH3DShaderCache *shaderCache; // @synthesize shaderCache=mShaderCache;
@property(readonly, nonatomic) TSCH3DResourceCache *resourceCache; // @synthesize resourceCache=mResourceCache;
@property(nonatomic) int performance; // @synthesize performance=mPerformance;
- (void)flush;
- (void)flushInTargetThread;
- (void)p_flushInTargetThread;
- (void)setIfIsMoreDemandingPerformance:(int)arg1;
- (void)forceFlushResourceSet:(id)arg1;
- (void)flushResourceSet:(id)arg1;
- (void)flushIfNecessary;
- (struct FlushResult)p_flushCacheIfNecessary;
- (void)flushMemoryForResourceSet:(id)arg1;
- (void)nonThreadOwnedFlushCache;
- (BOOL)mustRunOnMainThread;
- (BOOL)isOneShot;
- (BOOL)isCurrentThreadOwner;
- (BOOL)owningThreadIsNil;
- (void)setOwningThread:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithOwningThread:(id)arg1 token:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

