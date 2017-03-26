//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAChartInspectorPaneGroupController.h"

@class NSArrayController, NSTextField, TMAChartReferenceEditorPaneController;

@interface TMAChartMultiDataSetNameInspectorController : TMAChartInspectorPaneGroupController
{
    BOOL mNeedsUpdateDataSetNameFormulas;
    NSArrayController *mChartsArrayController;
    NSTextField *_nameTextField;
    TMAChartReferenceEditorPaneController *_refEditorController;
}

+ (id)p_keyPathForDataSetNameFormulas;
+ (unsigned long long)sortOrder;
+ (id)chartEditorProxyVisibilityKey;
+ (id)tabIdentifier;
+ (id)nibName;
@property(nonatomic) TMAChartReferenceEditorPaneController *refEditorController; // @synthesize refEditorController=_refEditorController;
@property(nonatomic) NSTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(retain, nonatomic) NSArrayController *chartsArrayController; // @synthesize chartsArrayController=mChartsArrayController;
- (void)p_updateDataSetNameFormulas;
- (void)updatePanes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)loadView;
- (double)spaceBelow;
- (double)adjustSpaceAbove;

@end

