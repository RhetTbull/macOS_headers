//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMHomeDelegate-Protocol.h"

@class CLLocation, HMAccessory, HMAccessoryNetworkProtectionGroup, HMActionSet, HMHome, HMMediaSystem, HMResidentDevice, HMRoom, HMServiceGroup, HMUser, NSArray, NSString;

@protocol HMHomeDelegatePrivate <HMHomeDelegate>

@optional
- (void)home:(HMHome *)arg1 didUpdateAccessoryNetworkProtectionGroup:(HMAccessoryNetworkProtectionGroup *)arg2;
- (void)home:(HMHome *)arg1 didRemoveAccessoryNetworkProtectionGroup:(HMAccessoryNetworkProtectionGroup *)arg2;
- (void)home:(HMHome *)arg1 didAddAccessoryNetworkProtectionGroup:(HMAccessoryNetworkProtectionGroup *)arg2;
- (void)homeDidSetHasAnyUserAcknowledgedCameraRecordingOnboarding:(HMHome *)arg1;
- (void)homeDidEnableMultiUser:(HMHome *)arg1;
- (void)homeDidUpdateHomeLocationStatus:(HMHome *)arg1;
- (void)homeDidUpdateNetworkRouterSupport:(HMHome *)arg1;
- (void)homeDidUpdateProtectionMode:(HMHome *)arg1;
- (void)home:(HMHome *)arg1 didUpdateReprovisionStateForAccessory:(HMAccessory *)arg2;
- (void)home:(HMHome *)arg1 didRemoveMediaSystem:(HMMediaSystem *)arg2;
- (void)home:(HMHome *)arg1 didAddMediaSystem:(HMMediaSystem *)arg2;
- (void)home:(HMHome *)arg1 didUpdateMediaPassword:(NSString *)arg2;
- (void)home:(HMHome *)arg1 didUpdateMediaPeerToPeerEnabled:(BOOL)arg2;
- (void)home:(HMHome *)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2;
- (void)home:(HMHome *)arg1 didUpdateAutomaticSoftwareUpdateEnabled:(BOOL)arg2;
- (void)home:(HMHome *)arg1 didEnableNotifications:(BOOL)arg2;
- (void)home:(HMHome *)arg1 didUpdateAccessControlForUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didUpdateLastExecutionDateForActionSet:(HMActionSet *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForActionSet:(HMActionSet *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForServiceGroup:(HMServiceGroup *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForRoom:(HMRoom *)arg2;
- (void)homeDidUpdateApplicationData:(HMHome *)arg1;
- (void)home:(HMHome *)arg1 didUpdateAccesoryInvitationsForUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didUpdateStateForOutgoingInvitations:(NSArray *)arg2;
- (void)home:(HMHome *)arg1 didUpdateLocation:(CLLocation *)arg2;
- (void)home:(HMHome *)arg1 didRemoveResidentDevice:(HMResidentDevice *)arg2;
- (void)home:(HMHome *)arg1 didAddResidentDevice:(HMResidentDevice *)arg2;
@end

