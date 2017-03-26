//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNMacEffectAttribute.h"

@class KNMacEffectStepperTextEntryFieldViewController, KNMacEffectTriggerMenuController, NSString;

@interface KNMacEffectTriggerAttribute : KNMacEffectAttribute
{
    NSString *mLocalizedAttributeTitle;
    KNMacEffectStepperTextEntryFieldViewController *mDelayTextFieldController;
    KNMacEffectTriggerMenuController *mTriggerMenuController;
}

- (void)discardEditing;
- (id)p_triggerView;
@property(nonatomic) BOOL useCompressedLayout;
@property(copy, nonatomic) NSString *delayTextFieldToolTip;
@property(copy, nonatomic) NSString *triggerMenuToolTip;
- (void)loadView;
- (id)initWithTriggerAttributeKeyPath:(id)arg1 triggerMenuKeyPath:(id)arg2 localizedTriggerTitle:(id)arg3 delayKeyPath:(id)arg4 delayEnabledKeyPath:(id)arg5 triggerEnabledKeyPath:(id)arg6 maximumDelay:(double)arg7 selectedModelObjectsController:(id)arg8;
- (void)dealloc;

@end

