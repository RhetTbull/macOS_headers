//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ODDDataPoint.h"

@class NSMutableArray, ODDTransitionPoint;

@interface ODDNodePoint : ODDDataPoint
{
    ODDNodePoint *mParent;
    NSMutableArray *mChildren;
    ODDTransitionPoint *mParentTransition;
    ODDTransitionPoint *mSiblingTransition;
}

- (void)setSiblingTransition:(id)arg1;
- (id)siblingTransition;
- (void)setParentTransition:(id)arg1;
- (id)parentTransition;
- (void)addChild:(id)arg1 order:(unsigned long long)arg2;
- (id)children;
- (id)parent;
- (void)setType:(int)arg1;
- (void)dealloc;

@end

