//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TMALimitsSliderCellAccessibility_super.h"

@class TMALimitsSliderAccessibilityDragHandleElement;

@interface TMALimitsSliderCellAccessibility : __TMALimitsSliderCellAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
- (id)_tsaxDarkDragHandle;
- (id)_tsaxMidDragHandle;
- (id)_tsaxLightDragHandle;
- (id)_tsaxParentSlider;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)dealloc;
- (void)tsaxDecrementValueForHandle:(int)arg1;
- (void)tsaxIncrementValueForHandle:(int)arg1;
- (struct CGRect)tsaxFrameForHandle:(int)arg1;
- (double)tsaxPercentValueForHandle:(int)arg1;
@property(retain, nonatomic, setter=_tsaxSetDarkHandle:) TMALimitsSliderAccessibilityDragHandleElement *_tsaxDarkHandle;
@property(retain, nonatomic, setter=_tsaxSetMidHandle:) TMALimitsSliderAccessibilityDragHandleElement *_tsaxMidHandle;
@property(retain, nonatomic, setter=_tsaxSetLightHandle:) TMALimitsSliderAccessibilityDragHandleElement *_tsaxLightHandle;

@end

