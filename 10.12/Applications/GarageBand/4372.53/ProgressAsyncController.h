//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ProgressAsyncController : NSObject
{
    unsigned long long pbarID;
}

+ (void)setFasterOverviewPreferenceState:(long long)arg1;
+ (long long)fasterOverviewPreferenceState;
- (void)handleUM_BLINK:(id)arg1;
- (void)removeProgressBar;
- (void)createProgressBarWithIconType:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

