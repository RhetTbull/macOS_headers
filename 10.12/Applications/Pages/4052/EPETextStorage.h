//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EPESDocument, EPETextStorageScanner, TSUPointerKeyDictionary, TSWPFilteredStorage, TSWPStorage;

@interface EPETextStorage : NSObject
{
    EPESDocument *_documentState;
    TSWPStorage *_storage;
    TSWPFilteredStorage *_filteredStorage;
    EPETextStorageScanner *_scanner;
    struct TSWPParagraphEnumerator _paragraphEnumerator;
    TSUPointerKeyDictionary *_listStateMap;
}

@property(readonly, nonatomic) EPETextStorageScanner *scanner; // @synthesize scanner=_scanner;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isProcessingMainBodyStorage;
- (id)updatedListState:(const struct TSWPParagraphEnumerator *)arg1;
- (void)processCurrentParagraph;
- (id)stateForListStyle:(id)arg1;
- (BOOL)isRangeDeleted:(struct _NSRange)arg1;
- (id)substringWithRange:(struct _NSRange)arg1;
- (struct _NSRange)filteredRangeForRange:(struct _NSRange)arg1;
- (id)storage;
- (id)documentState;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 documentState:(id)arg2;
- (id)init;

@end

