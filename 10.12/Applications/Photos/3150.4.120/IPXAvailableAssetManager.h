//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IPXManualGlobalProgress, IPXReconnectManager, IPXVersionResourceRequest, NSWindow;
@protocol NSFastEnumeration;

@interface IPXAvailableAssetManager : NSObject
{
    id <NSFastEnumeration> _versions;
    IPXVersionResourceRequest *_iCloudResourceRequestor;
    IPXReconnectManager *_referenceFileReconnector;
    IPXManualGlobalProgress *_globalProgressController;
    CDUnknownBlockType _completionHandler;
    BOOL _didCancel;
    long long _progressType;
    long long _requestOperation;
    NSWindow *_baseWindow;
}

+ (id)preloadVersions:(id)arg1 excludeAudio:(BOOL)arg2;
+ (id)preloadVersions:(id)arg1;
@property(retain) NSWindow *baseWindow; // @synthesize baseWindow=_baseWindow;
@property long long requestOperation; // @synthesize requestOperation=_requestOperation;
@property long long progressType; // @synthesize progressType=_progressType;
- (void).cxx_destruct;
- (void)continueAssetCheckForiCloudAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)continueAssetCheckForReferencedAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)initWithVersionsForObtainingMasters:(id)arg1;

@end

