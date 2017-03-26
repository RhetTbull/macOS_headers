//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HIDRemoteDelegate-Protocol.h"

@class HIDRemote;

__attribute__((visibility("hidden")))
@interface BTTRemoteController : NSObject <HIDRemoteDelegate>
{
    HIDRemote *hidRemote;
    BOOL remoteSentDisplayToSleep;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedBTTRemoteController;
+ (void)initialize;
@property(nonatomic) BOOL remoteSentDisplayToSleep; // @synthesize remoteSentDisplayToSleep;
- (void)hidRemote:(id)arg1 eventWithButton:(int)arg2 isPressed:(BOOL)arg3 fromHardwareWithAttributes:(id)arg4;
- (BOOL)hidRemote:(id)arg1 shouldRetryExclusiveLockWithInfo:(id)arg2;
- (BOOL)hidRemote:(id)arg1 lendExclusiveLockToApplicationWithInfo:(id)arg2;
- (void)stopListening;
- (void)startExlusiveListening;
- (void)startListening;
- (void)setupRemote;
- (id)init;

@end

