//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TSTTableRowColResizerKnobTrackerAccessibility_super.h"

@class NSString, TSAccessibilityTimer;

@interface TSTTableRowColResizerKnobTrackerAccessibility : __TSTTableRowColResizerKnobTrackerAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
- (id)_tsaxLastHudString;
- (id)_tableRep;
- (id)_tsaxKnobTrackAffectedRegion;
- (long long)_tsaxDirection;
- (void)endMovingKnob;
- (void)moveKnobToRepPosition:(struct CGPoint)arg1;
- (void)beginMovingKnob;
@property(retain, nonatomic, setter=_tsaxSetBeginningValue:) NSString *_tsaxBeginningValue;
@property(retain, nonatomic, setter=_tsaxSetLastAnnouncement:) NSString *_tsaxLastAnnouncement;
@property(retain, nonatomic, setter=_tsaxSetAnnouncementTimer:) TSAccessibilityTimer *_tsaxAnnouncementTimer;

@end

