//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSTimer, TSUNetworkReachability;

@interface KNShowcastServiceReachabilityMonitor : NSObject
{
    NSMutableOrderedSet *_reachabilityObservers;
    BOOL _monitoringNetworkReachability;
    TSUNetworkReachability *_networkReachability;
    NSTimer *_hostReachabilityNotificationTimer;
    double _lastHostReachabilityNotificationTime;
}

@property(nonatomic) double lastHostReachabilityNotificationTime; // @synthesize lastHostReachabilityNotificationTime=_lastHostReachabilityNotificationTime;
@property(retain, nonatomic) NSTimer *hostReachabilityNotificationTimer; // @synthesize hostReachabilityNotificationTimer=_hostReachabilityNotificationTimer;
@property(retain, nonatomic) TSUNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
- (void)p_notifyHostReachabilityObservers;
- (void)p_hostReachabilityTimerDidFire:(id)arg1;
- (void)p_unscheduleHostReachabilityNotifications;
- (void)p_scheduleHostReachabilityNotifications;
- (void)p_networkReachabilityDidChange:(id)arg1;
- (void)p_stopMonitoringNetworkReachability;
- (BOOL)p_startMonitoringNetworkReachability;
- (void)p_stopMonitoringHostReachability;
- (void)p_startMonitoringHostReachabilityIfNeeded;
- (void)invalidate;
- (void)removeReachabilityObserver:(id)arg1;
- (id)addReachabilityObserverWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithNetworkReachability:(id)arg1;

@end

