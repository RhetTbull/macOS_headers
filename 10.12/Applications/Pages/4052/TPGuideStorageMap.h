//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSMutableDictionary, TSUPointerKeyDictionary;

@interface TPGuideStorageMap : TSPObject <GSSPAutoEncodable>
{
    NSMutableDictionary *_pageIndexToStorageMap;
    TSUPointerKeyDictionary *_storageToPageIndexMap;
}

- (void)i_setGuideStorage:(id)arg1 forSectionPageIndex:(id)arg2;
- (id)i_sortedPageIndices;
- (void)p_setGuideStorage:(id)arg1 forSectionPageIndex:(id)arg2;
- (BOOL)containsGuideStorage:(id)arg1;
- (unsigned long long)sectionPageIndexForGuideStorage:(id)arg1;
- (id)guideStorageForSectionPageIndex:(unsigned long long)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)populateGSSPGuideStorageMap:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

@end

