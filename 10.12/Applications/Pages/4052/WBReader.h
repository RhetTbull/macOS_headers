//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OCBReader.h"

@class NSMutableArray, NSMutableDictionary, TSUNoCopyDictionary, WBOfficeArtReaderState, WDDocument;

@interface WBReader : OCBReader
{
    struct WrdNoteTable *mFootnoteTable;
    struct WrdNoteTable *mEndnoteTable;
    struct WrdAnnotationTable *mAnnotationTable;
    struct WrdCPTableHeaders *mTableHeaders;
    struct WrdBookmarkTable *mBookmarkTable;
    struct WrdBookmarkTable *mAnnotationBookmarkTable;
    struct WrdFieldPositionTable *mFieldPositionTables[8];
    struct WrdStoryTable *mStoryTable;
    struct WrdStoryTable *mHeaderStoryTable;
    struct WrdFileShapeAddressTable *mFileShapeAddressTable;
    struct WrdFileShapeAddressTable *mFileShapeAddressHeaderTable;
    struct WrdEshObjectFactory *mEshObjectFactory;
    struct WrdParagraphProperties *mLastRowParagraphProperties;
    NSMutableArray *mAnnotationOwners;
    TSUNoCopyDictionary *mIndexToStyles;
    TSUNoCopyDictionary *mIndexToFonts;
    WDDocument *mTargetDocument;
    WBOfficeArtReaderState *mOfficeArtState;
    struct vector<WBTextBoxReaderInfo, std::__1::allocator<WBTextBoxReaderInfo>> *mTextBoxes;
    BOOL mReportProgress;
    id mAnnotationRangeStart;
    NSMutableDictionary *mBookmarkIndexToAnnotationRangeStartMap;
}

@property(nonatomic) WDDocument *targetDocument; // @synthesize targetDocument=mTargetDocument;
- (struct WBTextBoxReaderInfo)textBoxInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)textBoxCount;
- (void)cacheTextBox:(id)arg1 withChainIndex:(unsigned short)arg2;
- (id)drawableForShapeId:(unsigned int)arg1;
- (void)setOfficeArtState:(id)arg1;
- (id)officeArtState;
- (void)setReportProgress:(BOOL)arg1;
- (BOOL)reportProgress;
- (void)addFont:(id)arg1 index:(int)arg2;
- (id)fontAtIndex:(int)arg1;
- (void)addStyle:(id)arg1 index:(int)arg2;
- (id)styleAtIndex:(int)arg1 expectedType:(int)arg2;
- (id)styleAtIndex:(int)arg1;
- (void)setLastRowParagraphProperties:(struct WrdParagraphProperties *)arg1;
- (struct WrdParagraphProperties *)lastRowParagraphProperties;
- (struct WrdEshObjectFactory *)eshObjectFactory;
- (struct WrdFileShapeAddressTable *)fileShapeAddressHeaderTable;
- (struct WrdFileShapeAddressTable *)fileShapeAddressTable;
- (struct WrdStoryTable *)headerStoryTable;
- (struct WrdStoryTable *)storyTable;
- (id)readCharactersFrom:(unsigned int)arg1 to:(unsigned int)arg2 textType:(int)arg3;
- (id)readCharactersForTextRun:(struct WrdTextRun *)arg1;
- (struct WrdFieldPositionTable *)fieldPositionTableForTextType:(int)arg1;
- (struct WrdBookmarkTable *)annotationBookmarkTable;
- (struct WrdBookmarkTable *)bookmarkTable;
- (struct WrdCPTableHeaders *)tableHeaders;
- (id)annotationOwner:(int)arg1;
- (struct WrdAnnotationTable *)annotationTable;
- (struct WrdNoteTable *)endnoteTable;
- (struct WrdNoteTable *)footnoteTable;
- (struct WrdBinaryReader *)wrdReader;
- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (struct OCCEncryptionInfoReader *)encryptionInfoReader;
- (id)read;
- (BOOL)start;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;
- (void)initialize;
- (void)setAnnotationRangeStart:(id)arg1 forBookmarkIndex:(unsigned long long)arg2;
- (id)annotationRangeStartForBookmarkIndex:(unsigned long long)arg1;
- (void)setAnnotationRangeStart:(id)arg1;
- (id)annotationRangeStart;

@end

