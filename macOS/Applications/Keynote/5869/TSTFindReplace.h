//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSTFindReplace : NSObject
{
}

+ (id)commandForReplacingAllWithSearchReplaceProvider:(id)arg1 inTableInfo:(id)arg2;
+ (id)makeCellDiffToReplaceCellStringSearchResult:(id)arg1 usingSearchReplaceProvider:(id)arg2;
+ (void)_enumerateReplaceableRangesFromSearchResult:(id)arg1 withOptions:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)searchLayout:(id)arg1 forAnnotationsWithHitBlock:(CDUnknownBlockType)arg2;
+ (void)searchInfo:(id)arg1 includingHiddenCells:(BOOL)arg2 forAnnotationsWithHitBlock:(CDUnknownBlockType)arg3;
+ (void)p_searchInfo:(id)arg1 layout:(id)arg2 includingHiddenCells:(BOOL)arg3 forAnnotationsWithHitBlock:(CDUnknownBlockType)arg4;
+ (void)searchLayout:(id)arg1 forSpellingErrorsWithHitBlock:(CDUnknownBlockType)arg2 stop:(char *)arg3;
+ (void)searchLayout:(id)arg1 forString:(id)arg2 options:(unsigned long long)arg3 hitBlock:(CDUnknownBlockType)arg4;
+ (void)searchInfo:(id)arg1 forString:(id)arg2 options:(unsigned long long)arg3 hitBlock:(CDUnknownBlockType)arg4;
+ (void)searchInfo:(id)arg1 forRangesContainingString:(id)arg2 options:(unsigned long long)arg3 hitBlock:(CDUnknownBlockType)arg4;
+ (id)p_searchStringForString:(id)arg1 options:(unsigned long long)arg2 outStringCompareOptions:(unsigned long long *)arg3;
+ (id)p_regexSpecialCharacters;

@end

