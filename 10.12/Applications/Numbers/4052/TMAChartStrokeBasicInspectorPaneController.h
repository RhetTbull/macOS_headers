//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAStrokeBasicInspectorPaneController.h"

@class NSString;

@interface TMAChartStrokeBasicInspectorPaneController : TMAStrokeBasicInspectorPaneController
{
    NSString *mAssociatedShowProperty;
}

@property(copy, nonatomic) NSString *associatedShowProperty; // @synthesize associatedShowProperty=mAssociatedShowProperty;
- (void)updateToSelectedStroke:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)disengageBindings;
- (void)engageBindings;
- (void)loadView;
- (id)p_strokePropertyKeyPath;
- (id)p_showPropertyKeyPath;
- (void)dealloc;

@end

