//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _INPBTimer;

@protocol _INPBPauseTimerIntentResponse <NSObject>
+ (Class)pausedTimersType;
@property(readonly, nonatomic) unsigned long long pausedTimersCount;
@property(copy, nonatomic) NSArray *pausedTimers;
- (_INPBTimer *)pausedTimersAtIndex:(unsigned long long)arg1;
- (void)addPausedTimers:(_INPBTimer *)arg1;
- (void)clearPausedTimers;
@end

