//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHChartAccessibilityElement.h"

@class NSString, TSCHChartAxisLabelsLayoutItemAccessibility;

@interface TSCHChartAxisLabelAccessibilityElement : TSCHChartAccessibilityElement
{
    unsigned long long _labelIndex;
    TSCHChartAxisLabelsLayoutItemAccessibility *_axisLabelsLayoutItem;
    struct CGRect _boundingRect;
}

- (void)setBoundingRect:(struct CGRect)arg1;
@property(nonatomic) TSCHChartAxisLabelsLayoutItemAccessibility *axisLabelsLayoutItem; // @synthesize axisLabelsLayoutItem=_axisLabelsLayoutItem;
@property(nonatomic) unsigned long long labelIndex; // @synthesize labelIndex=_labelIndex;
- (id)description;
- (void)invalidate;
- (id)elementTypeDescription;
- (struct CGRect)elementFrameInScreenSpace;
- (struct CGRect)boundingRect;
@property(readonly, nonatomic) NSString *labelString;
- (id)initWithAccessibilityParent:(id)arg1 forChartRep:(id)arg2;
- (id)initWithAccessibilityParent:(id)arg1 withLabelIndex:(unsigned long long)arg2 chartRep:(id)arg3 axisLabelsLayoutItem:(id)arg4;
- (id)accessibilityRole;
- (id)accessibilityTitle;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityParent;

@end

