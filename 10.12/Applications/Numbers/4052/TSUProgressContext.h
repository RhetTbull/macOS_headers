//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, TSUProgressStage;

@interface TSUProgressContext : NSObject
{
    TSUProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
    double m_lastProgressReport;
    double m_lastOverallProgress;
}

- (double)overallProgress;
- (double)currentPosition;
- (void)setMessage:(id)arg1;
- (void)setPercentageProgressFromTCProgressContext:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)advanceProgress:(double)arg1;
- (void)endStage;
- (void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1;
- (void)createStageWithSteps:(double)arg1;
- (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverBlock:(CDUnknownBlockType)arg1;
- (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;
- (void)reset;
- (void)reportProgress:(double)arg1 overallProgress:(double)arg2;
- (id)currentStage;
- (void)dealloc;
- (id)init;

@end

