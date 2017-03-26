//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KNOAuthAuthenticator-Protocol.h"
#import "KNOAuthPresenterDelegate-Protocol.h"

@class NSError, NSString, NSURLSession, NSURLSessionDataTask;
@protocol KNOAuthPresenter;

@interface KNYouTubeAuthenticator : NSObject <KNOAuthPresenterDelegate, KNOAuthAuthenticator>
{
    id <KNOAuthPresenter> _OAuthPresenter;
    CDUnknownBlockType _completionHandler;
    NSURLSession *_accessTokenURLSession;
    NSURLSessionDataTask *_accessTokenURLSessionTask;
    BOOL _isAuthenticatingWithPresenter;
    id _session;
    NSError *_error;
}

+ (void)logOutCurrentUser;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id session; // @synthesize session=_session;
- (void)p_finishAuthenticatingWithSession:(id)arg1 wasCancelled:(BOOL)arg2 error:(id)arg3;
- (void)cancel;
- (void)presenter:(id)arg1 didFailWithError:(id)arg2;
- (void)presenter:(id)arg1 didPresentTitle:(id)arg2;
- (void)p_startAuthenticatingWithPresenter;
- (void)authenticateWithOAuthPresenter:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) BOOL hasSavedUserCredentialsInKeychain;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

