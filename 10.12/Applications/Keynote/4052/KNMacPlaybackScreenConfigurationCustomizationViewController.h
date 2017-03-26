//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSPopoverDelegate-Protocol.h"

@class KNMacPlaybackScreenConfigurationController, KNMacPlaybackScreenConfigurationCustomizationGridView, KNMacPlaybackScreenConfigurationPickerViewController, KNPresenterDisplayTimerConfiguration, NSButton, NSLayoutConstraint, NSPopover, NSString, NSView;
@protocol KNMacPlaybackScreenConfigurationCustomizationViewControllerDelegate;

@interface KNMacPlaybackScreenConfigurationCustomizationViewController : NSViewController <NSPopoverDelegate>
{
    KNPresenterDisplayTimerConfiguration *mPresenterDisplayTimerConfiguration;
    id <KNMacPlaybackScreenConfigurationCustomizationViewControllerDelegate> mDelegate;
    NSView *mForegroundView;
    KNMacPlaybackScreenConfigurationCustomizationGridView *mGridView;
    KNMacPlaybackScreenConfigurationPickerViewController *mConfigurationPickerViewController;
    NSPopover *mConfigurationPopover;
    BOOL mIsViewHidden;
    BOOL mIsUpdatingScreenConfigurationFromScreenViewController;
    BOOL mIsUpdatingPresenterDisplayConfigurationFromScreenViewController;
    BOOL mIsUpdatingPresenterDisplayTimerConfigurationFromScreenViewController;
    BOOL mAllowsTImeRemainingTimerMode;
    KNMacPlaybackScreenConfigurationController *mScreenConfigurationController;
    NSLayoutConstraint *mGridViewWidthConstraintToRemove;
    NSLayoutConstraint *mGridViewHeightConstraintToRemove;
    NSButton *mConfigurationPickerButton;
    NSView *mPopoverPlacementView;
}

@property(retain, nonatomic) NSView *popoverPlacementView; // @synthesize popoverPlacementView=mPopoverPlacementView;
@property(retain, nonatomic) NSButton *configurationPickerButton; // @synthesize configurationPickerButton=mConfigurationPickerButton;
@property(retain, nonatomic) KNMacPlaybackScreenConfigurationCustomizationGridView *gridView; // @synthesize gridView=mGridView;
@property(retain, nonatomic) NSView *foregroundView; // @synthesize foregroundView=mForegroundView;
@property(nonatomic) id <KNMacPlaybackScreenConfigurationCustomizationViewControllerDelegate> delegate; // @synthesize delegate=mDelegate;
@property(nonatomic) BOOL allowsTimeRemainingTimerMode; // @synthesize allowsTimeRemainingTimerMode=mAllowsTImeRemainingTimerMode;
@property(copy, nonatomic) KNPresenterDisplayTimerConfiguration *presenterDisplayTimerConfiguration; // @synthesize presenterDisplayTimerConfiguration=mPresenterDisplayTimerConfiguration;
@property(retain, nonatomic) NSLayoutConstraint *gridViewHeightConstraintToRemove; // @synthesize gridViewHeightConstraintToRemove=mGridViewHeightConstraintToRemove;
@property(retain, nonatomic) NSLayoutConstraint *gridViewWidthConstraintToRemove; // @synthesize gridViewWidthConstraintToRemove=mGridViewWidthConstraintToRemove;
@property(readonly, nonatomic) KNMacPlaybackScreenConfigurationController *screenConfigurationController; // @synthesize screenConfigurationController=mScreenConfigurationController;
- (void)popoverDidClose:(id)arg1;
- (void)p_setConfigurationButtonTitle;
- (void)p_setUpConfigurationPickerPopover;
- (void)closeAllPopovers;
- (struct CATransform3D)p_hiddenForegroundLayerTransform;
- (void)p_addExtraLayerAnimationsForHidingView:(BOOL)arg1;
- (void)hideViewAnimated:(BOOL)arg1;
- (void)showViewAnimated:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_closeWithReturnCode:(long long)arg1;
- (void)cancelOperation:(id)arg1;
- (void)configurationButtonPressed:(id)arg1;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (void)p_updatePrimaryPresenterDisplayToPresenterDisplayFromScreenViewController:(id)arg1;
- (void)p_updatePresenterDisplayTimerConfigurationFromScreenViewController:(id)arg1;
- (void)p_updateScreenConfigurationWithOldScreenType:(long long)arg1 newScreenType:(long long)arg2 fromScreenViewController:(id)arg3;
- (void)p_updateScreenViewControllersForAllowsTimeRemainingTimerMode;
- (void)p_updateScreenViewControllersForPresenterDisplayTimerConfiguration;
- (void)p_updateScreenViewControllersForScreenConfiguration;
- (void)loadView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithScreenConfigurationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

