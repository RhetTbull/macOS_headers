//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarPersistence/CalNetworkChangeNotificationListener-Protocol.h>

@class NSError, NSManagedObjectID, NSString;

@interface CalSession : NSObject <CalNetworkChangeNotificationListener>
{
    double _interval;
    BOOL _pushActive;
    int _status;
    NSError *_error;
    NSManagedObjectID *_objectID;
    NSString *_sessionID;
}

+ (id)defaultUserAgent;
+ (void)setDefaultUserAgent:(id)arg1;
+ (id)knownNonNodeSessionIDs;
+ (void)persistErrorOnAccount:(id)arg1 forPrincipal:(id)arg2;
@property(retain) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property double interval; // @synthesize interval=_interval;
@property(readonly, retain) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(retain) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)description;
- (id)debugInfo;
- (void)systemDidWake;
- (void)systemWillSleep;
- (void)systemNetworkDidChange;
- (void)promptUserIfNeededForError:(id)arg1 managedPrincipal:(id)arg2;
- (id)managedObjectInContext:(id)arg1;
- (void)deletePersistedErrorAndNotify;
- (BOOL)persistErrorAndNotify;
- (BOOL)processChangeRequests:(BOOL)arg1;
- (void)synchronizeDelegatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)synchronizeWithFlags:(long long)arg1;
- (void)synchronize;
- (BOOL)active;
- (void)reactivate;
- (BOOL)activate;
- (void)deactivate;
- (void)broadcastStatusUpdate;
- (void)setError:(id)arg1 status:(int)arg2;
@property int status;
- (void)operation:(id)arg1 didEncounterError:(id)arg2;
- (BOOL)isOfflineOrError;
- (BOOL)isOffline;
- (void)goOffline;
- (void)goOnline;
- (BOOL)needsSync;
- (BOOL)needsSyncDueToTime;
- (double)timeSinceLastSync;
- (void)timerFiredWithInfo:(id)arg1;
- (id)_newScheduleCriteria;
- (BOOL)updatePushState:(BOOL)arg1;
- (void)reschedule;
- (void)unschedule;
- (void)_schedule;
- (void)schedule;
- (id)initWithSessionID:(id)arg1;
- (id)initWithObjectID:(id)arg1;

@end

