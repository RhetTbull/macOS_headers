//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACUIAccountsTableViewControllerDelegate-Protocol.h"

@class ACAccount, ACUIAccountsTableViewController, CALPreferencesDelegatesController, CalManagedObjectContext, NSBox, NSButton, NSDatePicker, NSLayoutConstraint, NSManagedObjectID, NSMatrix, NSMenu, NSMutableArray, NSPanel, NSPopUpButton, NSProgressIndicator, NSSecureTextField, NSSegmentedControl, NSString, NSTabView, NSTabViewItem, NSTextField, NSView, NSWindow;

@interface CALPreferencesAccountsPaneController : NSObject <ACUIAccountsTableViewControllerDelegate>
{
    NSTabView *_tabView;
    NSTabViewItem *_accountInformationTabViewItem;
    NSTabViewItem *_serverSettingsTabViewItem;
    BOOL _serverSettingsTabViewItemIsHidden;
    NSTabViewItem *_delegatesTabViewItem;
    NSButton *_accountEnabledButton;
    NSTextField *_accountDescriptionLabel;
    NSTextField *_accountDescriptionText;
    struct CGPoint _accountDescriptionTextOriginalOrigin;
    struct CGPoint _accountDescriptionTextShiftedOrigin;
    NSTextField *_loginLabel;
    NSTextField *_loginText;
    NSString *_defaultLoginLabelValue;
    struct CGPoint _loginTextOriginalOrigin;
    struct CGPoint _loginTextShiftedOrigin;
    NSTextField *_passwordLabel;
    NSSecureTextField *_passwordText;
    NSTextField *_fullNameLabel;
    NSTextField *_fullNameTextField;
    NSTextField *_refreshIntervalLabel;
    struct CGPoint _refreshIntervalLabelOriginalOrigin;
    struct CGPoint _refreshIntervalLabelShiftedOrigin;
    NSLayoutConstraint *_refreshIntervalTopToLoginConstraint;
    NSPopUpButton *_refreshIntervalMenu;
    struct CGPoint _refreshIntervalMenuOriginalOrigin;
    struct CGPoint _refreshIntervalMenuShiftedOrigin;
    NSMenu *_refreshIntervalsNormalMenu;
    NSMenu *_refreshIntervalsWithoutPushMenu;
    NSMenu *_refreshIntervalsWithoutOneMinuteIntervalMenu;
    NSMenu *_refreshIntervalsWithoutPushAndOneMinuteIntervalMenu;
    NSSegmentedControl *_addAndRemove;
    NSTextField *_noPrincipalsLabel;
    NSMutableArray *_officeHours;
    BOOL _officeHoursEdited;
    NSView *_officeHoursView;
    NSTextField *_officeHoursLabelField;
    NSTextField *_officeHoursUnavailableField;
    NSProgressIndicator *_officeHoursSpinner;
    NSTextField *_fetchingOfficeHoursField;
    NSDatePicker *_officeHoursStartTimePicker;
    NSTextField *_officeHoursToTextField;
    NSDatePicker *_officeHoursEndTimePicker;
    NSButton *_officeHoursWeekdaysButton;
    NSButton *_officeHoursCustomButton;
    NSButton *_officeHoursEditButton;
    NSPanel *_officeHoursSheet;
    NSMatrix *_officeHoursDays;
    NSBox *_officeHoursStarts;
    NSBox *_officeHoursEnds;
    NSTextField *_serverAddressTextField;
    NSTextField *_serverPathTextField;
    NSTextField *_portTextField;
    NSButton *_useSSLButton;
    NSButton *_useKerberosSwitch;
    NSTextField *_externalServerAddressTextField;
    NSTextField *_externalServerPathTextField;
    NSTextField *_externalPortTextField;
    NSButton *_externalUseSSLButton;
    NSTextField *_serverAddressLabel;
    NSTextField *_internalServerAddressLabel;
    NSTextField *_externalServerAddressLabel;
    NSTextField *_externalServerPathLabel;
    NSTextField *_externalPortLabel;
    NSBox *_externalSeparatorLine;
    BOOL _forceAvailabilityLookup;
    CALPreferencesDelegatesController *_accountsDelegatesController;
    ACUIAccountsTableViewController *_accountsTableViewController;
    NSView *_accountsTableViewPlaceholder;
    CalManagedObjectContext *_managedObjectContext;
    ACAccount *_selectedAccount;
    ACAccount *_selectedParentAccount;
    NSWindow *_window;
    NSManagedObjectID *_previouslyEditedAccountManagedObjectID;
}

