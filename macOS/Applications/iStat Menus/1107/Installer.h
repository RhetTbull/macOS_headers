//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BJAButton, BJACheckbox, InstallerBundle, NSObject<InstallerDelegate>, NSProgressIndicator, NSTabView, NSView, NSXPCConnection;

@interface Installer : NSObject
{
    BOOL _upgrade;
    BOOL _restoreV4;
    NSView *_view;
    NSObject<InstallerDelegate> *_delegate;
    InstallerBundle *_installer;
    BJAButton *_installButton;
    BJAButton *_installButtonRetry;
    BJAButton *_uninstallButton;
    BJAButton *_uninstallCancelButton;
    BJAButton *_uninstallRetryButton;
    BJACheckbox *_allUsersCheckbox;
    NSTabView *_tabs;
    NSProgressIndicator *_progress;
    BJACheckbox *_openAtLogin;
    BJAButton *_startButton;
    BJAButton *_startQuitButton;
    NSXPCConnection *_agentConnection;
}

+ (id)sharedInstaller;
@property(retain, nonatomic) NSXPCConnection *agentConnection; // @synthesize agentConnection=_agentConnection;
@property(retain, nonatomic) BJAButton *startQuitButton; // @synthesize startQuitButton=_startQuitButton;
@property(retain, nonatomic) BJAButton *startButton; // @synthesize startButton=_startButton;
@property(retain, nonatomic) BJACheckbox *openAtLogin; // @synthesize openAtLogin=_openAtLogin;
@property(retain, nonatomic) NSProgressIndicator *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSTabView *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) BJACheckbox *allUsersCheckbox; // @synthesize allUsersCheckbox=_allUsersCheckbox;
@property(retain, nonatomic) BJAButton *uninstallRetryButton; // @synthesize uninstallRetryButton=_uninstallRetryButton;
@property(retain, nonatomic) BJAButton *uninstallCancelButton; // @synthesize uninstallCancelButton=_uninstallCancelButton;
@property(retain, nonatomic) BJAButton *uninstallButton; // @synthesize uninstallButton=_uninstallButton;
@property(retain, nonatomic) BJAButton *installButtonRetry; // @synthesize installButtonRetry=_installButtonRetry;
@property(retain, nonatomic) BJAButton *installButton; // @synthesize installButton=_installButton;
@property(retain, nonatomic) InstallerBundle *installer; // @synthesize installer=_installer;
@property(retain, nonatomic) NSObject<InstallerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
@property(nonatomic) BOOL restoreV4; // @synthesize restoreV4=_restoreV4;
@property(nonatomic) BOOL upgrade; // @synthesize upgrade=_upgrade;
- (void).cxx_destruct;
- (BOOL)isLaptop;
- (id)temporaryCopyNameForPath:(id)arg1;
- (void)uninstallFailed;
- (id)temporaryCopyNameForPath:(id)arg1 postfix:(id)arg2;
- (void)uninstall;
- (void)removeComponents;
- (void)installFailed;
- (void)releaseFromQuarantine:(id)arg1;
- (void)install;
- (id)relauncherTemporaryPath;
- (void)pause:(CDUnknownBlockType)arg1;
- (BOOL)hasRequiredFiles;
- (BOOL)isInstalledAndValid;
- (void)hide;
- (void)showStart;
- (void)showUninstall;
- (void)showInstall;
- (void)showError;
- (void)showThemePicker;
- (void)selectedTheme:(id)arg1;
- (void)help:(id)arg1;
- (void)loadView;
- (void)cancelUninstall;
- (id)init;

@end

