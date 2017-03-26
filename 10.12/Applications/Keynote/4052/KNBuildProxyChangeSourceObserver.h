//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSKChangeSourceObserver-Protocol.h"

@class KNBuildProxy, NSString;

@interface KNBuildProxyChangeSourceObserver : NSObject <TSKChangeSourceObserver>
{
    KNBuildProxy *mBuildProxy;
}

- (id)p_keyPathsToInvalidateForChangeRecords:(id)arg1 forOtherBuild:(id)arg2;
- (id)p_keyPathsToInvalidateForDrawableChangeRecords:(id)arg1;
- (id)p_keyPathsToInvalidateForSlideChangeRecords:(id)arg1;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)teardown;
- (id)initWithBuildProxy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

