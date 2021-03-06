//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveExperiments/PREResponsesMetricsProtocol-Protocol.h>

@class NSString, PETEventTracker2;
@protocol PREResponsesTrialProtocol;

@interface PREResponsesMetricsPET : NSObject <PREResponsesMetricsProtocol>
{
    PETEventTracker2 *_tracker;
    NSObject<PREResponsesTrialProtocol> *_trial;
    BOOL _isApricotDevice;
    NSString *_processName;
}

- (void).cxx_destruct;
- (id)tracker;
- (BOOL)isApricotDevice;
- (void)registerResponseTapped:(id)arg1;
- (id)_responseListFromGeneratedEvent:(id)arg1;
- (void)registerResponsesGenerated:(id)arg1;
- (id)initWithTracker:(id)arg1 trial:(id)arg2;
- (id)initWithTrial:(id)arg1;

@end

