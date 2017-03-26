//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SUUpdater;

@interface HBSoftwareUpdateController : NSObject
{
    BOOL _updateIsRequired;
    SUUpdater *_sparkleUpdate;
    unsigned long long _peripheralProtocolVersion;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long peripheralProtocolVersion; // @synthesize peripheralProtocolVersion=_peripheralProtocolVersion;
@property(nonatomic) BOOL updateIsRequired; // @synthesize updateIsRequired=_updateIsRequired;
@property(retain, nonatomic) SUUpdater *sparkleUpdate; // @synthesize sparkleUpdate=_sparkleUpdate;
- (void)updaterCriticalUpdateCouldNotBeAccessed;
- (id)feedURLStringForUpdater:(id)arg1;
- (BOOL)updater:(id)arg1 doesSupportProtocolVersion:(id)arg2;
- (BOOL)updaterCriticalUpdateIsAvailable:(id)arg1;
- (BOOL)updaterShouldPromptForPermissionToCheckForUpdates:(id)arg1;
- (void)updaterWillRelaunchApplication:(id)arg1 withInstallUpdate:(id)arg2;
- (void)updater:(id)arg1 willInstallUpdate:(id)arg2;
- (void)setCurrentPeripheralVersion:(unsigned long long)arg1;
- (unsigned long long)centralProtocolVersion;
- (void)checkForUpdates:(id)arg1;
- (void)setupSparkle;
@property(nonatomic) BOOL installsBetaUpdates;
@property(nonatomic) BOOL automaticallyChecksForUpdates;
- (void)dealloc;

@end

