//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAChartInspectorPaneSubControllerWithUnderlyingController.h"

@class NSArrayController, NSString;

@interface TMAChartGraphicDetailInspectorSubController : TMAChartInspectorPaneSubControllerWithUnderlyingController
{
    NSString *mPropertyToInspect;
    NSArrayController *mArrayController;
}

+ (Class)graphicDetailClass;
@property(retain, nonatomic) NSArrayController *arrayController; // @synthesize arrayController=mArrayController;
@property(copy, nonatomic) NSString *propertyToInspect; // @synthesize propertyToInspect=mPropertyToInspect;
- (void)deactivateColorWells;
- (void)p_selectionWillChange;
- (void)setupViewForUnderlyingController:(id)arg1;
- (id)newUnderlyingController;
@property(readonly, nonatomic) double spaceAtTop;
@property(readonly, nonatomic) double spaceAtBottom;
- (void)dealloc;
- (id)init;

@end

