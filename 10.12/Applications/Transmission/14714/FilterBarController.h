//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class FilterButton, NSPopUpButton, NSSearchField;

@interface FilterBarController : NSViewController
{
    FilterButton *fNoFilterButton;
    FilterButton *fActiveFilterButton;
    FilterButton *fDownloadFilterButton;
    FilterButton *fSeedFilterButton;
    FilterButton *fPauseFilterButton;
    NSSearchField *fSearchField;
    NSPopUpButton *fGroupsButton;
}

- (BOOL)validateMenuItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)setCountAll:(unsigned long long)arg1 active:(unsigned long long)arg2 downloading:(unsigned long long)arg3 seeding:(unsigned long long)arg4 paused:(unsigned long long)arg5;
- (id)searchStrings;
- (void)reset:(BOOL)arg1;
- (void)setGroupFilter:(id)arg1;
- (void)setSearchType:(id)arg1;
- (void)focusSearchField;
- (void)setSearchText:(id)arg1;
- (void)switchFilter:(BOOL)arg1;
- (void)setFilter:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;
- (void)updateGroups:(id)arg1;
- (void)updateGroupsButton;
- (void)resizeBar;

@end

