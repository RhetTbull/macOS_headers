//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface KNKPFPackageLoadingRequest : NSObject
{
    BOOL _canRetry;
    NSSet *_assetPaths;
    long long _priority;
    double _fallbackTimeoutInterval;
    CDUnknownBlockType _completionHandler;
}

@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) BOOL canRetry; // @synthesize canRetry=_canRetry;
@property(readonly, nonatomic) double fallbackTimeoutInterval; // @synthesize fallbackTimeoutInterval=_fallbackTimeoutInterval;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSSet *assetPaths; // @synthesize assetPaths=_assetPaths;
- (void)dealloc;
- (id)init;
- (id)initWithAssetPaths:(id)arg1 priority:(long long)arg2 fallbackTimeoutInterval:(double)arg3 canRetry:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

