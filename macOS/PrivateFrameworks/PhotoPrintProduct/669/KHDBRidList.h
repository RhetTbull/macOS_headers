//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableArray;

@interface KHDBRidList : NSObject <NSCopying, NSCoding>
{
    unsigned long long m_ridCount;
    NSMutableArray *m_ridArrays;
    unsigned long long m_lastOffsetFoundAt;
    BOOL m_isDirty;
}

+ (id)listFromNumbers:(id)arg1;
@property BOOL isDirty; // @synthesize isDirty=m_isDirty;
- (void)_addArray:(id)arg1;
- (id)_arrayAtIndex:(unsigned long long)arg1;
- (unsigned long long)_arrayCount;
- (id)extractBatch:(unsigned long long)arg1;
- (id)extractLastRidArray;
- (id)extractFirstRidArray;
- (id)firstRidArray;
- (void)setRidsUsingIndexSet:(id)arg1;
- (void)setRidsUsingList:(id)arg1;
- (id)asArrayOfLimitedArraysOfNumbers:(unsigned long long)arg1;
- (id)asSetOfNumbers;
- (id)asArrayOfNumbers;
- (id)asIndexSet;
- (id)asCommaSeparatedString;
- (unsigned long long)count;
- (BOOL)isSubsetOf:(id)arg1;
- (BOOL)overlapsWith:(id)arg1;
- (void)diffNumbers:(id)arg1;
- (void)orNumbers:(id)arg1;
- (void)andNumbers:(id)arg1;
- (void)diffRids:(id)arg1;
- (void)orRids:(id)arg1;
- (void)andRids:(id)arg1;
- (unsigned long long)lastRid;
- (unsigned long long)firstRid;
- (BOOL)isSet:(unsigned long long)arg1;
- (void)clearRange:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (BOOL)clearRid:(unsigned long long)arg1;
- (BOOL)setRid:(unsigned long long)arg1;
- (unsigned long long)_findOffset:(unsigned long long)arg1 fromLow:(unsigned long long)arg2 toHigh:(unsigned long long)arg3;
- (unsigned long long)_findOffset:(unsigned long long)arg1;
- (BOOL)isEmpty;
- (void)empty;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)encodeAsData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)ridArrays;
- (void)verifyRidList;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)init;

@end

