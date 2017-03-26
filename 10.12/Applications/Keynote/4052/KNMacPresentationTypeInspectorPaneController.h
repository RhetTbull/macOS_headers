//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorPaneController.h"

@class NSNumberFormatter;

@interface KNMacPresentationTypeInspectorPaneController : TMAInspectorPaneController
{
    NSNumberFormatter *_autoplayTransitionDelayFormatter;
    NSNumberFormatter *_autoplayBuildDelayFormatter;
}

+ (id)keyPathsForValuesAffectingCanEditAutoplayDelays;
+ (id)nibName;
@property(retain, nonatomic) NSNumberFormatter *autoplayBuildDelayFormatter; // @synthesize autoplayBuildDelayFormatter=_autoplayBuildDelayFormatter;
@property(retain, nonatomic) NSNumberFormatter *autoplayTransitionDelayFormatter; // @synthesize autoplayTransitionDelayFormatter=_autoplayTransitionDelayFormatter;
- (id)p_show;
- (id)p_showProxy;
@property(readonly, nonatomic) BOOL canEditAutoplayDelays;
- (void)loadView;
- (void)dealloc;

@end

