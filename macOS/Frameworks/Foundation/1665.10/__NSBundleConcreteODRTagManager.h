//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/_NSBundleODRTagManager.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface __NSBundleConcreteODRTagManager : _NSBundleODRTagManager
{
    NSMutableDictionary *_tagToPreservationPriority;
    struct os_unfair_lock_s _lock;
}

- (void)dealloc;
- (double)preservationPriorityForTag:(id)arg1;
- (void)setPreservationPriority:(double)arg1 forTags:(id)arg2;
- (id)init;

@end

