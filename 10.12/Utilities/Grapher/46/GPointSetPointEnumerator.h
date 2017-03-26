//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DPointSet, GPointSet, GSystem;

@interface GPointSetPointEnumerator : NSObject
{
    GPointSet *mPointSet;
    DPointSet *mDefinition;
    GSystem *mSystem;
    unsigned long long mRow;
    unsigned long long mRows;
    unsigned long long mDim;
}

+ (id)enumeratorWithPointSet:(id)arg1;
- (BOOL)nextPoint:(double *)arg1 inSystem:(id)arg2;
- (void)dealloc;
- (id)initWithPointSet:(id)arg1;

@end

