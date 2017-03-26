//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OCXReadState.h"

@class CXNamespace, NSMutableArray, OAXDrawingState, OCPPackagePart, TSUNoCopyDictionary, WDCharacterRun, WDDocument, WXOAVReadState;
@protocol TCCancelDelegate;

@interface WXReadState : OCXReadState
{
    WDDocument *mDocument;
    TSUNoCopyDictionary *mTextNodesToBeAdded;
    TSUNoCopyDictionary *mMapBookmarkIdToName;
    TSUNoCopyDictionary *mMapAnnotationIdToAnnotation;
    TSUNoCopyDictionary *mMapTextBoxIdToDrawableId;
    TSUNoCopyDictionary *mMapDrawableIdToTextBox;
    OCPPackagePart *mPackagePart;
    OCPPackagePart *mAnnotationPart;
    struct _xmlDoc *mFootnoteDocument;
    struct _xmlNode *mFootnotes;
    struct _xmlDoc *mEndnoteDocument;
    struct _xmlNode *mEndnotes;
    struct _xmlDoc *mAnnotationDocument;
    struct _xmlNode *mAnnotations;
    NSMutableArray *mDeleteAuthorStack;
    NSMutableArray *mDeleteDateStack;
    NSMutableArray *mEditAuthorStack;
    NSMutableArray *mEditDateStack;
    NSMutableArray *mFormatAuthorStack;
    NSMutableArray *mFormatDateStack;
    NSMutableArray *mPendingCommentNodes;
    WXOAVReadState *mWXOavState;
    OAXDrawingState *mDrawingState;
    int mCurrentOfficeArtTextType;
    WDCharacterRun *mReadSymbolTo;
    BOOL mNewSectionRequested;
    unsigned long long mCurrentRowCNFStyle;
    unsigned long long mCurrentCellCNFStyle;
    BOOL mCurrentTableWraps;
    id <TCCancelDelegate> mCancelDelegate;
    CXNamespace *mWXMainNamespace;
    CXNamespace *mWXDrawingNamespace;
    CXNamespace *mWXShapeNamespace;
    CXNamespace *mWXGroupNamespace;
    CXNamespace *mWXMathNamespace;
    CXNamespace *mWXOOBibliographyNamespace;
    CXNamespace *mWXRelationshipNamespace;
}

@property(retain, nonatomic) id <TCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancelDelegate;
@property(nonatomic) int currentOfficeArtTextType; // @synthesize currentOfficeArtTextType=mCurrentOfficeArtTextType;
@property(retain, nonatomic) CXNamespace *WXRelationshipNamespace; // @synthesize WXRelationshipNamespace=mWXRelationshipNamespace;
@property(retain, nonatomic) CXNamespace *WXOOBibliographyNamespace; // @synthesize WXOOBibliographyNamespace=mWXOOBibliographyNamespace;
@property(retain, nonatomic) CXNamespace *WXMathNamespace; // @synthesize WXMathNamespace=mWXMathNamespace;
@property(retain, nonatomic) CXNamespace *WXGroupNamespace; // @synthesize WXGroupNamespace=mWXGroupNamespace;
@property(retain, nonatomic) CXNamespace *WXShapeNamespace; // @synthesize WXShapeNamespace=mWXShapeNamespace;
@property(retain, nonatomic) CXNamespace *WXDrawingNamespace; // @synthesize WXDrawingNamespace=mWXDrawingNamespace;
@property(retain, nonatomic) CXNamespace *WXMainNamespace; // @synthesize WXMainNamespace=mWXMainNamespace;
- (void)setupNSForXMLFormat:(int)arg1;
- (BOOL)currentTableWraps;
- (void)setCurrentTableWraps:(BOOL)arg1;
- (void)setCurrentCellCNFStyle:(unsigned long long)arg1;
- (unsigned long long)currentCellCNFStyle;
- (void)setCurrentRowCNFStyle:(unsigned long long)arg1;
- (unsigned long long)currentRowCNFStyle;
- (void)setNewSectionRequested:(BOOL)arg1;
- (BOOL)isNewSectionRequested;
- (void)setReadSymbolTo:(id)arg1;
- (id)readSymbolTo;
- (id)drawingState;
- (void)clearPendingComments;
- (id)pendingComments;
- (void)addPendingComment:(struct _xmlNode *)arg1;
- (id)currentFormatDate;
- (id)currentFormatAuthor;
- (void)popFormatAuthorDate;
- (void)pushFormatAuthor:(id)arg1 date:(id)arg2;
- (id)currentEditDate;
- (id)currentEditAuthor;
- (void)popEditAuthorDate;
- (void)pushEditAuthor:(id)arg1 date:(id)arg2;
- (id)currentDeleteDate;
- (id)currentDeleteAuthor;
- (void)popDeleteAuthorDate;
- (void)pushDeleteAuthor:(id)arg1 date:(id)arg2;
- (id)wxoavState;
- (void)setDocumentPart:(id)arg1;
- (void)setAnnotationPart:(id)arg1;
- (id)annotationPart;
- (void)setPackagePart:(id)arg1;
- (id)packagePart;
- (struct _xmlNode *)xmlAnnotationWithID:(long long)arg1;
- (struct _xmlNode *)xmlEndnoteWithID:(long long)arg1;
- (struct _xmlNode *)xmlFootnoteWithID:(long long)arg1;
- (id)textBoxWithDrawableID:(long long)arg1;
- (id)textBoxWithTextBoxID:(long long)arg1;
- (void)addTextBoxID:(long long)arg1 drawableId:(long long)arg2 textBox:(id)arg3;
- (_Bool)hasAnnotations;
- (id)annotationWithID:(long long)arg1;
- (void)addAnnotationID:(long long)arg1 annotation:(id)arg2;
- (id)bookmarkName:(long long)arg1;
- (void)addBookmarkId:(long long)arg1 name:(id)arg2;
- (void)clearOutNodesToBeAdded:(id)arg1;
- (id)nodesToBeAdded:(id)arg1;
- (void)addText:(id)arg1 node:(struct _xmlNode *)arg2;
- (void)setDocument:(id)arg1;
- (id)document;
- (void)dealloc;
- (id)initNoStacksWith:(id)arg1;
- (id)init;

@end

