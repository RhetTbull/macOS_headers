//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AMService.h"

@class NSMutableDictionary;

@interface AMNotificationProxy : AMService
{
    NSMutableDictionary *_messages;
}

- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3;
- (void)postNotification:(id)arg1;
- (id)initWithAMDevice:(id)arg1;
- (void)_amdlistenfornotifications;
- (void)dealloc;

@end

