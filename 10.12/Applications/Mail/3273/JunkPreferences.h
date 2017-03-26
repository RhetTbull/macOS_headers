//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPreferencesModule.h>

@class NSButton, NSColor, NSMatrix;

@interface JunkPreferences : NSPreferencesModule
{
    long long _junkMailBehavior;
    NSButton *_advancedButton;
    NSMatrix *_junkMailMode;
    NSButton *_junkMailOnOffSwitch;
    NSMatrix *_junkMailWhitelist;
}

+ (id)keyPathsForValuesAffectingIsAdvancedEnabled;
+ (id)keyPathsForValuesAffectingIsEnabled;
+ (id)keyPathsForValuesAffectingLabelColor;
@property(nonatomic) __weak NSMatrix *junkMailWhitelist; // @synthesize junkMailWhitelist=_junkMailWhitelist;
@property(nonatomic) __weak NSButton *junkMailOnOffSwitch; // @synthesize junkMailOnOffSwitch=_junkMailOnOffSwitch;
@property(nonatomic) __weak NSMatrix *junkMailMode; // @synthesize junkMailMode=_junkMailMode;
@property(nonatomic) __weak NSButton *advancedButton; // @synthesize advancedButton=_advancedButton;
- (void).cxx_destruct;
- (void)showCustomJunkMailSettings:(id)arg1;
- (void)resetJunkMailMap:(id)arg1;
- (void)changeJunkMailBehavior:(id)arg1;
@property(readonly, nonatomic) BOOL isAdvancedEnabled;
@property(readonly, nonatomic) BOOL isEnabled;
@property(nonatomic) long long junkMailBehavior;
- (void)whitelistChanged:(id)arg1;
- (void)junkMailToggled:(id)arg1;
- (void)initializeFromDefaults;
@property(readonly, nonatomic) NSColor *labelColor;
- (id)imageForPreferenceNamed:(id)arg1;
- (id)titleForIdentifier:(id)arg1;
- (void)_messageRuleChanged:(id)arg1;
- (BOOL)isResizable;
- (void)moduleWasInstalled;
- (void)moduleWillBeRemoved;

@end

