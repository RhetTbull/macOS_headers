//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHChartRepAccessibilityElementProvider.h"

@class TSCH3DChartRepAccessibility, TSCHChartBodyAccessibilityElement, TSCHChartTitleAccessibilityElement;

@interface TSCH3DChartRepAccessibilityElementProvider : TSCHChartRepAccessibilityElementProvider
{
    TSCHChartTitleAccessibilityElement *_titleElement;
    TSCHChartBodyAccessibilityElement *_bodyElement;
}

- (void)_makeChartDataElementsForBodyElement:(id)arg1 projectedElementsBounds:(id)arg2;
- (void)_makeChartBodyContainerElementsForBodyElement:(id)arg1 projectedElementsBounds:(id)arg2;
- (void)makeChartBodyAccessibilityElementsForBodyElement:(id)arg1 projectedElementsBounds:(id)arg2;
- (void)makeChartValueAxesWithProjectedElementsBounds:(id)arg1;
- (void)makeChartCategoryAxisWithProjectedElementsBounds:(id)arg1;
- (void)invalidateElements;
- (id)chart3DSceneAccessibilityElementsForLayoutItem:(id)arg1;
- (id)additionalAccessibilityElementsForLayoutItem:(id)arg1 withParent:(id)arg2;
- (BOOL)series:(id)arg1 hasValidValueAtIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) TSCH3DChartRepAccessibility *parent3DChartRep;
@property(readonly, nonatomic) TSCHChartBodyAccessibilityElement *bodyElement; // @synthesize bodyElement=_bodyElement;
@property(readonly, nonatomic) TSCHChartTitleAccessibilityElement *titleElement; // @synthesize titleElement=_titleElement;

@end