+ (void)initialize;
@property(retain) NSManagedObjectID *previouslyEditedAccountManagedObjectID; // @synthesize previouslyEditedAccountManagedObjectID=_previouslyEditedAccountManagedObjectID;
@property(retain) NSString *defaultLoginLabelValue; // @synthesize defaultLoginLabelValue=_defaultLoginLabelValue;
@property(retain) NSTabViewItem *delegatesTabViewItem; // @synthesize delegatesTabViewItem=_delegatesTabViewItem;
@property(retain) NSTabViewItem *serverSettingsTabViewItem; // @synthesize serverSettingsTabViewItem=_serverSettingsTabViewItem;
@property(retain) NSTabViewItem *accountInformationTabViewItem; // @synthesize accountInformationTabViewItem=_accountInformationTabViewItem;
@property __weak NSWindow *window; // @synthesize window=_window;
@property(retain) ACAccount *selectedParentAccount; // @synthesize selectedParentAccount=_selectedParentAccount;
@property(retain) ACAccount *selectedAccount; // @synthesize selectedAccount=_selectedAccount;
@property(retain) CalManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain) NSView *accountsTableViewPlaceholder; // @synthesize accountsTableViewPlaceholder=_accountsTableViewPlaceholder;
@property(retain) ACUIAccountsTableViewController *accountsTableViewController; // @synthesize accountsTableViewController=_accountsTableViewController;
- (void).cxx_destruct;
- (void)groupsChangedExternally:(id)arg1;
- (void)contextObjectsDidChange:(id)arg1;
- (void)editAccountButtonClicked:(id)arg1;
- (void)officeHoursSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)cancelOfficeHoursSheet:(id)arg1;
- (void)hideOfficeHoursSheet:(id)arg1;
- (void)officeHoursSheetDateDidEndEditing:(id)arg1;
- (void)officeHoursCheckboxClicked:(id)arg1;
- (void)showOfficeHoursSheet:(id)arg1;
- (void)officeHoursDateDidEndEditing:(id)arg1;
- (void)officeHoursCustomButtonClicked;
- (void)officeHoursWeekdaysButtonClicked;
- (void)officeHoursButtonClicked:(id)arg1;
- (void)_updateOfficeHoursWithFoundHours:(id)arg1;
- (void)useKerberos:(id)arg1;
- (void)saveAccountChanges:(id)arg1;
- (void)setRefreshInterval:(id)arg1;
- (void)removeAccount;
- (void)addRemoveAccount:(id)arg1;
- (BOOL)selectDelegate:(id)arg1;
- (BOOL)selectAccount:(id)arg1;
- (void)accountOnlineStatusDidChange:(id)arg1;
- (void)accountOnlineStatusDidChangeOnMainThread:(id)arg1;
- (void)showAccountsHelp:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)setupAccounts:(id)arg1;
- (void)didRefreshAccounts;
- (void)didSelectAccount:(id)arg1;
- (id)subTitleOverrideForAccount:(id)arg1;
- (id)makeServerURLFromTextFields;
- (id)makeServerExternalURLFromTextFields;
- (id)makeURLFromAddress:(id)arg1 port:(id)arg2 useSSL:(BOOL)arg3;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)isPushAvailableForCurrentPrincipal;
- (void)showOrHideViews;
- (void)_setOfficeHoursEdited;
- (BOOL)_saveOfficeHoursIfNecessary;
- (void)_updateSelectedAccountAndSave:(BOOL)arg1 refreshDelegateList:(BOOL)arg2;
- (void)_updateSelectedAccountAndSave:(BOOL)arg1;
- (BOOL)_saveAccount:(id)arg1 hasChanges:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_saveAccount:(id)arg1 error:(id *)arg2;
- (void)_configureUIForSelectedAccountHelperShowHideAvailabilityFields:(BOOL)arg1;
- (void)_configureUIForSelectedAccountHelperSetupTabs:(id)arg1 accountIsAListAccount:(BOOL)arg2;
- (void)_configureUIForSelectedAccountHelperSetupServerAddressFields:(id)arg1 mainPrincipal:(id)arg2;
- (void)_configureUIForSelectedAccountHelperSetupRefreshInterval:(id)arg1 accountIsAListAccount:(BOOL)arg2;
- (void)_configureUIForSelectedAccountHelperSetupKerberosFields:(id)arg1;
- (void)_configureUIForSelectedAccountHelperSetupDelegates:(id)arg1;
- (void)_configureUIForSelectedAccountHelperSetupAvailabilityFields:(id)arg1 mainPrincipal:(id)arg2;
- (void)_configureUIForSelectedAccountHelperSetupAccountFields:(id)arg1 mainPrincipal:(id)arg2 accountIsAListAccount:(BOOL)arg3;
- (void)_configureUIForSelectedAccountRefreshDelegateList:(BOOL)arg1;
- (void)_awakeFromNibHelperSetupAccountsTableViewController;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

