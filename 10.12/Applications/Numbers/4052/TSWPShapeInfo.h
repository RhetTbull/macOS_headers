//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDShapeInfo.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDContainerInfo-Protocol.h"
#import "TSDKeyValueProxyVending-Protocol.h"
#import "TSDSelectionStatisticsContributor-Protocol.h"
#import "TSWPStorageParent-Protocol.h"

@class NSObject, NSString, TSDInfoGeometry, TSPObject, TSWPColumns, TSWPPadding, TSWPShapeStyle, TSWPStorage;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSWPShapeInfo : TSDShapeInfo <GSSPAutoEncodable, TSDKeyValueProxyVending, TSDContainerInfo, TSWPStorageParent, TSDSelectionStatisticsContributor>
{
    TSWPStorage *_containedStorage;
}

+ (void)setDefaultInstructionalText:(id)arg1;
@property(retain, nonatomic) TSWPStorage *containedStorage; // @synthesize containedStorage=_containedStorage;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3;
- (unsigned long long)p_chunkCountForByBulletGroup;
- (unsigned long long)p_chunkCountForByBullet;
- (BOOL)p_hasListLabelOrContentForParagraphIndex:(unsigned long long)arg1;
- (BOOL)p_hasContentForRange:(struct _NSRange)arg1;
- (BOOL)autoListTermination;
- (BOOL)autoListRecognition;
- (id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2 tailLineEndInfo:(int)arg3;
- (id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2;
- (id)commandForSettingBoxedValue:(id)arg1 forProperty:(int)arg2;
- (id)stylesForCopyStyle;
- (id)styleIdentifierTemplateForNewPreset;
- (id)propertyMapForNewPreset;
- (struct CGPoint)transformableObjectAnchorPoint;
- (id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2;
- (id)infoForSelectionPath:(id)arg1;
- (id)childInfos;
- (id)copyWithContext:(id)arg1;
- (Class)repClass;
- (Class)layoutClass;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)fixPositionOfImportedAutosizedShape;
- (struct CGPoint)autosizePositionOffset;
- (struct CGAffineTransform)autosizedTransformForInfoGeometry:(id)arg1 size:(struct CGSize)arg2;
- (struct CGPoint)autosizePositionOffsetForGeometry:(id)arg1 size:(struct CGSize)arg2;
- (double)pOffsetForVerticalAlignment:(struct CGSize)arg1;
- (double)pOffsetForParagraphAlignment:(struct CGSize)arg1;
@property(readonly, nonatomic) NSString *instructionalText;
@property(readonly, nonatomic) BOOL isTextBox;
@property(readonly, nonatomic) BOOL displaysInstructionalText;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)presetKind;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 wpStorage:(id)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;
- (void)dealloc;
- (Class)styleClass;
- (Class)editorClass;
- (Class)drawableSelectionTransformerClass;
@property(nonatomic) long long contentWritingDirection;
@property(readonly, nonatomic) TSWPShapeStyle *tswpShapeStyle;
@property(retain, nonatomic) TSWPPadding *padding;
@property(retain, nonatomic) TSWPColumns *columns;
@property(readonly, nonatomic) int columnDirection;
@property(nonatomic) int verticalAlignment;
@property(nonatomic) BOOL textIsVertical;
@property(nonatomic) BOOL shrinkTextToFit;
- (BOOL)supportsShrinkTextToFit;
- (BOOL)supportsTextInset;
- (void)importAutoSizeVertical:(BOOL)arg1 horizontal:(BOOL)arg2;
- (void)p_upgradePathForArrows;
- (id)initWithContext:(id)arg1 stylesheet:(id)arg2 qdShape:(id)arg3 state:(id)arg4;
- (void)saveToArchive:(struct ShapeInfoArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct ShapeInfoArchive *)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (BOOL)isLineStyle;
- (void)populateGSSPShapeInfo:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)newProxyWithEditor:(id)arg1 documentRoot:(id)arg2;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText; // @dynamic anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText; // @dynamic floatingAboveText;
@property(copy, nonatomic) TSDInfoGeometry *geometry; // @dynamic geometry;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText; // @dynamic inlineWithText;
@property(nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @dynamic parentInfo;
@property(readonly) Class superclass;

@end

