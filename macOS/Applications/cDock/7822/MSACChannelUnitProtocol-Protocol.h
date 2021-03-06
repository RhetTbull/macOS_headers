//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSACChannelProtocol.h"

@class MSACChannelUnitConfiguration, NSObject<OS_dispatch_queue>, NSString;

@protocol MSACChannelUnitProtocol <MSACChannelProtocol>
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *logsDispatchQueue;
@property(retain, nonatomic) MSACChannelUnitConfiguration *configuration;
- (void)checkPendingLogs;
- (void)resumeSendingLogsWithToken:(NSString *)arg1;
- (void)pauseSendingLogsWithToken:(NSString *)arg1;
- (void)enqueueItem:(id <MSACLog>)arg1 flags:(unsigned long long)arg2;
@end

