//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSSearchableIndex, NSDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_os_transaction>, NSSet;

@interface VCSpotlightSyncOperation : NSObject
{
    BOOL _fullResync;
    id <VCSpotlightSyncOperationDelegate> _delegate;
    NSDictionary *_searchableItemRegistry;
    NSSet *_identifiersToRemove;
    NSDictionary *_keyedReferences;
    NSObject<OS_dispatch_queue> *_queue;
    CSSearchableIndex *_index;
    NSObject<OS_os_transaction> *_transaction;
}

+ (void)_fillIdentifiersToRemove:(id *)arg1 searchableItemRegistry:(id *)arg2 withMaximumUpdatedItems:(long long)arg3 references:(id)arg4 localState:(id)arg5;
+ (id)getSpotlightLocalState;
+ (id)spotlightDiffFileURL;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) CSSearchableIndex *index; // @synthesize index=_index;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) BOOL fullResync; // @synthesize fullResync=_fullResync;
@property(readonly, nonatomic) NSDictionary *keyedReferences; // @synthesize keyedReferences=_keyedReferences;
@property(readonly, nonatomic) NSSet *identifiersToRemove; // @synthesize identifiersToRemove=_identifiersToRemove;
@property(readonly, nonatomic) NSDictionary *searchableItemRegistry; // @synthesize searchableItemRegistry=_searchableItemRegistry;
@property(nonatomic) __weak id <VCSpotlightSyncOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cleanupAndExitWithRequestToRelaunch:(BOOL)arg1;
- (void)deleteSpotlightFileAndCleanup;
- (void)clearLocalStateAndExit;
- (void)saveLocalState;
- (void)indexSearchableItems;
- (void)start;
- (id)initWithReferences:(id)arg1 clientState:(unsigned long long)arg2 spotlightIndex:(id)arg3 forceFullResync:(BOOL)arg4;

@end

