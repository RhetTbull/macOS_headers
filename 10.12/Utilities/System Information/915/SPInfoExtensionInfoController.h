//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPInfoStorageUsageReporting-Protocol.h"

@class NSArray, NSDictionary, NSImage, NSString, NSURL, STMOpaqueExtension, STMOperationQueue;

@interface SPInfoExtensionInfoController : NSObject <SPInfoStorageUsageReporting>
{
    BOOL _wantsSummaryView;
    STMOpaqueExtension *_extension;
    NSURL *_applicationURL;
    NSDictionary *_localizedCategoryNamesByCategoryIdentifier;
    NSArray *_orderedCategoryIdentifiers;
    NSArray *_recommendations;
    NSArray *_resources;
    NSArray *_managedURLs;
    NSString *_headerButtonTitle;
    NSString *_headerMessage;
    long long _bytesUsed;
    STMOperationQueue *_fetchResourcesOperationQueue;
}

@property(retain) STMOperationQueue *fetchResourcesOperationQueue; // @synthesize fetchResourcesOperationQueue=_fetchResourcesOperationQueue;
@property long long bytesUsed; // @synthesize bytesUsed=_bytesUsed;
@property(copy) NSString *headerMessage; // @synthesize headerMessage=_headerMessage;
@property(copy) NSString *headerButtonTitle; // @synthesize headerButtonTitle=_headerButtonTitle;
@property BOOL wantsSummaryView; // @synthesize wantsSummaryView=_wantsSummaryView;
@property(copy) NSArray *managedURLs; // @synthesize managedURLs=_managedURLs;
@property(copy) NSArray *resources; // @synthesize resources=_resources;
@property(copy) NSArray *recommendations; // @synthesize recommendations=_recommendations;
@property(copy) NSArray *orderedCategoryIdentifiers; // @synthesize orderedCategoryIdentifiers=_orderedCategoryIdentifiers;
@property(copy) NSDictionary *localizedCategoryNamesByCategoryIdentifier; // @synthesize localizedCategoryNamesByCategoryIdentifier=_localizedCategoryNamesByCategoryIdentifier;
@property(copy) NSURL *applicationURL; // @synthesize applicationURL=_applicationURL;
@property(readonly, retain) STMOpaqueExtension *extension; // @synthesize extension=_extension;
- (void)resourcesDidChange:(id)arg1;
- (void)recommendationsDidChange:(id)arg1;
- (void)bytesUsedDidChange:(id)arg1;
- (void)resumeObservingExtensionNotifications;
@property(readonly, retain) NSImage *icon;
- (void)fetchResources;
- (void)fetchRecommendations;
- (void)fetchExtensionInfo;
@property(readonly, copy) NSString *displayName;
- (void)dealloc;
- (id)init;
- (id)initWithExtension:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

