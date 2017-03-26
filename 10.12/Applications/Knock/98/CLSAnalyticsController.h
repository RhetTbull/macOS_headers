//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLSAnalyticsViewControllerTrackingDelegate-Protocol.h"

@class CLSAnalyticsIdentifierGenerator, CLSAnalyticsMetadataController, CLSAnalyticsTimestampGenerator, CLSEventLogEventFile, CLSEventLogSessionRepository, CLSSettings, CLSSettingsClient, NSData, NSFileManager, NSMutableArray, NSString, NSURL;

@interface CLSAnalyticsController : NSObject <CLSAnalyticsViewControllerTrackingDelegate>
{
    NSURL *_analyticsRootDirectoryURL;
    CLSSettings *_settings;
    BOOL _haveSettings;
    BOOL _settingsShouldCollectAnalytics;
    NSURL *_settingsAnalyticsURL;
    BOOL _settingsShouldFlushOnBackground;
    unsigned long long _settingsMaxByteSizePerFile;
    unsigned int _settingsFlushIntervalSecs;
    unsigned int _settingsMaxPendingSendFileCount;
    CLSSettingsClient *_settingsClient;
    NSString *_sessionIdentifier;
    unsigned long long _sessionTimestamp;
    NSFileManager *_fileManager;
    NSString *_currentSessionFragmentIdentifier;
    unsigned long long _currentSessionFragmentTimestamp;
    NSURL *_currentSessionFragmentDirectoryURL;
    BOOL _performSessionMaintenanceAfterSettingsArrive;
    CLSEventLogSessionRepository *_logSessionRepository;
    CLSAnalyticsMetadataController *_metadataController;
    CLSAnalyticsIdentifierGenerator *_identifierGenerator;
    CLSAnalyticsTimestampGenerator *_timestampGenerator;
    NSMutableArray *_sessionFragmentsToTransmit;
    struct dispatch_queue_s *_sessionMaintenanceQueue;
    struct dispatch_source_s *_sessionFragmentMaintenanceTimerSource;
    struct dispatch_queue_s *_priorityEventLoggingQueues[3];
    NSURL *_priorityCurrentFragmentEventFileURLs[3];
    CLSEventLogEventFile *_priorityCurrentFragmentEventFiles[3];
    BOOL _loggedAnalyticsEnabled;
    NSString *_lastSessionIdentifier;
    unsigned long long _lastSessionTimestamp;
    NSData *_lastSessionMetadata;
}

+ (id)mutableSortedFileURLsGroupedByPrioritiesFromLogFileURLs:(id)arg1;
+ (BOOL)deviceMeetsMinimumRequirements;
+ (BOOL)supported;
@property(readonly, nonatomic) unsigned long long sessionTimestamp; // @synthesize sessionTimestamp=_sessionTimestamp;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, retain, nonatomic) CLSSettingsClient *settingsClient; // @synthesize settingsClient=_settingsClient;
@property(readonly, copy, nonatomic) NSURL *analyticsRootDirectoryURL; // @synthesize analyticsRootDirectoryURL=_analyticsRootDirectoryURL;
@property(retain, nonatomic) CLSSettings *settings; // @synthesize settings=_settings;
- (void)maintainSessionFragments:(CDUnknownBlockType)arg1;
- (void)maintainSessionFragmentsIgnoringError;
- (void)cleanUpRepository:(CDUnknownBlockType)arg1;
- (void)pruneSessionFragmentLogFiles:(CDUnknownBlockType)arg1;
- (id)nonCurrentLogFileURLsForAllStates:(id *)arg1;
- (void)scheduleSessionMaintenance;
- (unsigned long long)initialMaintenanceTimeWithFlushInterval:(double)arg1;
- (void)cancelSessionMaintenance;
- (void)saveLastMaintenanceDate:(id)arg1;
- (id)lastMaintenanceDate;
- (void)transmitPackagedSessionFragments:(CDUnknownBlockType)arg1;
- (void)transmitNextPackagedSessionFragment:(CDUnknownBlockType)arg1;
- (void)transmitLogsForSessionFragmentDirectory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)packageClosedSessionFragments:(CDUnknownBlockType)arg1;
- (BOOL)runPackageClosedSessionFragments:(id *)arg1;
- (BOOL)packageLogsFromActiveSessionFragmentDirectoryURL:(id)arg1 intoPackagedSessionFragmentDirectoryURL:(id)arg2 error:(id *)arg3;
- (BOOL)isOpenSessionFragmentDirectoryURL:(id)arg1;
- (BOOL)purgePackagedPrepSessionFragmentDirectories;
- (id)sessionFragmentDirectoryURLsForStateName:(id)arg1 error:(id *)arg2;
- (void)openNewSessionFragment:(CDUnknownBlockType)arg1;
- (BOOL)runOpenNewSessionFragment:(id *)arg1;
- (void)logPreviousSessionCrashedOnDate:(id)arg1;
- (void)logAppLaunched;
- (void)logAppInstalled;
- (BOOL)prepareNewSessionFragmentWithIdentifier:(id)arg1 timestamp:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)addMetadataEventToFragmentEventFile:(id)arg1 withPriority:(unsigned long long)arg2 timestamp:(unsigned long long)arg3 error:(id *)arg4;
- (id)createEventFileURLForPriority:(unsigned long long)arg1 error:(id *)arg2;
- (void)logEvent:(id)arg1;
- (BOOL)ensureLogFileExistsForPriority:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)handlePriorityTriggeredMaintainSessionFragmentForEvent:(id)arg1;
- (BOOL)handleSizeTriggeredMaintainSessionFragmentForLogFile:(id)arg1;
- (void)applicationLifecycleEvent:(id)arg1;
- (void)dispatchToQueue:(struct dispatch_queue_s *)arg1 asynchronous:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
- (void)handleDisabledFeatureSwitch;
- (void)saveCurrentSessionInformation;
- (void)readLastSessionInformation;
- (BOOL)analyticsFeatureSwitchEnabled;
- (id)init;
- (id)initWithSettingsClient:(id)arg1 sessionIdentifier:(id)arg2 analyticsRootDirectoryWithURL:(id)arg3 identifierGenerator:(id)arg4 timestampGenerator:(id)arg5;
- (void)dealloc;

@end

