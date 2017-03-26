//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DChartElementProperties.h"

@class TSCH3DArray2D, TSCH3DLabelResources, TSCH3DTransform;

@interface TSCH3DChartMutableElementProperties : TSCH3DChartElementProperties
{
    TSCH3DArray2D *mLightingModels;
    TSCH3DLabelResources *mLabels;
    TSCH3DTransform *mChartTransform;
    TSCH3DTransform *mElementsTransform;
}

@property(retain, nonatomic) TSCH3DTransform *elementsTransform; // @synthesize elementsTransform=mElementsTransform;
@property(retain, nonatomic) TSCH3DTransform *chartTransform; // @synthesize chartTransform=mChartTransform;
@property(retain, nonatomic) TSCH3DLabelResources *labels; // @synthesize labels=mLabels;
@property(retain, nonatomic) TSCH3DArray2D *lightingModels; // @synthesize lightingModels=mLightingModels;
- (id)renderingLightingModelForSeries:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

