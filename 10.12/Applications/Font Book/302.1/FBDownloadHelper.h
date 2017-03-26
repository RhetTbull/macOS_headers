//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface FBDownloadHelper : NSObject
{
    BOOL _isDownloading;
    unsigned int _downloadCount;
    NSMutableSet *_nameSet;
    NSMutableDictionary *_progressDict;
}

+ (BOOL)executeProgressHandlerWithState:(unsigned int)arg1 andParameter:(id)arg2;
+ (void)_prepareToDownload;
+ (id)_downloadHelper;
@property(retain) NSMutableDictionary *progressDict; // @synthesize progressDict=_progressDict;
@property(retain) NSMutableSet *nameSet; // @synthesize nameSet=_nameSet;
@property unsigned int downloadCount; // @synthesize downloadCount=_downloadCount;
@property BOOL isDownloading; // @synthesize isDownloading=_isDownloading;
- (void)_updateDownloadFilesProgress:(id)arg1;
- (void)_reportFailure:(id)arg1;
- (void)_finishDownloadFilesProgress:(id)arg1;
- (BOOL)_executeProgressHandlerWithState:(unsigned int)arg1 andParameter:(id)arg2;
- (id)_displayNameFromParameters:(id)arg1;
- (void)_beginDownloadFilesProgress:(id)arg1;

@end

