//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol GEOTransitRoutingIncidentMessage;

__attribute__((visibility("hidden")))
@interface RoutePlanningError : NSObject
{
    BOOL _errorViewShouldShowRoutingApps;
    BOOL _errorViewShouldShowRegularDirectionsFallback;
    NSString *_errorTitle;
    NSString *_errorMessage;
    long long _errorCode;
    NSURL *_errorViewFeatureAvailabilityPunchoutURL;
    id <GEOTransitRoutingIncidentMessage> _incidentMessage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> incidentMessage; // @synthesize incidentMessage=_incidentMessage;
@property(readonly, nonatomic) NSURL *errorViewFeatureAvailabilityPunchoutURL; // @synthesize errorViewFeatureAvailabilityPunchoutURL=_errorViewFeatureAvailabilityPunchoutURL;
@property(readonly, nonatomic) BOOL errorViewShouldShowRegularDirectionsFallback; // @synthesize errorViewShouldShowRegularDirectionsFallback=_errorViewShouldShowRegularDirectionsFallback;
@property(readonly, nonatomic) BOOL errorViewShouldShowRoutingApps; // @synthesize errorViewShouldShowRoutingApps=_errorViewShouldShowRoutingApps;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(readonly, copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, copy, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
- (void)_updateRegularDirectionsFallbackVisibilityWithError:(id)arg1 transportType:(unsigned long long)arg2;
- (void)_updateRoutingAppsVisibilityWithError:(id)arg1 transportType:(unsigned long long)arg2;
- (BOOL)_buildOutOfCoverageErrorStringsForError:(id)arg1 transportType:(unsigned long long)arg2 origin:(id)arg3 destination:(id)arg4;
- (void)_buildErrorStringsFromError:(id)arg1 transportType:(unsigned long long)arg2 origin:(id)arg3 destination:(id)arg4;
- (id)initWithError:(id)arg1 transportType:(unsigned long long)arg2 origin:(id)arg3 destination:(id)arg4;
- (id)initWithError:(id)arg1 transportType:(unsigned long long)arg2;

@end

