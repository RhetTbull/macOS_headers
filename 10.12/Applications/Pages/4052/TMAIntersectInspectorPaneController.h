//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMALayoutInspectingInspectorPaneController.h"

@class NSSegmentedControl, NSTextField;

@interface TMAIntersectInspectorPaneController : TMALayoutInspectingInspectorPaneController
{
    NSSegmentedControl *_optionsSegmentedControl;
    NSTextField *_uniteLabel;
    NSTextField *_intersectLabel;
    NSTextField *_subtractLabel;
    NSTextField *_excludeLabel;
}

@property(nonatomic) NSTextField *excludeLabel; // @synthesize excludeLabel=_excludeLabel;
@property(nonatomic) NSTextField *subtractLabel; // @synthesize subtractLabel=_subtractLabel;
@property(nonatomic) NSTextField *intersectLabel; // @synthesize intersectLabel=_intersectLabel;
@property(nonatomic) NSTextField *uniteLabel; // @synthesize uniteLabel=_uniteLabel;
@property(nonatomic) NSSegmentedControl *optionsSegmentedControl; // @synthesize optionsSegmentedControl=_optionsSegmentedControl;
- (void)intersectPaths:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (id)nibName;

@end

