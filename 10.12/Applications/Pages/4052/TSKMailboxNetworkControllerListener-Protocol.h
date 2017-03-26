//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSOperationQueue, NSString, TSKMailboxNetworkController, TSKMailboxScmpRequestId;

@protocol TSKMailboxNetworkControllerListener <NSObject>
@property(copy, nonatomic) NSString *sessionId;
@property(readonly, nonatomic) NSOperationQueue *operationQueue;
- (void)didReceiveRequestThrottledWithCode:(unsigned long long)arg1 message:(NSString *)arg2;
- (void)didReceiveNotFoundErrorWithCode:(unsigned long long)arg1 message:(NSString *)arg2;
- (void)didReceivePermissionDeniedErrorWithCode:(unsigned long long)arg1 message:(NSString *)arg2;
- (void)didReceiveRequestTooLargeWithCode:(unsigned long long)arg1 message:(NSString *)arg2;
- (void)didReceiveAuthenticationErrorWithCode:(unsigned long long)arg1 message:(NSString *)arg2;
- (void)networkDidDisconnectWithCode:(unsigned long long)arg1 message:(NSString *)arg2;
- (void)networkDidConnect:(BOOL)arg1;
- (void)processResponseClosedWithRequestId:(TSKMailboxScmpRequestId *)arg1 fromController:(TSKMailboxNetworkController *)arg2;
- (void)processResponseWithRequestId:(TSKMailboxScmpRequestId *)arg1 response:(NSString *)arg2;
@end

