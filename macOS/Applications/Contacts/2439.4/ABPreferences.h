//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPreferences.h>

@class ABAccountsPreferencesModule, ABTemplatePreferencesModule;
@protocol ABPreferencesDelegate;

@interface ABPreferences : NSPreferences
{
    id <ABPreferencesDelegate> _delegate;
    ABTemplatePreferencesModule *_templatePreferencesModule;
    ABAccountsPreferencesModule *_accountsPreferencesModule;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) ABAccountsPreferencesModule *accountsPreferencesModule; // @synthesize accountsPreferencesModule=_accountsPreferencesModule;
@property(retain, nonatomic) ABTemplatePreferencesModule *templatePreferencesModule; // @synthesize templatePreferencesModule=_templatePreferencesModule;
@property(nonatomic) __weak id <ABPreferencesDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showTemplatePreferences;
- (void)showAccountsPreferences;
- (void)applicationWillTerminate:(id)arg1;
- (BOOL)usesButtons;
- (void)cleaup;
- (BOOL)windowShouldClose:(id)arg1;
- (void)dealloc;
- (id)init;

@end

