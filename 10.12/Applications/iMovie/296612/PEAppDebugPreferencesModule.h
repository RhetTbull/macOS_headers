//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <LunaKit/LKPreferencesModule.h>

@class LKButton, NSView;

@interface PEAppDebugPreferencesModule : LKPreferencesModule
{
    NSView *_view;
    LKButton *_enableCreativeAnalysisButton;
}

- (id)titleForIdentifier:(id)arg1;
- (void)clearUserDefaultsAlertsDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)clearUserDefaults:(id)arg1;
- (void)awakeFromNib;
- (BOOL)isResizable;
- (id)imageForPreferenceNamed:(id)arg1;

@end

