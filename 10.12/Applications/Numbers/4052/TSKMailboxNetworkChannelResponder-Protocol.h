//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TSKMailboxNetworkChannel;

@protocol TSKMailboxNetworkChannelResponder <NSObject>
- (void)onChannelError:(TSKMailboxNetworkChannel *)arg1 code:(unsigned long long)arg2 message:(NSString *)arg3;
- (void)onChannelClosed:(TSKMailboxNetworkChannel *)arg1;
- (void)onChannelResponse:(TSKMailboxNetworkChannel *)arg1 response:(NSString *)arg2;
- (void)onChannelActive:(TSKMailboxNetworkChannel *)arg1;
- (void)onChannelConnected:(TSKMailboxNetworkChannel *)arg1;
@end

