//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CALRemotePublisher, NSError;

@protocol CALRemotePublisherDelegate <NSObject>
- (void)remotePublisher:(CALRemotePublisher *)arg1 progressedToCurrentUnits:(unsigned long long)arg2 totalUnits:(unsigned long long)arg3;
- (void)remotePublisher:(CALRemotePublisher *)arg1 didFinishWithError:(NSError *)arg2;
@end

