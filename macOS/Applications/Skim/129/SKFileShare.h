//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSharingServiceDelegate.h"

@class NSSharingService, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SKFileShare : NSObject <NSSharingServiceDelegate>
{
    NSURL *fileURL;
    NSSharingService *sharingService;
    CDUnknownBlockType completionHandler;
}

+ (void)shareURL:(id)arg1 preparedByTask:(id)arg2 usingService:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
@property(retain, nonatomic) NSSharingService *sharingService; // @synthesize sharingService;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)launchTask:(id)arg1;
- (void)taskFinished:(id)arg1;
- (void)shareFileURL;
- (void)finishWithSuccess:(BOOL)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

