//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CRRegistryEntry.h"

@interface AHWRController : CRRegistryEntry
{
    unsigned long long _firmwareRev;
}

+ (id)keyPathsForValuesAffectingStatus;
+ (id)keyPathsForValuesAffectingWriteCachePolicy;
+ (id)keyPathsForValuesAffectingWriteCacheControlTitle;
+ (id)keyPathsForValuesAffectingWriteCacheStatusDescription;
+ (id)keyPathsForValuesAffectingWriteCacheEnabled;
+ (id)keyPathsForValuesAffectingVolumeServicesEnabled;
+ (id)keyPathsForValuesAffectingSupportedRaidLevels;
+ (id)keyPathsForValuesAffectingWorldWideName;
+ (id)keyPathsForValuesAffectingKernelVersion;
+ (id)keyPathsForValuesAffectingUBootVersion;
+ (id)keyPathsForValuesAffectingExpansionROMVersion;
+ (id)keyPathsForValuesAffectingPshimVersion;
+ (id)keyPathsForValuesAffectingHardwareVersion;
+ (id)keyPathsForValuesAffecting_firmwareRevision;
+ (id)keyPathsForValuesAffectingFirmwareRevision;
- (long long)status;
- (long long)writeCachePolicy;
- (id)writeCacheControlTitle;
- (id)writeCacheStatusDescription;
- (BOOL)writeCacheEnabled;
- (BOOL)volumeServicesEnabled;
- (id)supportedRaidLevels;
- (id)worldWideName;
- (id)kernelVersion;
- (id)uBootVersion;
- (id)expansionROMVersion;
- (id)pshimVersion;
- (id)hardwareVersion;
- (id)firmwareRevision;
- (unsigned long long)_firmwareRevision;

@end

