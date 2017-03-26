//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXSmartAlbumQueryItemViewDelegate-Protocol.h"

@class NSButton, NSLayoutConstraint, NSMapTable, NSMutableArray, NSPopUpButton, NSScrollView, NSString, NSTabView, NSTextField, NSView, NSWindow, RDAlbum, RDDatabase, RDMultiItemQuery;

@interface IPXSmartAlbumEditViewController : IPXViewController <IPXSmartAlbumQueryItemViewDelegate>
{
    RDMultiItemQuery *_query;
    NSMutableArray *_subqueryViews;
    NSMutableArray *_constraintsAdded;
    long long _holdNotifications;
    RDAlbum *_smartAlbum;
    NSString *_smartAlbumName;
    NSString *_resultsCountString;
    long long _anyAllSelection;
    NSView *_queryTileView;
    NSTabView *_oneOrMoreTabView;
    NSPopUpButton *_matchAnyAllPopupButton;
    NSScrollView *_queryScrollView;
    NSWindow *_appWindow;
    NSWindow *_sheetWindow;
    NSMapTable *_queryItemTiles;
    NSLayoutConstraint *_queryBoxHeightConstraint;
    RDDatabase *_database;
    NSTextField *_smartAlbumNameField;
    NSTextField *_smartAlbumNameLabel;
    NSPopUpButton *_anyAllPopup;
    NSButton *_cancelButton;
    NSButton *_okButton;
}

+ (void)editSmartAlbum:(id)arg1 inWindow:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)createSmartAlbumWithDefaultName:(id)arg1 inWindow:(id)arg2 inFolder:(id)arg3 forDatabase:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property __weak NSButton *okButton; // @synthesize okButton=_okButton;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSPopUpButton *anyAllPopup; // @synthesize anyAllPopup=_anyAllPopup;
@property __weak NSTextField *smartAlbumNameLabel; // @synthesize smartAlbumNameLabel=_smartAlbumNameLabel;
@property __weak NSTextField *smartAlbumNameField; // @synthesize smartAlbumNameField=_smartAlbumNameField;
@property(retain) RDDatabase *database; // @synthesize database=_database;
@property __weak NSLayoutConstraint *queryBoxHeightConstraint; // @synthesize queryBoxHeightConstraint=_queryBoxHeightConstraint;
@property(retain) NSMapTable *queryItemTiles; // @synthesize queryItemTiles=_queryItemTiles;
@property(retain) NSWindow *sheetWindow; // @synthesize sheetWindow=_sheetWindow;
@property(retain) NSWindow *appWindow; // @synthesize appWindow=_appWindow;
@property __weak NSScrollView *queryScrollView; // @synthesize queryScrollView=_queryScrollView;
@property __weak NSPopUpButton *matchAnyAllPopupButton; // @synthesize matchAnyAllPopupButton=_matchAnyAllPopupButton;
@property __weak NSTabView *oneOrMoreTabView; // @synthesize oneOrMoreTabView=_oneOrMoreTabView;
@property __weak NSView *queryTileView; // @synthesize queryTileView=_queryTileView;
@property(nonatomic) long long anyAllSelection; // @synthesize anyAllSelection=_anyAllSelection;
@property(retain) NSString *resultsCountString; // @synthesize resultsCountString=_resultsCountString;
@property(retain) NSString *smartAlbumName; // @synthesize smartAlbumName=_smartAlbumName;
@property(retain) RDAlbum *smartAlbum; // @synthesize smartAlbum=_smartAlbum;
- (void).cxx_destruct;
- (void)addNewQueryItemAfter:(id)arg1;
- (void)removeQueryItem:(id)arg1;
- (void)queryItemView:(id)arg1 changedQuery:(id)arg2;
- (id)keyPath;
- (void)updateOneOrMoreTileView;
- (void)updateMainQuery;
- (void)addQueryOfType:(long long)arg1;
- (void)addQuery:(id)arg1;
- (void)addQueryController:(id)arg1;
- (void)_addViews:(id)arg1 toContainer:(id)arg2;
- (void)cancelButtonPressed:(id)arg1;
- (void)okButtonPressed:(id)arg1;
- (void)updateTabSequence;
- (void)updateResultsCount;
- (void)resumeNotifications;
- (void)holdNotifications;
- (void)observeChangeToObject:(id)arg1 forKeyPath:(id)arg2;
@property(retain) RDMultiItemQuery *query; // @synthesize query=_query;
- (id)flattenQuery:(id)arg1;
- (void)flattenQueries:(id)arg1 intoQuery:(id)arg2;
- (void)populateQueryPanel;
- (void)validateQuery;
- (void)awakeFromNib;
- (void)showSheetForWindow:(id)arg1 forQuery:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

