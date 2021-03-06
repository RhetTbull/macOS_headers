//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BSAuditToken, BSProcessHandle, NSArray, UISApplicationInitializationContext, UISApplicationSupportService;

@protocol UISApplicationSupportServiceDelegate <NSObject>

@optional
- (UISApplicationInitializationContext *)applicationInitializationContextForClient:(BSAuditToken *)arg1;
- (void)destroyScenesWithPersistentIdentifiers:(NSArray *)arg1 animationType:(unsigned long long)arg2 destroySessions:(BOOL)arg3 forClient:(BSAuditToken *)arg4 completion:(void (^)(BOOL, NSError *))arg5;
- (void)requestPasscodeUnlockUIForClient:(BSAuditToken *)arg1 withCompletion:(void (^)(BOOL))arg2;
- (void)service:(UISApplicationSupportService *)arg1 initializeClient:(BSProcessHandle *)arg2 withCompletion:(void (^)(UISApplicationInitializationContext *))arg3;
- (UISApplicationInitializationContext *)service:(UISApplicationSupportService *)arg1 initializeClient:(BSProcessHandle *)arg2;
- (BOOL)service:(UISApplicationSupportService *)arg1 overrideClientInitialization:(BSProcessHandle *)arg2;
@end

