//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

@class TSCECalculationEngine, TSCEFormulaRewriteSpec, TSCERewriteTableIDInfo;

@interface TSCEExtendTableIDHistoryCommand : TSKCommand
{
    TSCEFormulaRewriteSpec *_rewriteSpec;
    TSCERewriteTableIDInfo *_tableIDHistoryRollback;
}

@property(retain, nonatomic) TSCERewriteTableIDInfo *tableIDHistoryRollback; // @synthesize tableIDHistoryRollback=_tableIDHistoryRollback;
@property(retain, nonatomic) TSCEFormulaRewriteSpec *rewriteSpec; // @synthesize rewriteSpec=_rewriteSpec;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)process;
@property(readonly, nonatomic) TSCECalculationEngine *calcEngine;
- (void)dealloc;
- (id)initWithContext:(id)arg1 rewriteSpec:(id)arg2;

@end

