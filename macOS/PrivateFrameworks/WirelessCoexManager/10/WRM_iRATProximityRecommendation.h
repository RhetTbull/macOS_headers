//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WRM_iRATProximityRecommendationLogging;

@interface WRM_iRATProximityRecommendation : NSObject
{
    BOOL _linkRecommendationIsValid;
    BOOL _linkIsRecommended;
    int _RecommendationType;
    WRM_iRATProximityRecommendationLogging *_metrics;
}

@property(retain, nonatomic) WRM_iRATProximityRecommendationLogging *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) BOOL linkIsRecommended; // @synthesize linkIsRecommended=_linkIsRecommended;
@property(nonatomic) BOOL linkRecommendationIsValid; // @synthesize linkRecommendationIsValid=_linkRecommendationIsValid;
@property(nonatomic) int RecommendationType; // @synthesize RecommendationType=_RecommendationType;
- (void)dealloc;
- (id)init;

@end

