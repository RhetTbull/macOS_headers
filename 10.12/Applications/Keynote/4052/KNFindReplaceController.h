//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSAFindReplaceController.h"

@interface KNFindReplaceController : TSAFindReplaceController
{
}

+ (BOOL)searchReference:(id)arg1 isAfterSearchReference:(id)arg2 inDirection:(unsigned long long)arg3;
+ (BOOL)searchReference:(id)arg1 isBeforeSearchReference:(id)arg2 inDirection:(unsigned long long)arg3;
+ (BOOL)compareNoteSearchReference:(id)arg1 toNoteSearchReference:(id)arg2 inDirection:(unsigned long long)arg3 before:(BOOL)arg4;
+ (BOOL)canCompareNoteSearchReference:(id)arg1 toNoteSearchReference:(id)arg2;
- (void)locateSearchReference:(id)arg1;
- (void)didReplaceAllOccurrencesOfString;
- (void)replaceWithString:(id)arg1 findAgain:(BOOL)arg2;
- (void)findNextResultInDirection:(unsigned long long)arg1;
- (id)activeTextEditor;
- (void)pulseSearchResult:(id)arg1 autohiding:(BOOL)arg2;
- (void)disableSearchHighlights;
- (void)p_disableHighlightsOnVisibleResults;
- (void)enableSearchHighlightsIfNecessary;
- (void)updateHighlights;
- (id)interactiveCanvasControllerForModel:(id)arg1;
- (void)sortLayoutSearchResultsArray:(id)arg1;

@end

