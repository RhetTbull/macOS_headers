//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDDatabaseZoneManager, NSDictionary;

@protocol HMDDatabaseZoneManagerDelegate <NSObject>

@optional
- (void)zoneManager:(HMDDatabaseZoneManager *)arg1 didReceiveMessageWithUserInfo:(NSDictionary *)arg2;
- (void)zoneManagerDidStop:(HMDDatabaseZoneManager *)arg1;
- (void)zoneManagerDidStart:(HMDDatabaseZoneManager *)arg1;
@end

