//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KNPlaceholderInfo.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TMAScriptProxyableInfo-Protocol.h"

@class NSObject, NSString, TSDInfoGeometry, TSPObject;
@protocol TSDInfo, TSDOwningAttachment;

@interface KNBodyPlaceholderInfo : KNPlaceholderInfo <TMAScriptProxyableInfo, GSSPAutoEncodable>
{
}

- (void)acceptVisitor:(id)arg1;
- (id)copyToInstantiateMasterPlaceholder;
- (id)initWithKNPlaceholderInfo:(id)arg1;
- (id)defaultBuildChunkTitle;
- (BOOL)kn_isPlaceholderWithNonCanvasVisibleText;
- (id)kn_typeName;
- (id)defaultContainerIdentifier;
- (Class)scriptProxyClass;
- (void)populateGSSPBodyPlaceholderInfo:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (int)kind;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property(readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property(nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) NSObject<TSDInfo> *parentInfo;
@property(readonly) Class superclass;

@end

