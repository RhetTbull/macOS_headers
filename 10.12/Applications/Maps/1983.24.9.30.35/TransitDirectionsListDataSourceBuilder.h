//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteStep, NSArray, NSColor, NSMutableArray, NVRoute;

__attribute__((visibility("hidden")))
@interface TransitDirectionsListDataSourceBuilder : NSObject
{
    NSColor *_currentLineColor;
    unsigned long long _stepIdx;
    GEOComposedRouteStep *_currentStep;
    unsigned long long _segmentRangeLocation;
    unsigned long long _segmentRangeLength;
    NSMutableArray *_mutableItems;
    NSMutableArray *_mutableSegmentRanges;
    struct NVRoute *_route;
}

+ (id)spacerForItem:(id)arg1;
@property(readonly) NVRoute *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (id)_titleForWaypoint:(id)arg1;
- (id)_destinationTitle;
- (id)_destinationItem;
- (id)_originTitle;
- (id)_originItem;
- (id)_blockTransferItemWithBoardItem:(id)arg1;
- (id)_incidentItemWithIncidentMessage:(id)arg1;
- (id)_operatingHoursItemWithBoardStep:(id)arg1;
- (id)_passStopSubItemForSteps:(id)arg1 boardStep:(id)arg2 currentRideDuration:(unsigned int)arg3 toLineColor:(id)arg4;
- (id)_transitTripBoardItem;
- (id)_fareItemForStep:(id)arg1 lineColor:(id)arg2 alternateLineColor:(id)arg3 parentItem:(id)arg4;
- (void)_consumeTransitTripLeg;
- (void)_populateAccessPointArtworkForItem:(id)arg1 fromStepsInPreferedOrder:(id)arg2;
- (void)_populateAccessPointArtworkForItem:(id)arg1 fromStep:(id)arg2;
- (void)_populateStationArtworkForItem:(id)arg1 fromStepsInPreferedOrder:(id)arg2;
- (void)_populateStationArtworkForItem:(id)arg1 fromStep:(id)arg2;
- (id)_artworksForIntraSystemTransferBetweenAlightingStep:(id)arg1 andBoardingStep:(id)arg2 currentLineColor:(id)arg3;
- (id)_imageForInterSystemTransferBetweenAlightingStep:(id)arg1 andBoardingStep:(id)arg2 currentLineColor:(id)arg3 dimmedOrigin:(BOOL)arg4;
- (id)_nextStepWithManeuver:(int)arg1 beforeManeuver:(int)arg2;
- (id)_nextTransferStepBeforeBoarding;
- (void)_createTransferItem;
- (id)_nextLeaveStopStep;
- (id)_incidentItemForExitOrTransferSection:(id)arg1 alightStep:(id)arg2;
- (id)_mergeTransitRoutingIncidentsForSteps:(id)arg1;
- (void)_createExitItem;
- (unsigned long long)_startRangeIndexForAlightItem:(id)arg1;
- (void)_consumeAlightStep;
- (id)_goToStopItemForStep:(id)arg1;
- (void)_consumeGoToStop;
- (id)_walkingItemForWalkingLeg:(id)arg1;
- (void)_consumeWalkingLeg;
- (void)_injectSpacers;
- (void)_buildItems;
@property(readonly, nonatomic) GEOComposedRoute *composedRoute;
@property(readonly, nonatomic) NSArray *segmentRanges;
@property(readonly, nonatomic) NSArray *items;
- (id)initWithRoute:(struct NVRoute *)arg1;

@end

