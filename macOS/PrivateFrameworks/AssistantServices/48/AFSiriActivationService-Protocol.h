//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFRequestInfo, AFSiriActivationContext, INIntent, NSString;

@protocol AFSiriActivationService <NSObject>
- (oneway void)handleIntent:(INIntent *)arg1 inBackgroundAppWithBundleId:(NSString *)arg2 reply:(void (^)(INIntentResponse *, NSError *))arg3;
- (oneway void)handleContext:(AFSiriActivationContext *)arg1 completion:(void (^)(AFSiriActivationResult *))arg2;
- (oneway void)deactivateForReason:(long long)arg1 options:(unsigned long long)arg2 context:(AFSiriActivationContext *)arg3 completion:(void (^)(AFSiriActivationResult *))arg4;
- (oneway void)activateWithRequestInfo:(AFRequestInfo *)arg1 context:(AFSiriActivationContext *)arg2 completion:(void (^)(AFSiriActivationResult *))arg3;
- (oneway void)prewarmWithRequestInfo:(AFRequestInfo *)arg1 context:(AFSiriActivationContext *)arg2 completion:(void (^)(AFSiriActivationResult *))arg3;
@end

