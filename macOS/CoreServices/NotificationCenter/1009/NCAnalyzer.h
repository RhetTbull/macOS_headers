//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NCAnalyzer : NSObject
{
    double _openTime;
    double _todayViewStartTime;
    double _notificationsViewStartTime;
    int _secondsInTodayView;
    int _secondsInNotificationView;
    _Bool _opened;
    unsigned long long _activeViewType;
}

+ (id)defaultAnalyzer;
@property(nonatomic) _Bool opened; // @synthesize opened=_opened;
@property(nonatomic) unsigned long long activeViewType; // @synthesize activeViewType=_activeViewType;
- (void)nightShiftSwitchedOff;
- (void)nightShiftSwitchedOn;
- (void)logActiveWidgets:(id)arg1;
- (void)notificationCenterSwitchedToView:(unsigned long long)arg1;
- (void)notificationCenterClosed;
- (void)notificationCenterOpened;
- (id)init;

@end

