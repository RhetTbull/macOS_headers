//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSKSearchReference-Protocol.h"

@class NSArray, NSDictionary, NSString, TSDDrawableInfo, TSKDocumentRoot, TSKSelectionPath;
@protocol TSKAnnotation;

@interface TSDCanvasSearchReference : NSObject <TSKSearchReference>
{
    TSDDrawableInfo *mDrawableInfo;
    TSKDocumentRoot *mDocumentRoot;
    TSKSelectionPath *mSelectionPath;
    NSArray *mFindHighlights;
    BOOL mAutohideHighlight;
    BOOL mPulseHighlight;
    struct CGPoint mSearchReferencePoint;
    id <TSKAnnotation> mAnnotation;
    long long mRootIndex;
    struct CGPoint mConnectionLineUnscaledPoint;
}

+ (id)searchReferenceWithDrawableInfo:(id)arg1 selectionPath:(id)arg2;
+ (id)searchReferenceWithDrawableInfo:(id)arg1 searchCanvasDelegate:(id)arg2;
@property(nonatomic) long long rootIndex; // @synthesize rootIndex=mRootIndex;
@property(retain, nonatomic) id <TSKAnnotation> annotation; // @synthesize annotation=mAnnotation;
@property(nonatomic) struct CGPoint connectionLineUnscaledPoint; // @synthesize connectionLineUnscaledPoint=mConnectionLineUnscaledPoint;
@property(nonatomic) struct CGPoint searchReferencePoint; // @synthesize searchReferencePoint=mSearchReferencePoint;
@property(nonatomic) BOOL pulseHighlight; // @synthesize pulseHighlight=mPulseHighlight;
@property(nonatomic) BOOL autohideHighlight; // @synthesize autohideHighlight=mAutohideHighlight;
@property(retain, nonatomic) NSArray *findHighlights; // @synthesize findHighlights=mFindHighlights;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)searchReferenceEnd;
- (id)searchReferenceStart;
- (id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)isReplaceable;
- (BOOL)isSelectable;
- (id)selectionPath;
- (id)infoForSelectionPath;
- (id)model;
- (id)drawableInfo;
- (id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2;
@property(readonly, copy) NSString *description;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithDrawableInfo:(id)arg1 selectionPath:(id)arg2;
- (id)initWithDrawableInfo:(id)arg1 searchCanvasDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) NSString *erroneousText;
@property(retain, nonatomic) NSDictionary *grammarDetail;
@property(readonly) Class superclass;

@end

