//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSKSecret, TSUWeakReference;

@interface TSKCOPasswordState : NSObject
{
    TSUWeakReference *_passwordControllerReference;
    TSKSecret *_secret;
}

@property(readonly, nonatomic) TSKSecret *secret; // @synthesize secret=_secret;
- (void)onResume;
- (void)onSuspend;
- (void)onSharingStateCollaborationStopped;
- (void)onSharingStatePermissionUpdateEnd;
- (void)onSharingStatePermissionUpdateBegin;
- (void)reInit;
- (void)onPasswordNotRequired;
- (void)onPasswordIncorrect:(id)arg1;
- (void)onPasswordAccepted:(id)arg1;
- (void)onDisconnectedWithCode:(unsigned long long)arg1 message:(id)arg2;
- (void)onInitRequest:(id)arg1;
- (id)changePassword:(id)arg1 currentPassword:(id)arg2 newPassword:(id)arg3 hint:(id)arg4;
- (void)didEnterState:(id)arg1;
- (id)passwordController;
- (void)setPasswordController:(id)arg1;
- (void)dealloc;
- (id)initWithSecret:(id)arg1;
- (id)init;
- (void)setSecret:(id)arg1;

@end

