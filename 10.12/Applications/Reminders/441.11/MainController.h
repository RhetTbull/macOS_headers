//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CalUIWindowDelegate-Protocol.h"
#import "EKViewApplicationDelegate-Protocol.h"
#import "ICSLoggingDelegate-Protocol.h"
#import "NSApplicationDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class ACUISetupManagerViewController, CLPlacemark, CUIKiCloudKVStore, CalMemorySensor, ImportExportController, NSDate, NSMenuItem, NSMutableArray, NSPopover, NSString, ReminderInspectorController, ReminderListInspectorController, RemindersWindowController;

@interface MainController : NSObject <NSMenuDelegate, NSApplicationDelegate, CalUIWindowDelegate, ICSLoggingDelegate, EKViewApplicationDelegate>
{
    CalMemorySensor *_memorySensor;
    BOOL _isExportSheetDisplayed;
    BOOL _accountSetupInProgress;
    NSPopover *_inspectorPopover;
    ReminderInspectorController *_reminderInspector;
    RemindersWindowController *_primaryWindowController;
    CLPlacemark *_homePlacemark;
    CLPlacemark *_workPlacemark;
    ACUISetupManagerViewController *_accountSetupViewController;
    NSDate *_launchTime;
    NSMutableArray *_windowControllers;
    ReminderListInspectorController *_reminderListInspector;
    ImportExportController *_importExportController;
    CUIKiCloudKVStore *_iCloudKVStore;
    NSMenuItem *_toggleConnected;
}

@property(retain) NSMenuItem *toggleConnected; // @synthesize toggleConnected=_toggleConnected;
@property(retain) CUIKiCloudKVStore *iCloudKVStore; // @synthesize iCloudKVStore=_iCloudKVStore;
@property(retain) ImportExportController *importExportController; // @synthesize importExportController=_importExportController;
@property(retain) ReminderListInspectorController *reminderListInspector; // @synthesize reminderListInspector=_reminderListInspector;
@property(retain) NSMutableArray *windowControllers; // @synthesize windowControllers=_windowControllers;
@property(retain) NSDate *launchTime; // @synthesize launchTime=_launchTime;
@property(retain) ACUISetupManagerViewController *accountSetupViewController; // @synthesize accountSetupViewController=_accountSetupViewController;
@property BOOL accountSetupInProgress; // @synthesize accountSetupInProgress=_accountSetupInProgress;
@property BOOL isExportSheetDisplayed; // @synthesize isExportSheetDisplayed=_isExportSheetDisplayed;
@property(retain) CLPlacemark *workPlacemark; // @synthesize workPlacemark=_workPlacemark;
@property(retain) CLPlacemark *homePlacemark; // @synthesize homePlacemark=_homePlacemark;
@property(retain) RemindersWindowController *primaryWindowController; // @synthesize primaryWindowController=_primaryWindowController;
@property(retain) ReminderInspectorController *reminderInspector; // @synthesize reminderInspector=_reminderInspector;
@property(readonly) NSPopover *inspectorPopover; // @synthesize inspectorPopover=_inspectorPopover;
- (void).cxx_destruct;
- (void)createNewEKCalendarItem;
- (id)commitDelegate;
- (id)decisionDelegate;
- (id)undoDelegate;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)logICSMessage:(id)arg1 atLevel:(long long)arg2;
- (void)handleRemindersURL:(id)arg1;
- (void)showList:(id)arg1;
- (void)showListWithUUID:(id)arg1;
- (void)showReminderWithUUID:(id)arg1;
- (void)showReminder:(id)arg1;
- (void)makePrimaryWindowIfNecessary;
- (void)inspectCalendar:(id)arg1 showRelativeToRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)isInspectingCalendar;
- (void)inspectReminderView:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)windowDidClose:(id)arg1;
- (BOOL)multipleWindowsAreOpen;
- (id)mainWindow;
- (id)mainWindowController;
- (id)newWindowWithSelectedLists:(id)arg1 showingSidebar:(BOOL)arg2 sidebarWidth:(double)arg3 showingCalendar:(BOOL)arg4 visibleMonth:(id)arg5 primaryWindow:(BOOL)arg6;
- (id)newWindowWithSelectedLists:(id)arg1 showingSidebar:(BOOL)arg2 showingCalendar:(BOOL)arg3;
- (void)newWindow:(id)arg1;
- (void)newPrimaryWindow;
- (void)showPrimaryWindow:(id)arg1;
- (void)closeWindow:(id)arg1 shouldQuit:(BOOL)arg2;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (id)sharedImportExportController;
- (void)export:(id)arg1;
- (void)import:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)resortRemindersMenuItemClicked:(id)arg1;
- (void)updateRemindersSortOrder:(id)arg1;
- (id)currentReminderSortOrder;
- (void)openAccountsPrefPane:(id)arg1;
- (void)updateViewMenu;
- (BOOL)menu:(id)arg1 updateItem:(id)arg2 atIndex:(long long)arg3 shouldCancel:(BOOL)arg4;
- (long long)numberOfItemsInMenu:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)defaultListChanged:(id)arg1;
- (void)_toggleConnectedState:(id)arg1;
- (void)_createUITestList:(id)arg1;
- (void)setupMainMenu;
- (void)errorsChanged;
- (void)localeOrTimeZoneChanged;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)savePrimaryWindowState;
- (void)refresh;
- (void)orderFrontStandardAboutPanel:(id)arg1;
- (void)cycleThroughWindows:(id)arg1;
- (void)remindersChanged:(id)arg1;
- (void)calendarChanged;
- (void)dealloc;
- (void)updateCommonAddresses;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

