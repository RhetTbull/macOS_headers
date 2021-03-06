//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKDiscoveryObserver.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString, PKDiscoveryService;

@interface PKDiscoveryDataSource : NSObject <PKDiscoveryObserver>
{
    PKDiscoveryService *_discoveryService;
    struct os_unfair_lock_s _articleLayoutsLock;
    NSArray *_articleLayouts;
    BOOL _updatingArticles;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <PKDiscoveryDataSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <PKDiscoveryDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_addDismissActionToArticleLayouts:(id)arg1;
- (BOOL)_queue_updateArticleLayouts:(id)arg1;
- (void)_updateArticlesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_articleLayoutForItemIdentifier:(id)arg1;
- (void)displayedDiscoveryItemWithIdentifier:(id)arg1;
- (void)discoveryService:(id)arg1 receivedUpdatedDiscoveryArticleLayouts:(id)arg2;
@property(retain, nonatomic) NSArray *articleLayouts;
- (void)discoveryArticleLayoutForItemWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cachedDiscoveryArticleLayoutForItemWithIdentifier:(id)arg1;
- (void)updateArticleLayouts;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

