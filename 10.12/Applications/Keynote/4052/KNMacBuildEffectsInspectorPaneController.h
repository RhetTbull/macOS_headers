//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorPaneGroupController.h"

#import "KNMacEffectChooserPopoverButtonDelegate-Protocol.h"
#import "KNMacEffectListViewControllerDelegate-Protocol.h"

@class KNMacBuildInspectorHelper, KNMacEffectAttributesPaneController, KNMacEffectChooserInspectorPaneController, KNMacEffectChooserPopoverButton, KNMacEffectListViewController, NSString;

@interface KNMacBuildEffectsInspectorPaneController : TMAInspectorPaneGroupController <KNMacEffectChooserPopoverButtonDelegate, KNMacEffectListViewControllerDelegate>
{
    KNMacEffectListViewController *mEffectListViewController;
    KNMacEffectChooserInspectorPaneController *mChooserPane;
    KNMacEffectAttributesPaneController *mAttributesUIPane;
    TMAInspectorPaneGroupController *mBuildAttributesPane;
    KNMacEffectChooserPopoverButton *mCurrentEffectChooserPopoverButton;
    KNMacBuildInspectorHelper *mInspectorHelper;
    long long mAnimationType;
}

+ (id)paneForAnimationType:(long long)arg1;
@property(readonly, nonatomic) long long animationType; // @synthesize animationType=mAnimationType;
@property(readonly, nonatomic) KNMacBuildInspectorHelper *inspectorHelper; // @synthesize inspectorHelper=mInspectorHelper;
- (BOOL)effectList:(id)arg1 shouldAllowPreviewOfAnimationInfo:(id)arg2;
- (void)effectList:(id)arg1 previewAnimationInfo:(id)arg2;
- (id)p_infoFromBuildOrNullStandIn:(id)arg1;
- (id)p_objectsSortedByInfoPosition:(id)arg1;
- (id)p_infosToSelectFromObjects:(id)arg1;
- (id)p_selectionBehaviorForInfos:(id)arg1;
- (void)effectList:(id)arg1 didSelectAnimationInfo:(id)arg2;
- (void)effectChooserPopoverButtonDidHideEffectList;
- (void)effectChooserPopoverButton:(id)arg1 willShowEffectList:(id)arg2;
- (void)p_previewBuilds:(id)arg1;
- (void)p_previewButtonPressed:(id)arg1;
- (id)p_previewTarget;
- (id)p_effectListForAddActionAttribute;
- (id)p_buildAttributesPane;
- (id)p_effectChooserPane;
- (id)p_chooserEffectListController;
- (id)p_noSelectionPlaceholderText;
- (id)p_effectAnimationSortDescriptors;
- (id)p_buildInspectors;
- (id)p_pathEditor;
- (BOOL)p_pathEditorIsEditingPathWithSingleNode;
- (void)p_updateAddEffectButtonEnabledState;
- (void)setRepresentedObject:(id)arg1;
- (BOOL)commitEditing;
- (void)updatePanes;
- (void)loadView;
- (void)unbind;
- (id)initWithAnimationType:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

