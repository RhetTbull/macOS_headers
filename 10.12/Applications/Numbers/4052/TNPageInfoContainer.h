//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDContainerInfo-Protocol.h"

@class NSString, TNPageController, TSDInfoGeometry, TSPObject;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TNPageInfoContainer : NSObject <TSDContainerInfo>
{
    TNPageController *_pageController;
    unsigned long long _pageIndex;
}

- (id)infoForSelectionPath:(id)arg1;
- (id)childInfos;
- (BOOL)isSelectable;
- (Class)layoutClass;
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
- (BOOL)isThemeContent;
- (Class)repClass;
- (void)setPrimitiveGeometry:(id)arg1;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
- (id)pageController;
- (unsigned long long)pageIndex;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithPageIndex:(unsigned long long)arg1 pageController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property(readonly) Class superclass;

@end

