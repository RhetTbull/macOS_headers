//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class HIDRemote, NSDictionary, NSError, NSMutableDictionary;

@protocol HIDRemoteDelegate
- (void)hidRemote:(HIDRemote *)arg1 eventWithButton:(int)arg2 isPressed:(BOOL)arg3 fromHardwareWithAttributes:(NSMutableDictionary *)arg4;

@optional
- (BOOL)hidRemote:(HIDRemote *)arg1 shouldRetryExclusiveLockWithInfo:(NSDictionary *)arg2;
- (void)hidRemote:(HIDRemote *)arg1 exclusiveLockReleasedByApplicationWithInfo:(NSDictionary *)arg2;
- (BOOL)hidRemote:(HIDRemote *)arg1 lendExclusiveLockToApplicationWithInfo:(NSDictionary *)arg2;
- (BOOL)hidRemote:(HIDRemote *)arg1 inspectNewHardwareWithService:(unsigned int)arg2 prematchResult:(BOOL)arg3;
- (void)hidRemote:(HIDRemote *)arg1 releasedHardwareWithAttributes:(NSMutableDictionary *)arg2;
- (void)hidRemote:(HIDRemote *)arg1 failedNewHardwareWithError:(NSError *)arg2;
- (void)hidRemote:(HIDRemote *)arg1 foundNewHardwareWithAttributes:(NSMutableDictionary *)arg2;
- (void)hidRemote:(HIDRemote *)arg1 remoteIDChangedOldID:(int)arg2 newID:(int)arg3 forHardwareWithAttributes:(NSMutableDictionary *)arg4;
@end

