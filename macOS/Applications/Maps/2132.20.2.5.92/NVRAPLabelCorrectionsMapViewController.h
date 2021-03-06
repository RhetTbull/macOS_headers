//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NVRAPMapViewController.h"

#import "RAPInstrumentableTarget-Protocol.h"

@class NSString, RAPLabelCorrectionsQuestion;

__attribute__((visibility("hidden")))
@interface NVRAPLabelCorrectionsMapViewController : NVRAPMapViewController <RAPInstrumentableTarget>
{
    BOOL _acquiringContext;
}

- (void)mapView:(id)arg1 willSelectLabelMarker:(id)arg2;
- (void)awakeFromNib;
@property(readonly, nonatomic) int analyticTarget;
- (id)initWithQuestion:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) RAPLabelCorrectionsQuestion *question; // @dynamic question;
@property(readonly) Class superclass;

@end

