//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSharingServiceDelegate-Protocol.h"

@class NSSharingService, NSString, TMADocument;

@interface TMACloudSharingController : NSObject <NSSharingServiceDelegate>
{
    TMADocument *_document;
    NSSharingService *_cloudSharingService;
    CDUnknownBlockType _dismissCompletionHandler;
}

+ (id)sharingControllerWithDocument:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
@property(retain, nonatomic) NSSharingService *cloudSharingService; // @synthesize cloudSharingService=_cloudSharingService;
@property(retain, nonatomic) TMADocument *document; // @synthesize document=_document;
- (void)displayShareUIWithDismissCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_callCompletionHandlerWithSharedStatusForURL:(id)arg1 error:(id)arg2;
- (void)_userSelectedPasswordActionInSharingService:(id)arg1;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (void)sharingService:(id)arg1 didCompleteForItems:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (void)_configureCloudSharingServiceUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

