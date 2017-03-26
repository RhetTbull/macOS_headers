//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPTextualAttachment.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSString, TSWPStorage;

@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment <GSSPAutoEncodable>
{
    TSWPStorage *_containedStorage;
    NSString *_customMarkString;
}

@property(retain, nonatomic) TSWPStorage *containedStorage; // @synthesize containedStorage=_containedStorage;
@property(retain, nonatomic) NSString *customMarkString; // @synthesize customMarkString=_customMarkString;
- (void)checkDebug;
- (id)childEnumerator;
- (id)objectsForStyleMigrating;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (BOOL)isSearchable;
- (id)stringEquivalent;
- (unsigned long long)findCharIndex;
- (void)setParentStorage:(id)arg1;
- (void)setContainedStorageParentInfoToStorage:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)elementKind;
- (void)applyMark;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 wpStorage:(id)arg2;
- (Class)classForExport;
- (BOOL)supportsUUID;
- (BOOL)shouldArchiveStringEquivalent;
- (void)saveToArchiver:(id)arg1;
- (const struct TextualAttachmentArchive *)textualAttachmentArchiveFromUnarchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)populateGSSPFootnoteReferenceAttachment:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

@end

