//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSCECalculationEngine, TSCEFormulaRewriteSpec, TSKCommand;

@protocol TSCEFormulaOwning <NSObject>
- (void)releaseForCalculationEngine:(TSCECalculationEngine *)arg1;
- (void)retainForCalculationEngine:(TSCECalculationEngine *)arg1;
- (TSKCommand *)endRewriteForCalculationEngine:(TSCECalculationEngine *)arg1 spec:(TSCEFormulaRewriteSpec *)arg2;
- (void)beginRewriteForCalculationEngine:(TSCECalculationEngine *)arg1 spec:(TSCEFormulaRewriteSpec *)arg2;
- (void)rewriteForCalculationEngine:(TSCECalculationEngine *)arg1 formulaID:(CDStruct_a91f2c80)arg2 rewriteSpec:(TSCEFormulaRewriteSpec *)arg3;
- (void)invalidateForCalculationEngine:(TSCECalculationEngine *)arg1;
- (void)writeResultsForCalculationEngine:(TSCECalculationEngine *)arg1;
- (CDStruct_2c3aca9f)recalculateForCalculationEngine:(TSCECalculationEngine *)arg1 formulaID:(CDStruct_a91f2c80)arg2 isInCycle:(BOOL)arg3 hasCalculatedPrecedents:(BOOL)arg4;
@end

