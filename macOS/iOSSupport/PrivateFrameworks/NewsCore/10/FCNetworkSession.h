//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCNetworkSession-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSString;

@interface FCNetworkSession : NSObject <FCNetworkSession>
{
    NSMutableArray *_eventGroups;
    BOOL _wifiReachable;
    long long _cellularRadioAccessTechnology;
    NSDate *_startDate;
    NSDate *_endDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSArray *eventGroups; // @synthesize eventGroups=_eventGroups;
@property(nonatomic) long long cellularRadioAccessTechnology; // @synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology;
@property(nonatomic) BOOL wifiReachable; // @synthesize wifiReachable=_wifiReachable;
- (void)addEventGroup:(id)arg1;
- (id)generateSessionJSONDataWithOptions:(unsigned long long)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long totalFailureCount;
@property(readonly, nonatomic) unsigned long long totalSuccessCount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

