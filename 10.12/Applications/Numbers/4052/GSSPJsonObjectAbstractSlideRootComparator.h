//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPJsonObjectClassComparator.h"

@class NSObject;

@interface GSSPJsonObjectAbstractSlideRootComparator : GSSPJsonObjectClassComparator
{
    NSObject *_updatedServerObject;
    NSObject *_updatedClientObject;
}

- (int)p_compareServerObject:(id)arg1 againstClientObject:(id)arg2;
- (id)clientObject;
- (id)serverObject;

@end

