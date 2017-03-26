//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLDownloadDelegate-Protocol.h"

@class BlocklistDownloaderViewController, NSString, NSURLDownload;

@interface BlocklistDownloader : NSObject <NSURLDownloadDelegate>
{
    NSURLDownload *fDownload;
    BlocklistDownloaderViewController *fViewController;
    NSString *fDestination;
    unsigned long long fCurrentSize;
    long long fExpectedSize;
    int fState;
}

+ (BOOL)isRunning;
+ (id)downloader;
- (BOOL)download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (void)download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)download:(id)arg1 didCreateDestination:(id)arg2;
- (void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;
- (void)cancelDownload;
- (void)dealloc;
- (void)setViewController:(id)arg1;
- (void)decompressBlocklist;
- (void)startDownload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

