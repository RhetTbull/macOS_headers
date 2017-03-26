//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAssetResourceLoader, AVAssetResourceLoadingRequest, AVAssetResourceRenewalRequest, NSURLAuthenticationChallenge;

@protocol AVAssetResourceLoaderDelegate <NSObject>

@optional
- (void)resourceLoader:(AVAssetResourceLoader *)arg1 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (BOOL)resourceLoader:(AVAssetResourceLoader *)arg1 shouldWaitForResponseToAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)resourceLoader:(AVAssetResourceLoader *)arg1 didCancelLoadingRequest:(AVAssetResourceLoadingRequest *)arg2;
- (BOOL)resourceLoader:(AVAssetResourceLoader *)arg1 shouldWaitForRenewalOfRequestedResource:(AVAssetResourceRenewalRequest *)arg2;
- (BOOL)resourceLoader:(AVAssetResourceLoader *)arg1 shouldWaitForLoadingOfRequestedResource:(AVAssetResourceLoadingRequest *)arg2;
@end

