//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSPCopying-Protocol.h"

@class NSArray;

@interface TSTTableFilterSet : TSPObject <GSSPAutoEncodable, TSPCopying>
{
    int mType;
    BOOL mIsEnabled;
    NSArray *mRules;
    BOOL mNeedsFormulaRewriteForImport;
    vector_88016b54 mFilterOffsets;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchive:(struct FilterSetArchive *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct FilterSetArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)setNeedsFormulaRewriteForImport:(BOOL)arg1;
- (BOOL)needsFormulaRewriteForImport;
- (id)columnIndicesForRulesInTable:(id)arg1;
@property(nonatomic) BOOL isEnabled;
- (id)absoluteRuleIndicesForColumn:(unsigned char)arg1 inTable:(id)arg2;
- (unsigned long long)numberOfRulesInFilter:(unsigned long long)arg1;
- (unsigned long long)ruleIndexInFilter:(unsigned long long)arg1 matchingCell:(id)arg2;
- (unsigned long long)firstFilterIndexForColumn:(unsigned char)arg1 inTable:(id)arg2;
- (id)filterIndicesForColumn:(unsigned char)arg1 inTable:(id)arg2;
- (void)enumerateRulesInFilterIndex:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateFiltersForColumn:(unsigned char)arg1 withTable:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateFilterIndicesInTable:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateFiltersInTable:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)replaceRule:(id)arg1 atRuleIndex:(unsigned long long)arg2 inFilter:(unsigned long long)arg3;
- (void)addRules:(id)arg1 inFilter:(unsigned long long)arg2;
- (void)p_addRules:(id)arg1 atRuleIndices:(id)arg2 inFilter:(unsigned long long)arg3 isNew:(BOOL)arg4;
- (void)removeRulesForColumnIndices:(id)arg1 withTableModel:(id)arg2;
- (void)removeRulesWithIndices:(id)arg1 inFilter:(unsigned long long)arg2;
- (id)removeRulesWithAbsoluteIndices:(id)arg1;
@property(readonly, nonatomic) unsigned long long filterCount;
@property(readonly, nonatomic) unsigned long long newFilterIndex;
@property(nonatomic) int filterSetType;
@property(readonly, nonatomic) BOOL canAddRules;
@property(readonly, nonatomic) unsigned long long ruleCount;
- (id)filterAtIndex:(unsigned long long)arg1 inTable:(id)arg2;
- (id)ruleInFilter:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (id)ruleAtAbsoluteIndex:(unsigned long long)arg1;
- (BOOL)rowIsShown:(unsigned short)arg1 withHiddenStateFormulaOwner:(id)arg2 withCalculationEngine:(id)arg3;
- (BOOL)p_thresholdComparisonMatchesFilter:(long long)arg1 withPredicateType:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)containsFilterRulesInUIDForm;
- (id)copyByRewritingFilterRulesToGeometricFormWithContext:(id)arg1 withTableModel:(id)arg2;
- (id)copyByRewritingFilterRulesToUidFormWithContext:(id)arg1 withTableModel:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithFilterRules:(id)arg1 type:(int)arg2 context:(id)arg3;
- (void)populateGSSPTableFilterSet:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

