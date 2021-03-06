//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NetworkServiceProxyStats : NSObject <NSSecureCoding>
{
    long long _version;
    NSDate *_lastReportDate;
    double _reportInterval;
    NSDictionary *_controlStatsDicts;
    NSDictionary *_connectionStatsDict;
    NSDictionary *_requestStatsDicts;
    NSObject<OS_dispatch_queue> *_submitQueue;
    NSObject<OS_dispatch_source> *_reportTimer;
}

+ (BOOL)supportsSecureCoding;
+ (id)createStatistics;
+ (id)readFromKeyChain;
+ (id)getRequestName:(int)arg1;
+ (id)getProtocolName:(long long)arg1;
+ (id)getInterfaceName:(long long)arg1;
@property(retain) NSObject<OS_dispatch_source> *reportTimer; // @synthesize reportTimer=_reportTimer;
@property(retain) NSObject<OS_dispatch_queue> *submitQueue; // @synthesize submitQueue=_submitQueue;
@property(retain) NSDictionary *requestStatsDicts; // @synthesize requestStatsDicts=_requestStatsDicts;
@property(retain) NSDictionary *connectionStatsDict; // @synthesize connectionStatsDict=_connectionStatsDict;
@property(retain) NSDictionary *controlStatsDicts; // @synthesize controlStatsDicts=_controlStatsDicts;
@property double reportInterval; // @synthesize reportInterval=_reportInterval;
@property(retain) NSDate *lastReportDate; // @synthesize lastReportDate=_lastReportDate;
@property long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)copyResponseTimeBucketsDictionary:(id)arg1;
- (id)copyDurationBucketsDictionary:(id)arg1;
- (id)copyDictionary:(long long)arg1 protocolType:(long long)arg2 summaryOnly:(BOOL)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)clear;
- (void)save;
- (void)reportStats;
- (void)reportNow:(BOOL)arg1;
- (void)scheduleReport;
- (void)addControlStats:(id)arg1;
- (void)addRequestStats:(id)arg1;
- (void)addConnectionStats:(id)arg1;
- (id)getAWDServerConnection;
- (id)initEmpty;

@end

