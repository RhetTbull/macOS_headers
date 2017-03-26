//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EPEChapterDividerInfo, NSMutableArray, NSString, TPDocumentRoot, TSSStyle, TSURetainedPointerSet, TSWPStorage;

@interface EPEChapterDivider : NSObject
{
    TPDocumentRoot *mDocumentRoot;
    TSWPStorage *mStorage;
    unsigned long long mContentStartCharIndex;
    unsigned long long mTotalLength;
    unsigned long long mParagraphTableAttributesCount;
    unsigned long long mSectionTableAttributeCount;
    EPEChapterDividerInfo *mCurrentChapter;
    unsigned long long mChapterNumberCharIndex;
    NSString *mChapterNumber;
    NSMutableArray *mDividers;
    TSSStyle *mChapterDividingStyle;
    TSURetainedPointerSet *mSubheadingStyles;
    TSURetainedPointerSet *mTOCStyles;
}

+ (id)pIsStyle:(id)arg1 childOfAnyStyleIn:(id)arg2;
+ (id)determineChapterDividers:(id)arg1;
- (void)pDividersForEmptyDocument;
- (void)pDividersUsingSections;
- (void)pDividersUsingTOCDefinition;
- (id)pGenerateListOfSubheadingStylesAndGetChapterDividingStyle:(id *)arg1 andChapterNumberStyle:(id *)arg2 andParIdx:(unsigned long long *)arg3 andTOCStyles:(id *)arg4;
- (id)pUsedTOCStylesInTOCs:(id)arg1 stylesInUse:(id)arg2;
- (void)pHandleChapterDividerAtSecIndex:(unsigned long long)arg1 sectionNumber:(unsigned long long)arg2;
- (id)pSectionNameWithNumber:(unsigned long long)arg1;
- (BOOL)pHandleChapterDividerAtParIndex:(unsigned long long)arg1;
- (void)pInvalidateChapterNumber;
- (void)pHandleChapterNumberAtParIndex:(unsigned long long)arg1;
- (void)pCloseChapterAtCharIndex:(unsigned long long)arg1;
- (void)pCloseLastChapter;
- (void)pAddChapterDividerInfo:(id)arg1;
- (id)pFilteredStringForRange:(struct _NSRange)arg1;
- (id)pStringForRange:(struct _NSRange)arg1;
- (id)pStringStrippedOfLeadingAndTrailingLineBreaks:(id)arg1;
- (id)tocStyles;
- (id)subheadingStyles;
- (id)chapterDividers;
- (void)dealloc;
- (id)initWithPagesDocumentRoot:(id)arg1 contentStartCharIndex:(unsigned long long)arg2;

@end

