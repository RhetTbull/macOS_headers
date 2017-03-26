//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DDLogMessage, NSObject, NSString;
@protocol DDLogFormatter, OS_dispatch_queue;

@protocol DDLogger <NSObject>
- (void)setLogFormatter:(id <DDLogFormatter>)arg1;
- (id <DDLogFormatter>)logFormatter;
- (void)logMessage:(DDLogMessage *)arg1;

@optional
- (NSString *)loggerName;
- (NSObject<OS_dispatch_queue> *)loggerQueue;
- (void)flush;
- (void)willRemoveLogger;
- (void)didAddLogger;
@end

