//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol KNOAuthPresenter;

@protocol KNOAuthAuthenticator <NSObject>
+ (void)logOutCurrentUser;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) id session;
- (void)cancel;
- (void)authenticateWithOAuthPresenter:(id <KNOAuthPresenter>)arg1 completionHandler:(void (^)(void))arg2;
@end

