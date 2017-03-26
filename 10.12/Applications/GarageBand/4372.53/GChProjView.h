//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GChFilteredListView.h"

@class NSMutableArray;

@interface GChProjView : GChFilteredListView
{
    NSMutableArray *m_projChords;
    NSMutableArray *m_projVisible;
    NSMutableArray *m_projTunings;
    long long tuningIndexToFilter;
}

- (void)setFromChordList:(id)arg1;
- (void)filterCurrentChords;
- (void)proj_filterVisibleChords:(id)arg1 fromAllChords:(id)arg2;
- (void)setTuningIndexToFilter:(long long)arg1;
- (void)drawChordAtIndex:(unsigned long long)arg1 rect:(struct CGRect)arg2 partRect:(struct CGRect)arg3;
- (unsigned long long)numberOfListChords;
- (void)setSelectedChordTo:(id)arg1;
- (id)selectedProjChord;
- (id)projTunings;
- (id)projVisible;
- (id)projChords;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

