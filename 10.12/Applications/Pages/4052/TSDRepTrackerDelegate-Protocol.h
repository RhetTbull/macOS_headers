//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSObject, TSDRep;
@protocol TSDRepTracker;

@protocol TSDRepTrackerDelegate
- (BOOL)repTracker:(NSObject<TSDRepTracker> *)arg1 shouldApplyToSiblingRepsForRep:(TSDRep *)arg2;
- (void)repTracker:(NSObject<TSDRepTracker> *)arg1 didFinishTrackingRep:(TSDRep *)arg2;
- (void)repTracker:(NSObject<TSDRepTracker> *)arg1 willBeginTrackingRep:(TSDRep *)arg2;

@optional
- (BOOL)repTrackerDelegateDidOpenGroup;
- (void)repTracker:(NSObject<TSDRepTracker> *)arg1 continuedDraggingWithRep:(TSDRep *)arg2;
@end

