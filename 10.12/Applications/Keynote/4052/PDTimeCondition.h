//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PDAnimationTarget;

@interface PDTimeCondition : NSObject
{
    BOOL mHasDelay;
    int mDelay;
    BOOL mHasTriggerEvent;
    int mTriggerEvent;
    PDAnimationTarget *mTarget;
}

- (id)description;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setTriggerEvent:(int)arg1;
- (int)triggerEvent;
- (BOOL)hasTriggerEvent;
- (void)setDelay:(int)arg1;
- (int)delay;
- (BOOL)hasDelay;
- (void)dealloc;
- (id)init;
- (int)writeDelay;

@end

