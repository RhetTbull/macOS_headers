//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXUserEventTrackerCommon : NSObject
{
    id _currentSessionSender;
    unsigned long long _currentSessionSource;
    unsigned long long _currentSessionTab;
    double _currentLogStateStartDate;
    double _currentLogSubStateStartDate;
    double _currentLogSubSubStateStartDate;
    BOOL _applicationIsInForeground;
    unsigned long long _currentTab;
    BOOL _enableDetailedDebugLogging;
    unsigned long long _currentLogState;
    unsigned long long _currentLogSubState;
    unsigned long long _currentLogSubSubState;
}

@property(nonatomic) unsigned long long currentLogSubSubState; // @synthesize currentLogSubSubState=_currentLogSubSubState;
@property(nonatomic) unsigned long long currentLogSubState; // @synthesize currentLogSubState=_currentLogSubState;
@property(nonatomic) unsigned long long currentLogState; // @synthesize currentLogState=_currentLogState;
@property(readonly, nonatomic) BOOL enableDetailedDebugLogging; // @synthesize enableDetailedDebugLogging=_enableDetailedDebugLogging;
@property(nonatomic, setter=setCurrentTab:) unsigned long long currentTab; // @synthesize currentTab=_currentTab;
- (void).cxx_destruct;
- (id)PXLogSubSubStateDescription:(unsigned long long)arg1;
- (id)PXLogSubStateDescription:(unsigned long long)arg1;
- (id)PXLogStateDescription:(unsigned long long)arg1;
- (void)aggregateSetMemoryFeedNumberOfDaysSinceLastVisit:(long long)arg1;
- (void)didFinishViewingMemoriesFeedView;
- (void)willViewMemoriesFeedView;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)logImpressionCountForEventSource:(unsigned long long)arg1;
- (void)logCounterValuesForLogSubSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logViewCountForLogSubSubState:(unsigned long long)arg1;
- (void)logViewCountForLogSubState:(unsigned long long)arg1;
- (void)logViewCountForLogState:(unsigned long long)arg1;
- (BOOL)isEventSourceSenderAppearingForTheFirstTime:(id)arg1;
- (void)setCurrentLogState:(unsigned long long)arg1 logSubState:(unsigned long long)arg2 logSubSubState:(unsigned long long)arg3 forceLogging:(BOOL)arg4;
- (void)_setCurrentSessionSource:(unsigned long long)arg1 sender:(id)arg2 isInForeground:(BOOL)arg3;
- (void)eventSourceDidChange:(unsigned long long)arg1 sender:(id)arg2;
- (void)eventSourceWillAppear:(unsigned long long)arg1 sender:(id)arg2;
- (void)eventSourceDidDisappear:(unsigned long long)arg1 sender:(id)arg2;
- (id)init;

@end

