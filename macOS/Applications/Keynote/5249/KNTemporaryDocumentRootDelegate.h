//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KNDocumentRootDelegate-Protocol.h"

@class NSString, NSURL, SFUCryptoKey, TSACachedDocumentInfo, TSACollaborationErrorAction;
@protocol NSFilePresenter, TSKCachedDocumentInfo;

@interface KNTemporaryDocumentRootDelegate : NSObject <KNDocumentRootDelegate>
{
}

- (id)createViewStateRoot;
@property(readonly, nonatomic) NSString *name;
- (id)sharingStateForContext:(id)arg1;
@property(readonly, nonatomic) id <TSKCachedDocumentInfo> tskCachedDocumentInfo;
@property(readonly, nonatomic) NSURL *fileURL;

// Remaining properties
@property(readonly, nonatomic) TSACachedDocumentInfo *cachedDocumentInfo;
@property(readonly, nonatomic) id <NSFilePresenter> cloudFilePresenter;
@property(readonly) TSACollaborationErrorAction *collaborationDisallowedErrorAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSString *defaultDraftName;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *documentCachePath;
@property(readonly, retain, nonatomic) SFUCryptoKey *encryptionKey;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

