//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFSettingsCell.h>

@class UISwitch;

@interface WFSettingsSwitchCell : WFSettingsCell
{
    UISwitch *_switchControl;
}

@property(readonly, nonatomic) __weak UISwitch *switchControl; // @synthesize switchControl=_switchControl;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

