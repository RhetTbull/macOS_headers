//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface TSUTraceableResourceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_knownTraceableResources;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)description;
- (id)serializationDescription;
- (void)registerTraceableResource:(id)arg1;
- (id)init;

@end

