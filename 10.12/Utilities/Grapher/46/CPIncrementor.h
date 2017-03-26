//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CPInspector.h"

@class NSMutableArray, NSTableView;

@interface CPIncrementor : CPInspector
{
    NSTableView *mTableView;
    NSMutableArray *mEquations;
    NSMutableArray *mDefinitions;
    NSMutableArray *mVariables;
    id mMinus10;
    id mMinus1;
    id mMinus01;
    id mPlus01;
    id mPlus1;
    id mPlus10;
    id mExponent;
}

+ (id)sharedInspector;
- (void)incrementByTen:(id)arg1;
- (void)incrementByOne:(id)arg1;
- (void)incrementByOneTenth:(id)arg1;
- (void)decrementByOneTenth:(id)arg1;
- (void)decrementByOne:(id)arg1;
- (void)decrementByTen:(id)arg1;
- (void)incrementBy:(double)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (double)findHeightForColumn:(long long)arg1 row:(long long)arg2 withValue:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)updateDefinitions:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)needsUpdate:(id)arg1;
- (void)reset;
- (id)windowNibName;
- (id)title;

@end

