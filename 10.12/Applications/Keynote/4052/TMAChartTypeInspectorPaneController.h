//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAChartInspectorPaneController.h"

@class NSArrayController;

@interface TMAChartTypeInspectorPaneController : TMAChartInspectorPaneController
{
    NSArrayController *mChartsArrayController;
}

+ (int)defaultDisclosureState;
+ (id)disclosureButtonTitleForEditingState:(id)arg1;
+ (unsigned long long)sortOrder;
+ (id)chartEditorProxyVisibilityKey;
+ (id)tabIdentifier;
+ (id)nibName;
@property(retain) NSArrayController *chartsArrayController; // @synthesize chartsArrayController=mChartsArrayController;
- (void)dealloc;

@end

