//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GQSTable.h"

@interface GQSSpiceTable : GQSTable
{
    struct __CFDictionary *mVectorUidToAlongMap;
    BOOL mReadingRowVectors;
    struct __CFArray *mCurrentGridStyleArray;
    BOOL mAutoResize;
    vector_ec52ae8c *mRowPositions;
    vector_ec52ae8c *mColumnPositions;
}

@property(nonatomic) BOOL autoResize; // @synthesize autoResize=mAutoResize;
- (vector_ec52ae8c *)columnPositions;
- (vector_ec52ae8c *)rowPositions;
- (id)currentGridStyle;
- (void)addGridStyle:(id)arg1;
- (void)setAlongValue:(float)arg1 forOwnedVectorUid:(char *)arg2;
- (void)finalizeCurrentGridLine;
- (float)alongValueForVectorUid:(const char *)arg1;
- (void)aboutToReadCells;
- (void)aboutToReadColumnVectors;
- (void)aboutToReadRowVectors;
- (id)currentSpiceCellState;
- (Class)cellStateClass;
- (void)dealloc;
- (id)initWithTable:(id)arg1;

@end

