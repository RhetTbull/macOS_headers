//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSSearchFieldDelegate-Protocol.h"
#import "NSSplitViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"
#import "ProfileTableMenuHandler-Protocol.h"
#import "ProfileTagsViewDelegate-Protocol.h"

@class NSMutableDictionary, NSScrollView, NSSet, NSSplitView, NSString, NSTableColumn, ProfileModelWrapper, ProfileTableView, ProfileTagsView, iTermSearchField;
@protocol ProfileListViewDelegate;

@interface ProfileListView : NSView <NSSearchFieldDelegate, ProfileTagsViewDelegate, NSSplitViewDelegate, NSTextFieldDelegate, NSTableViewDataSource, NSTableViewDelegate, ProfileTableMenuHandler>
{
    BOOL tagsViewIsCollapsed_;
    NSScrollView *scrollView_;
    iTermSearchField *searchField_;
    ProfileTableView *tableView_;
    NSTableColumn *tableColumn_;
    NSTableColumn *commandColumn_;
    NSTableColumn *shortcutColumn_;
    NSTableColumn *tagsColumn_;
    id <ProfileListViewDelegate> delegate_;
    NSSet *selectedGuids_;
    BOOL debug;
    ProfileModelWrapper *dataSource_;
    int margin_;
    ProfileTagsView *tagsView_;
    NSSplitView *splitView_;
    double lastTagsWidth_;
    NSMutableDictionary *_savedHeights;
    id <ProfileListViewDelegate> _delegate;
}

@property(nonatomic) id <ProfileListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)profileTagsViewSelectionDidChange:(id)arg1;
@property(readonly, nonatomic) BOOL tagsVisible;
- (void)setTagsOpen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)toggleTags;
- (void)disableArrowHandler;
- (void)setFont:(id)arg1;
- (id)tableView;
- (void)turnOnDebug;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)eraseQuery;
- (void)onDoubleClick:(id)arg1;
- (void)dataChangeNotification:(id)arg1;
- (void)multiColumns;
- (void)updateResultsForSearch;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
@property(readonly, nonatomic) NSSet *selectedGuids;
- (id)orderedSelectedGuids;
@property(readonly, nonatomic) NSString *selectedGuid;
- (void)deselectAll;
- (void)allowMultipleSelections;
- (void)allowEmptySelection;
- (void)clearSearchField;
@property(readonly, nonatomic) long long numberOfRows;
- (void)selectRowByGuid:(id)arg1;
- (void)selectRowIndex:(int)arg1;
- (void)reloadData;
@property(readonly, nonatomic) long long selectedRow;
- (void)tableViewSelectionDidChange:(id)arg1;
@property(readonly, nonatomic) BOOL hasSelection;
- (void)setHasSelection:(BOOL)arg1;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (BOOL)selectionShouldChangeInTableView:(id)arg1;
- (void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)attributedStringForString:(id)arg1 selected:(BOOL)arg2;
- (id)attributedStringForName:(id)arg1 tags:(id)arg2 selected:(BOOL)arg3 isDefault:(BOOL)arg4 filter:(id)arg5;
- (id)tagFont;
- (id)mainFont;
- (double)extraHeight;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)setRowOrder:(id)arg1;
- (id)rowOrder;
- (id)rowOrderWithSortDescriptors:(id)arg1;
- (id)orderedGuids;
- (id)menuForEvent:(id)arg1;
- (void)unlockSelection;
- (void)selectLockedSelection;
- (void)lockSelection;
- (id)dataSource;
- (void)setUnderlyingDatasource:(id)arg1;
- (void)openHowToSearchHelp:(id)arg1;
- (void)_addTags:(id)arg1 toSearchField:(id)arg2;
- (void)_addTag:(id)arg1;
- (void)syncTableViewsWithSelectedGuids:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)searchFieldHasText;
- (void)focusSearchField;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 model:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

