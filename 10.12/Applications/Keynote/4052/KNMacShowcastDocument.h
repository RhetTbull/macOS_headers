//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSDocument.h>

#import "KNShowcastMessageReceiver-Protocol.h"
#import "KNShowcastSessionControllerDelegate-Protocol.h"
#import "TSKCOPasswordProvider-Protocol.h"

@class KNKPFDocument, KNKPFPackage, KNShowcastKPFPackageLoader, KNShowcastSessionController, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface KNMacShowcastDocument : NSDocument <KNShowcastSessionControllerDelegate, KNShowcastMessageReceiver, TSKCOPasswordProvider>
{
    NSObject<OS_dispatch_queue> *_KPFPackageLoadingQueue;
    int _KPFHeaderLoadingRequestToken;
    BOOL _showcastSessionConnected;
    KNShowcastSessionController *_showcastSessionController;
    KNKPFDocument *_KPFDocument;
    KNKPFPackage *_KPFPackage;
    KNShowcastKPFPackageLoader *_showcastKPFPackageLoader;
    NSUUID *_showcastKPFPackageLoaderPresentationUUID;
    KNKPFPackage *_loadingKPFPackage;
}

+ (BOOL)autosavesInPlace;
+ (BOOL)canConcurrentlyReadDocumentsOfType:(id)arg1;
@property(nonatomic, getter=isShowcastSessionConnected) BOOL showcastSessionConnected; // @synthesize showcastSessionConnected=_showcastSessionConnected;
@property(retain, nonatomic) KNKPFPackage *loadingKPFPackage; // @synthesize loadingKPFPackage=_loadingKPFPackage;
@property(copy, nonatomic) NSUUID *showcastKPFPackageLoaderPresentationUUID; // @synthesize showcastKPFPackageLoaderPresentationUUID=_showcastKPFPackageLoaderPresentationUUID;
@property(retain, nonatomic) KNShowcastKPFPackageLoader *showcastKPFPackageLoader; // @synthesize showcastKPFPackageLoader=_showcastKPFPackageLoader;
@property(retain, nonatomic) KNKPFPackage *KPFPackage; // @synthesize KPFPackage=_KPFPackage;
@property(retain, nonatomic) KNKPFDocument *KPFDocument; // @synthesize KPFDocument=_KPFDocument;
@property(retain, nonatomic) KNShowcastSessionController *showcastSessionController; // @synthesize showcastSessionController=_showcastSessionController;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)cancelProvidingPassword;
- (void)p_performPasswordProviderOperationOnDocumentWindowControllerUsingBlock:(CDUnknownBlockType)arg1;
- (void)didApplyPassword:(unsigned long long)arg1;
- (void)requirePassword:(id)arg1 trialCount:(long long)arg2 hint:(id)arg3 networkDisconnected:(BOOL)arg4;
- (void)receiveShowcastMessage:(id)arg1 isResentPinnedMessage:(BOOL)arg2;
- (void)showcastSessionControllerDidConnect:(id)arg1;
- (void)showcastSessionController:(id)arg1 didReceiveError:(id)arg2;
- (void)p_closeKPFPackage;
- (void)close;
- (void)p_loadKPFPackage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)makeWindowControllers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

