//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAMediaTypeBrowserViewController.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "TMAMediaBrowserDraggingDelegate-Protocol.h"
#import "TMAMediaBrowserLibraryViewControllerDelegate-Protocol.h"

@class NSArray, NSMapTable, NSMutableArray, NSOperationQueue, NSString, TMAAudioBrowserTableView, TMAMediaBrowserLibraryViewController, TSUMutablePointerSet;

@interface TMAAudioBrowserViewController : TMAMediaTypeBrowserViewController <NSTableViewDataSource, NSTableViewDelegate, TMAMediaBrowserDraggingDelegate, TMAMediaBrowserLibraryViewControllerDelegate>
{
    NSArray *_validMediaSourceIdentifiers;
    TMAMediaBrowserLibraryViewController *_libraryViewController;
    TMAAudioBrowserTableView *_tableView;
    NSMapTable *_mediaSources;
    NSMapTable *_mediaSourceCategories;
    NSMapTable *_rootMediaGroups;
    NSMapTable *_categoryMediaGroups;
    NSMutableArray *_contentViewMediaObjects;
    NSString *_searchQuery;
    unsigned long long _searchType;
    NSMutableArray *_searchQueryMediaObjects;
    NSOperationQueue *_searchOperationQueue;
    TSUMutablePointerSet *_groupsInFlight;
}

+ (id)tableColumnWithIdentifier:(id)arg1 label:(id)arg2 sortDescriptor:(id)arg3;
- (void)didEnterDraggingTarget;
- (unsigned long long)ratingSearchType;
- (id)displayNameForSearchType:(unsigned long long)arg1;
- (unsigned long long)searchTypesCount;
- (unsigned long long)searchResultsCount;
- (void)cancelSearchAndResetType:(BOOL)arg1;
- (void)searchUsingQueryString:(id)arg1 type:(unsigned long long)arg2;
- (struct CGSize)totalScrollerSize;
- (long long)scrollerStyle;
- (id)mediaBrowserLibraryLabelForItem:(id)arg1;
- (BOOL)mediaBrowserLibraryShouldSelectItem:(id)arg1;
@property(readonly, nonatomic) NSString *mediaBrowserLibraryEmptyViewSecondaryLabelString;
@property(readonly, nonatomic) NSString *mediaBrowserLibraryEmptyViewPrimaryLabelString;
@property(readonly, nonatomic) NSString *mediaBrowserLibraryEmptyViewImageName;
- (void)mediaBrowserLibraryDidSelectItem:(id)arg1;
- (id)mediaBrowserLibraryChildrenForItem:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)updateSearchQueryMediaObjectsForContentViewMode:(unsigned long long)arg1 usingQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)contentViewMediaObjects;
- (id)mediaObjectsForItem:(id)arg1;
- (id)categoriesForMediaSourceIdentifier:(id)arg1 create:(BOOL)arg2;
- (id)categoriesForMediaSourceIdentifier:(id)arg1;
- (BOOL)addMediaGroup:(id)arg1;
- (BOOL)shouldDisplayMediaGroup:(id)arg1 forCategory:(unsigned long long)arg2;
- (BOOL)mediaGroup:(id)arg1 belongsToCategory:(unsigned long long)arg2;
- (void)processMediaGroup:(id)arg1 fromKVO:(BOOL)arg2;
- (void)rootMediaGroupDidChange:(id)arg1 reload:(BOOL)arg2;
- (void)mediaSourcesDidChangeForceReload:(BOOL)arg1;
- (void)stopObservingInFlightMediaGroup:(id)arg1;
- (void)startObservingInFlightMediaGroup:(id)arg1;
- (void)stopObservingMediaGroup:(id)arg1;
- (void)startObservingMediaGroup:(id)arg1;
- (void)stopObservingMediaSource:(id)arg1;
- (void)startObservingMediaSource:(id)arg1;
- (void)stopObservingMediaLibrary:(id)arg1;
- (void)startObservingMediaLibrary:(id)arg1;
- (void)stopObservingSharedMediaLibrary:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadMediaLibraryAndUpdateSourcesIfNecessary:(id)arg1;
- (void)reloadData;
- (id)mediaUTI;
- (id)initialFirstResponder;
- (void)loadView;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

