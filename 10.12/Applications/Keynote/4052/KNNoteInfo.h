//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDContainerInfo-Protocol.h"
#import "TSKDocumentObject-Protocol.h"
#import "TSKTransformableObject-Protocol.h"
#import "TSWPStorageParent-Protocol.h"

@class NSObject, NSString, TSDInfoGeometry, TSWPStorage;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface KNNoteInfo : TSPObject <GSSPAutoEncodable, TSDContainerInfo, TSWPStorageParent, TSKDocumentObject, TSKTransformableObject>
{
    NSObject<TSDContainerInfo> *mParentInfo;
    TSWPStorage *mContainedStorage;
    struct CGRect mFrameForPrinting;
    BOOL mShrinkTextForPrinting;
}

+ (BOOL)needsObjectUUID;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @synthesize parentInfo=mParentInfo;
@property(retain, nonatomic) TSWPStorage *containedStorage; // @synthesize containedStorage=mContainedStorage;
@property(nonatomic) BOOL shrinkTextForPrinting; // @synthesize shrinkTextForPrinting=mShrinkTextForPrinting;
@property(nonatomic) struct CGRect frameForPrinting; // @synthesize frameForPrinting=mFrameForPrinting;
- (id)objectUUIDPath;
- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;
@property(readonly, nonatomic) int verticalAlignment;
@property(readonly, nonatomic) long long contentWritingDirection;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
- (BOOL)shouldHideEmptyBullets;
- (BOOL)textIsVertical;
- (BOOL)autoListTermination;
- (BOOL)autoListRecognition;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (id)childEnumerator;
- (id)infoForSelectionPath:(id)arg1;
- (id)childInfos;
- (BOOL)isThemeContent;
- (BOOL)isSelectable;
- (Class)repClass;
- (Class)layoutClass;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (void)setPrimitiveGeometry:(id)arg1;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 containedStorage:(id)arg2;
- (void)saveToArchive:(struct NoteArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct NoteArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)populateGSSPNoteInfo:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property(readonly) Class superclass;

@end

