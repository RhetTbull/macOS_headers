//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRWKView, NSError, NSURL;

@protocol FRWKViewDelegate <NSObject>

@optional
- (void)webView:(FRWKView *)arg1 finishedLoadingURL:(NSURL *)arg2 withError:(NSError *)arg3;
- (void)webView:(FRWKView *)arg1 url:(NSURL *)arg2 redirectedToURL:(NSURL *)arg3;
- (void)webView:(FRWKView *)arg1 cancelledLoadingURL:(NSURL *)arg2;
- (void)webView:(FRWKView *)arg1 startedLoadingURL:(NSURL *)arg2;
@end

