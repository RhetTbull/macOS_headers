//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "RAPMenuQuestion.h"

#import "RAPPlaceMenu-Protocol.h"

@class MKMapItem, NSString, RAPQuestion, RAPTransitLine;
@protocol RAPMenuItem, RAPPlace;

__attribute__((visibility("hidden")))
@interface RAPPlaceMenuQuestion : RAPMenuQuestion <RAPPlaceMenu>
{
    id <RAPPlace> _reportedPlace;
}

@property(readonly, nonatomic) id <RAPPlace> reportedPlace; // @synthesize reportedPlace=_reportedPlace;
- (void).cxx_destruct;
- (id)followUpQuestionForCategory:(long long)arg1;
@property(readonly, nonatomic) MKMapItem *snippetMapItem;
@property(readonly, nonatomic) long long snippetStyle;
- (void)_fillSubmittableProblem:(id)arg1;
@property(readonly, nonatomic) BOOL shouldLoadClaimThisBusiness;
- (id)_alternateMapViewContext;
- (id)mainMenuItems;
@property(readonly, nonatomic) int analyticTarget;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 reportedPlace:(id)arg3;
- (id)initWithReport:(id)arg1 reportedPlace:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) RAPQuestion<RAPMenuItem> *selectedMenuItem;
@property(readonly, nonatomic) BOOL shouldShowIcons;
@property(readonly, nonatomic) BOOL shouldShowSubtitles;
@property(readonly, nonatomic) RAPTransitLine *snippetTransitLine;
@property(readonly) Class superclass;

@end

