//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "JAListView.h"

#import "JAListViewDataSource-Protocol.h"

@class NSString;
@protocol JASectionedListViewDataSource;

@interface JASectionedListView : JAListView <JAListViewDataSource>
{
    id <JASectionedListViewDataSource> sectionDataSource;
}

@property(nonatomic) id <JASectionedListViewDataSource> sectionDataSource; // @synthesize sectionDataSource;
- (unsigned long long)numberOfTotalViews;
- (unsigned long long)numberOfViewsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)viewAtIndexPath:(id)arg1;
- (id)viewInSection:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)isViewSectionHeaderView:(id)arg1;
- (id)indexPathForView:(id)arg1;
- (unsigned long long)absoluteIndexFromIndexPath:(id)arg1;
- (unsigned long long)absoluteIndexFromSection:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (id)indexPathFromAbsoluteIndex:(unsigned long long)arg1;
- (void)getSection:(unsigned long long *)arg1 andIndex:(unsigned long long *)arg2 fromAbsoluteIndex:(unsigned long long)arg3;
- (id)listView:(id)arg1 viewAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInListView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setup;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

