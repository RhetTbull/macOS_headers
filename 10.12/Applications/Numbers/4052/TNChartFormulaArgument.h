//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TNChartFormulaArgument : NSObject
{
    int mType;
    void *mData;
}

@property(readonly) int type; // @synthesize type=mType;
- (id)description;
@property(readonly) struct TSCEValue *staticValue;
@property(readonly) CDStruct_fc93c73e rangeReference;
@property(readonly) CDStruct_de21cb60 cellReference;
@property(readonly) BOOL isBadRef;
@property(readonly) BOOL isReference;
@property(readonly) BOOL isStaticValue;
@property(readonly) BOOL isRangeReference;
@property(readonly) BOOL isCellReference;
- (void)dealloc;
- (id)initWithBadRef;
- (id)initWithStaticValue:(const struct TSCEValue *)arg1;
- (id)initWithRangeReference:(CDStruct_fc93c73e)arg1;
- (id)initWithCellReference:(CDStruct_de21cb60)arg1;

@end

