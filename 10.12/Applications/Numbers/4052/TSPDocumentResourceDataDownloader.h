//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSPDataDownloader-Protocol.h"

@class NSString, NSURL, TSPDataDownloaderConfiguration, TSPObjectContext, TSUDownloadSession;

@interface TSPDocumentResourceDataDownloader : NSObject <TSPDataDownloader>
{
    TSPObjectContext *_context;
    NSURL *_downloadURL;
    TSPDataDownloaderConfiguration *_configuration;
    NSString *_digestString;
    NSString *_locator;
    NSString *_extension;
    TSUDownloadSession *_downloadSession;
}

+ (double)defaultSynchronousDownloadTimeout;
+ (BOOL)defaultShouldAttemptToDownloadSynchronously;
+ (id)downloadURLForDigestString:(id)arg1 locator:(id)arg2 extension:(id)arg3;
- (void).cxx_destruct;
- (void)cancel;
- (void)continueDocumentResourceDownloadWithDownloader:(id)arg1 forData:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)retryDownloadForData:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)downloadDataWithFilename:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithContext:(id)arg1 downloadURL:(id)arg2 configuration:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

