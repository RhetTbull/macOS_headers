//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDDrawableInfo.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDInfoWithPathSource-Protocol.h"
#import "TSDMixing-Protocol.h"

@class NSObject, NSString, TSDInfoGeometry, TSDPathSource, TSPObject;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSDMaskInfo : TSDDrawableInfo <GSSPAutoEncodable, TSDMixing, TSDInfoWithPathSource>
{
    TSDPathSource *mPathSource;
}

@property(copy, nonatomic) TSDPathSource *pathSource; // @synthesize pathSource=mPathSource;
- (id)objectForProperty:(int)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (Class)repClass;
- (Class)layoutClass;
- (BOOL)isEqualToMaskInfo:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 pathSource:(id)arg3;
- (id)checkIsValidForInsert;
- (void)saveToArchive:(struct MaskArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct MaskArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)populateGSSPMaskInfo:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property(nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property(readonly) Class superclass;

@end

