//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDInfoImporterDelegate-Protocol.h"
#import "TSDIngestibleItemImportableDrawableProvider-Protocol.h"

@class NSData, NSError, NSString, NSURL, TSDDrawableInfo, TSDInfoImporter, TSUProgress, TSUScaledProgress, TSUTemporaryDirectory;
@protocol TSDIngestibleItemImportableDrawableProviderDelegate;

@interface TSDInfoImporterDrawableProvider : NSObject <TSDInfoImporterDelegate, TSDIngestibleItemImportableDrawableProvider>
{
    NSData *_data;
    TSUTemporaryDirectory *_temporaryDirectory;
    NSURL *_dataURL;
    NSString *_type;
    TSDInfoImporter *_infoImporter;
    TSUScaledProgress *_progress;
    id <TSDIngestibleItemImportableDrawableProviderDelegate> _delegate;
}

+ (BOOL)canInitWithType:(id)arg1;
@property(readonly, nonatomic) TSUProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) id <TSDIngestibleItemImportableDrawableProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)infoImporterWillIgnoreMediaCompatibilityOnAllDevicesRequirement:(id)arg1;
- (void)infoImporter:(id)arg1 needsMediaCompatibilityOnAllDevicesRequirementForMediaType:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) unsigned long long dataLength;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) TSDDrawableInfo *drawable;
- (void)cancel;
- (void)provideDrawableWithObjectContext:(id)arg1 forceMatchStyle:(BOOL)arg2 bakeSize:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initWithURL:(id)arg1 type:(id)arg2;
- (id)initWithData:(id)arg1 type:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

