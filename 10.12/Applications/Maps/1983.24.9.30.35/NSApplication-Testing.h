//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

#import "MapsAppTesting-Protocol.h"

@interface NSApplication (Testing) <MapsAppTesting>
- (void)failedTest:(id)arg1;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (id)_extendLaunchTest;
- (void)finishedSubTest:(id)arg1 forTest:(id)arg2;
- (void)finishedTest:(id)arg1;
- (void)startedSubTest:(id)arg1 forTest:(id)arg2 withMetrics:(id)arg3;
- (void)startedSubTest:(id)arg1 forTest:(id)arg2;
- (void)startedTest:(id)arg1;
- (BOOL)shouldRecordExtendedLaunchTime;
@end

