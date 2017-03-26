//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSArray, NSArrayController, NSObject, NSSearchField, NSString, NSTableView, TSPObjectContext;
@protocol TPMacEndNoteWindowDelegate;

@interface TPEndNoteSearchWindowController : NSWindowController
{
    NSString *_searchText;
    BOOL _inBilbiographyOnly;
    BOOL _excludeAuthor;
    BOOL _excludeYear;
    NSArray *_searchResults;
    NSArrayController *_searchResultsController;
    NSSearchField *_searchField;
    TSPObjectContext *_context;
    NSObject<TPMacEndNoteWindowDelegate> *_delegate;
    NSString *_prefix;
    NSString *_suffix;
    NSString *_pageRange;
    NSTableView *_searchResultsTableView;
}

+ (id)keyPathsForValuesAffectingPreviewText;
+ (BOOL)isWindowControllerInUse;
+ (id)sharedInstance;
@property(nonatomic) NSTableView *searchResultsTableView; // @synthesize searchResultsTableView=_searchResultsTableView;
@property(copy, nonatomic) NSString *pageRange; // @synthesize pageRange=_pageRange;
@property(copy, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(nonatomic) BOOL excludeYear; // @synthesize excludeYear=_excludeYear;
@property(nonatomic) BOOL excludeAuthor; // @synthesize excludeAuthor=_excludeAuthor;
@property(nonatomic) BOOL inBilbiographyOnly; // @synthesize inBilbiographyOnly=_inBilbiographyOnly;
@property(nonatomic) NSObject<TPMacEndNoteWindowDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TSPObjectContext *context; // @synthesize context=_context;
@property(nonatomic) NSSearchField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) NSArrayController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
- (void)p_resetOptions;
- (id)p_selectedCitationRecords;
- (id)p_generatePreviewText;
- (void)p_invalidateKeys;
- (void)showWindow:(id)arg1;
@property(copy, nonatomic) NSString *searchText;
@property(readonly, nonatomic) NSString *previewText;
- (void)insertSelectedCitations:(id)arg1;
- (void)search:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadWindow;
- (void)dealloc;

@end

