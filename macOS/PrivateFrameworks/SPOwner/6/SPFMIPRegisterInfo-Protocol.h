//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSNumber, NSSet, NSString, NSUUID;

@protocol SPFMIPRegisterInfo <NSObject>
@property(readonly, copy, nonatomic) NSDate *lastKeyRollDate;
@property(readonly, copy, nonatomic) NSNumber *beaconZoneCreationErrorCode;
@property(readonly, copy, nonatomic) NSDate *beaconZoneCreationDate;
@property(readonly, copy, nonatomic) NSSet *serviceDisabledReasons;
@property(readonly, copy, nonatomic) NSString *serviceState;
@property(readonly, copy, nonatomic) NSUUID *baUUID;
@end

