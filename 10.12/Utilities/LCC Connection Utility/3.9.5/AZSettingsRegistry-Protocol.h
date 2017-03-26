//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@protocol AZSettingsRegistry
- (bycopy id)setActor:(in bycopy id)arg1;
- (oneway void)removeActiveSettingsForHIDDevice:(in bycopy id)arg1 forApplication:(in bycopy id)arg2;
- (oneway void)removeActiveSettingsForElement:(in bycopy id)arg1 forApplication:(in bycopy id)arg2;
- (bycopy id)setActiveSettings:(in bycopy id)arg1 forHIDDevice:(in bycopy id)arg2 forApplication:(in bycopy id)arg3;
- (bycopy id)setActiveSettings:(in bycopy id)arg1 forElement:(in bycopy id)arg2 forApplication:(in bycopy id)arg3;
- (bycopy id)activeSettingsForHIDDevice:(in bycopy id)arg1 forApplication:(in bycopy id)arg2;
- (bycopy id)activeSettingsForElement:(in bycopy id)arg1 forApplication:(in bycopy id)arg2;
- (bycopy id)activeSettingsForHIDDevice:(in bycopy id)arg1;
- (bycopy id)activeSettingsForElement:(in bycopy id)arg1;
- (bycopy id)activeSettings;
- (bycopy id)data:(in bycopy id)arg1 forKey:(in bycopy id)arg2;
- (oneway void)removeDeviceSettingsForHIDDevice:(in bycopy id)arg1 forKey:(id)arg2;
- (oneway void)removeDeviceSettingsForElement:(in bycopy id)arg1 forKey:(id)arg2;
- (oneway void)setDeviceSettings:(id)arg1 forHIDDevice:(in bycopy id)arg2 forKey:(in bycopy id)arg3;
- (oneway void)setDeviceSettings:(id)arg1 forElement:(in bycopy id)arg2 forKey:(in bycopy id)arg3;
- (bycopy id)deviceSettingsForHIDDevice:(in bycopy id)arg1 forKey:(in bycopy id)arg2;
- (bycopy id)deviceSettingsForElement:(in bycopy id)arg1 forKey:(in bycopy id)arg2;
- (oneway void)setGlobalSetting:(in bycopy id)arg1 forKey:(in bycopy id)arg2;
- (bycopy id)globalSettingForKey:(in bycopy id)arg1;
- (bycopy id)defaultsForHIDDevice:(in bycopy id)arg1 forApplication:(in bycopy id)arg2;
- (bycopy id)defaultsForElement:(in bycopy id)arg1 forApplication:(in bycopy id)arg2;
@end

