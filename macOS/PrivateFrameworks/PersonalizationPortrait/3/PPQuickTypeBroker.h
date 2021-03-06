//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PPClientStore.h"
#import "PPFeedbackAccepting.h"

@class NSString, PPClientFeedbackHelper, PPXPCClientHelper;

@interface PPQuickTypeBroker : NSObject <PPFeedbackAccepting, PPClientStore>
{
    PPXPCClientHelper *_clientHelper;
    PPClientFeedbackHelper *_clientFeedbackHelper;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hibernateWithCompletion:(CDUnknownBlockType)arg1;
- (void)warmUpWithCompletion:(CDUnknownBlockType)arg1;
- (void)recentQuickTypeItemsForRecipients:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)quickTypeItemsWithLanguageModelingTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4 limit:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_remoteObjectProxy;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *clientIdentifier; // @dynamic clientIdentifier;

@end

