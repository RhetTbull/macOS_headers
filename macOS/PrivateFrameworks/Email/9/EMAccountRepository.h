//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Email/EMRepository.h>

#import "EFLoggable.h"
#import "EMAccountRepositoryObserver.h"

@class EMRemoteConnection, NSMutableDictionary, NSString;

@interface EMAccountRepository : EMRepository <EFLoggable, EMAccountRepositoryObserver>
{
    NSMutableDictionary *_accounts;
    EMRemoteConnection *_connection;
    id <EFCancelable> _observerCancelable;
}

+ (id)remoteInterface;
+ (id)log;
@property(retain, nonatomic) id <EFCancelable> observerCancelable; // @synthesize observerCancelable=_observerCancelable;
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableDictionary *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;
- (void)_postAccountChangedNotification;
- (void)accountsChanged:(id)arg1;
- (void)accountsRemoved:(id)arg1;
- (void)accountsAdded:(id)arg1;
- (void)didEndObserving;
- (void)didBeginObserving;
- (id)accountForAccountIdentifier:(id)arg1;
- (id)accountForIdentifier:(id)arg1;
- (id)deliveryAccounts;
- (id)receivingAccounts;
- (id)allAccounts;
- (void)_restartObservingAccountChangesIfNecessary;
- (void)_startObservingAccountChangesIfNecessary;
- (void)dealloc;
- (id)initWithRemoteConnection:(id)arg1;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

