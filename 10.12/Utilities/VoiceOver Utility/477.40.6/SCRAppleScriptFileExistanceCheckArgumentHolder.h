//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AdminAuthenticator, SFAuthorization;

@interface SCRAppleScriptFileExistanceCheckArgumentHolder : NSObject
{
    BOOL _exists;
    CDUnknownBlockType _onSuccess;
    CDUnknownBlockType _onError;
    long long _tries;
    double _interval;
    SFAuthorization *_systemAuth;
    AdminAuthenticator *_adminAuth;
}

@property(retain, nonatomic) AdminAuthenticator *adminAuth; // @synthesize adminAuth=_adminAuth;
@property(retain, nonatomic) SFAuthorization *systemAuth; // @synthesize systemAuth=_systemAuth;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
@property(nonatomic) long long tries; // @synthesize tries=_tries;
@property(readonly, copy, nonatomic) CDUnknownBlockType onError; // @synthesize onError=_onError;
@property(readonly, copy, nonatomic) CDUnknownBlockType onSuccess; // @synthesize onSuccess=_onSuccess;
@property(readonly, nonatomic) BOOL exists; // @synthesize exists=_exists;
- (void)dealloc;
- (id)initWithExists:(BOOL)arg1 tries:(long long)arg2 interval:(double)arg3 systemAuth:(id)arg4 adminAuth:(id)arg5 onSuccess:(CDUnknownBlockType)arg6 onError:(CDUnknownBlockType)arg7;

@end

