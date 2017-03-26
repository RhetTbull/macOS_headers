//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GrowlApplicationBridgeDelegate-Protocol.h"

@interface GSNotifier : NSObject <GrowlApplicationBridgeDelegate>
{
}

+ (id)_keyForNotificationType:(int)arg1;
+ (BOOL)notificationCenterIsAvailable;
+ (void)showCantSwitchToIntegratedOnlyMessage:(id)arg1;
+ (void)showUnsupportedMachineMessage;
+ (void)showOneTimeNotification;
+ (void)showGPUChangeNotification:(int)arg1;
+ (id)sharedInstance;
- (id)registrationDictionaryForGrowl;

@end

