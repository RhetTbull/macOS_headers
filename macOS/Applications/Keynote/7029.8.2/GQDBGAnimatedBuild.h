//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GQDBGBuild;

@interface GQDBGAnimatedBuild : NSObject
{
    GQDBGBuild *mBuild;
    unsigned long long mEventIndex;
    double mStartTime;
    double mDuration;
    BOOL mAutomatic;
}

@property(readonly, nonatomic, getter=isAutomatic) BOOL automatic; // @synthesize automatic=mAutomatic;
@property(readonly, nonatomic) double duration; // @synthesize duration=mDuration;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=mStartTime;
@property(readonly, nonatomic) unsigned long long eventIndex; // @synthesize eventIndex=mEventIndex;
@property(readonly, nonatomic) GQDBGBuild *build; // @synthesize build=mBuild;
@property(readonly, nonatomic) double endTime;
- (void)dealloc;
- (id)initWithBuild:(id)arg1 eventIndex:(unsigned long long)arg2 startTime:(double)arg3 duration:(double)arg4 automatic:(BOOL)arg5;

@end

