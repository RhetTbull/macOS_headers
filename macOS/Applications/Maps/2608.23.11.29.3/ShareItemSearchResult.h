//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ShareItemSource-Protocol.h"

@class CNContact, NSArray, NSData, NSString, Route, SearchResult, _MKCustomFeatureStore, _ShareCustomFeature;

__attribute__((visibility("hidden")))
@interface ShareItemSearchResult : NSObject <ShareItemSource>
{
    _MKCustomFeatureStore *_customFeatureStore;
    _ShareCustomFeature *_shareCustomFeature;
    BOOL _includePrintActivity;
    NSArray *_activityProviders;
    SearchResult *_searchResult;
    CNContact *_contact;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL includePrintActivity; // @synthesize includePrintActivity=_includePrintActivity;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, nonatomic) NSData *pushSubmissionData;
@property(readonly, nonatomic) Route *route;
- (void)_setupCustomFeatureForMapItem;
- (void)_setupCustomFeatureStore;
- (id)mapItem;
@property(readonly, nonatomic) NSArray *includedActivityTypes;
@property(readonly, nonatomic) NSArray *excludedActivityTypes;
@property(readonly, nonatomic) NSArray *applicationActivities;
- (void)setActivityProviderDelegate:(id)arg1;
@property(readonly, nonatomic) NSArray *activityProviders; // @synthesize activityProviders=_activityProviders;
- (id)initWithSearchResult:(id)arg1 contact:(id)arg2 includePrintActivity:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

