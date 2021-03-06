//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "iTermSearchResultsMinimapViewDelegate.h"

@class FindContext, NSDictionary, NSMutableDictionary, NSMutableIndexSet, NSMutableOrderedSet, NSOrderedSet, NSString, NSView<iTermFindOnPageHelperDelegate>, SearchResult;

@interface iTermFindOnPageHelper : NSObject <iTermSearchResultsMinimapViewDelegate>
{
    FindContext *_copiedContext;
    CDStruct_dc106ac8 _findCursor;
    BOOL _findInProgress;
    NSString *_lastStringSearchedFor;
    NSMutableOrderedSet *_searchResults;
    int _numberOfProcessedSearchResults;
    BOOL _haveRevealedSearchResult;
    NSMutableDictionary *_highlightMap;
    BOOL _searchingForward;
    int _findOffset;
    BOOL _searchingForNextResult;
    unsigned long long _mode;
    struct {
        char valid;
        long long overflowAdjustment;
        long long count;
        long long index;
    } _cachedCounts;
    NSMutableIndexSet *_locations;
    BOOL _locationsHaveChanged;
    NSView<iTermFindOnPageHelperDelegate> *_delegate;
    SearchResult *_selectedResult;
}

@property(retain, nonatomic) SearchResult *selectedResult; // @synthesize selectedResult=_selectedResult;
@property(readonly, nonatomic) NSOrderedSet *searchResults; // @synthesize searchResults=_searchResults;
@property(readonly, nonatomic) FindContext *copiedContext; // @synthesize copiedContext=_copiedContext;
@property(readonly, nonatomic) NSDictionary *highlightMap; // @synthesize highlightMap=_highlightMap;
@property(nonatomic) NSView<iTermFindOnPageHelperDelegate> *delegate; // @synthesize delegate=_delegate;
- (struct _NSRange)searchResultsMinimapViewRangeOfVisibleLines:(id)arg1;
- (id)searchResultsMinimapViewLocations:(id)arg1;
- (void)updateCachedCounts;
- (void)updateCachedCountsIfNeeded;
- (void)overflowAdjustmentDidChange;
@property(readonly, nonatomic) long long numberOfSearchResults;
@property(readonly, nonatomic) long long currentIndex;
@property(readonly, nonatomic) CDStruct_dc106ac8 findCursorAbsCoord;
@property(readonly, nonatomic) BOOL haveFindCursor;
- (void)setStartPoint:(CDStruct_dc106ac8)arg1;
- (void)removeSearchResultsInRange:(struct _NSRange)arg1;
- (void)removeAllSearchResults;
- (struct _NSRange)rangeOfSearchResultsInRangeOfLines:(struct _NSRange)arg1;
- (long long)largestIndexOfSearchResultWithYGreaterThanOrEqualTo:(long long)arg1;
- (long long)smallestIndexOfLastSearchResultWithYLessThan:(long long)arg1;
- (void)removeHighlightsInRange:(struct _NSRange)arg1;
- (BOOL)selectNextResultForward:(BOOL)arg1 withOffset:(int)arg2 width:(int)arg3 numberOfLines:(int)arg4 overflowAdjustment:(long long)arg5;
- (void)addSearchResult:(id)arg1 width:(int)arg2;
- (BOOL)continueFind:(double *)arg1 context:(id)arg2 width:(int)arg3 numberOfLines:(int)arg4 overflowAdjustment:(long long)arg5;
- (void)resetFindCursor;
- (void)resetCopiedFindContext;
- (void)clearHighlights;
- (void)findString:(id)arg1 forwardDirection:(BOOL)arg2 mode:(unsigned long long)arg3 withOffset:(int)arg4 context:(id)arg5 numberOfLines:(int)arg6 totalScrollbackOverflow:(long long)arg7 scrollToFirstResult:(BOOL)arg8;
@property(readonly, nonatomic) BOOL findInProgress;
- (void)locationsDidChange;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

