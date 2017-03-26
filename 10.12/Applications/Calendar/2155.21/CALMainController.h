//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

#import "CalCalendarPopupTarget-Protocol.h"
#import "CalUICalendarListViewDropDelegate-Protocol.h"
#import "CalUISplitViewControllerDelegate-Protocol.h"
#import "NSSplitViewDelegate-Protocol.h"
#import "NSTouchBarProvider-Protocol.h"
#import "NSUserActivityDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class APLPrintController, CALCMManager, CALImportProgressController, CALUserActionManager, CALViewSwitcherSegmentedControl, CALWindow, CalCustomAlertController, CalEventStore, CalManagedObjectContext, CalMessagePopoverController, CalMessageTableController, CalQuickEventPopoverController, CalResendInvitationsController, CalTouchBarController, CalUICalendarListViewController, CalUICalendarSidebar, CalUICalendarViewsController, CalUIEventEditingManager, CalUINewFeaturesView, CalUISearchViewController, CalUISelectionManager, CalUISplitViewController, NSArray, NSDate, NSMutableDictionary, NSMutableSet, NSObject, NSSet, NSSplitViewItem, NSString, NSTouchBar, NSURL;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CALMainController : NSResponder <NSTouchBarProvider, CalUISplitViewControllerDelegate, CalCalendarPopupTarget, NSWindowDelegate, NSSplitViewDelegate, NSUserActivityDelegate, CalUICalendarListViewDropDelegate>
{
    BOOL _canvasIsScrolling;
    BOOL _sheetNotificationBlocked;
    BOOL _isFullScreen;
    BOOL _isInModalSheet;
    BOOL _isQuitEnabled;
    BOOL _shouldReloadSidebar;
    BOOL _windowWillClose;
    BOOL _isEnteringFullScreen;
    BOOL _isExitingFullScreen;
    BOOL _shouldOverlaySearchSidebarInFullScreen;
    BOOL _updatingTextPending;
    BOOL _didBeginDelayedSetup;
    BOOL _noboDidMoveToSuperview;
    BOOL _shouldPostNoBo;
    BOOL _wantsDeferredSetupAfterEventStoreInitialization;
    BOOL _eventStoreIsInitialized;
    BOOL _calendarsHaveLoadedAfterLaunch;
    CalEventStore *_eventStore;
    CALWindow *_window;
    CALCMManager *_cmManager;
    CALUserActionManager *_userActionManager;
    CalUISelectionManager *_selectionManager;
    CalUIEventEditingManager *_eventEditingManager;
    CalUISearchViewController *_searchViewController;
    CalMessageTableController *_messageTableController;
    CalMessagePopoverController *_messagePopoverController;
    CalUICalendarViewsController *_calendarViewsController;
    CalResendInvitationsController *_invitationsController;
    CalManagedObjectContext *_persistentContext;
    NSObject<OS_dispatch_group> *_sidebarLoadingGroup;
    NSURL *_iCalURLForDeferredOpen;
    NSString *_filenameForDeferredOpen;
    CalTouchBarController *_touchBarController;
    NSMutableSet *_principalIDsWithErrorDialogs;
    NSMutableDictionary *_currentlyRunningSharingTaskGroups;
    NSString *_delegateAccountUID;
    NSDate *_lastUpdatingTextChange;
    NSSet *_cachedCheckedCalendarIDs;
    NSArray *_cachedCheckedCalendars;
    CalCustomAlertController *_customAlertController;
    CalUISplitViewController *_mainSplitViewController;
    NSSplitViewItem *_calendarSidebarItem;
    NSSplitViewItem *_calendarContainerItem;
    NSSplitViewItem *_searchSidebarItem;
    CalUINewFeaturesView *_calendarNewFeaturesView;
    CalUICalendarSidebar *_calendarSidebar;
    CALViewSwitcherSegmentedControl *_viewSwitcher;
    APLPrintController *_printController;
    CalQuickEventPopoverController *_quickEventPopoverController;
    CALImportProgressController *_importProgressController;
    NSMutableDictionary *_queueViewers;
    NSObject<OS_dispatch_queue> *_deferredSetupQueue;
    NSMutableDictionary *_principleIDsBusyStatus;
}

+ (unsigned long long)defaultStartHourForNewEvents;
+ (void)eventDidCommit:(id)arg1;
+ (void)setLastCreatedEventLocalUID:(id)arg1;
+ (id)lastCreatedEventLocalUID;
+ (id)rangeToPrefetchAfterLaunchWithStartDate:(id)arg1 viewName:(id)arg2;
+ (id)rangeToPrefetchOnLaunchWithStartDate:(id)arg1 viewName:(id)arg2;
+ (id)rangeToPrefetchOnLaunch;
+ (id)launchDate;
+ (id)launchViewName;
+ (void)warmupEventKitCacheForRange:(id)arg1 inStore:(id)arg2;
+ (void)logPerfFor:(id)arg1;
+ (BOOL)documentHasEvents:(id)arg1;
@property(retain) NSMutableDictionary *principleIDsBusyStatus; // @synthesize principleIDsBusyStatus=_principleIDsBusyStatus;
@property BOOL calendarsHaveLoadedAfterLaunch; // @synthesize calendarsHaveLoadedAfterLaunch=_calendarsHaveLoadedAfterLaunch;
@property BOOL eventStoreIsInitialized; // @synthesize eventStoreIsInitialized=_eventStoreIsInitialized;
@property BOOL wantsDeferredSetupAfterEventStoreInitialization; // @synthesize wantsDeferredSetupAfterEventStoreInitialization=_wantsDeferredSetupAfterEventStoreInitialization;
@property(retain) NSObject<OS_dispatch_queue> *deferredSetupQueue; // @synthesize deferredSetupQueue=_deferredSetupQueue;
@property(retain) NSMutableDictionary *queueViewers; // @synthesize queueViewers=_queueViewers;
@property(retain) CALImportProgressController *importProgressController; // @synthesize importProgressController=_importProgressController;
@property BOOL shouldPostNoBo; // @synthesize shouldPostNoBo=_shouldPostNoBo;
@property BOOL noboDidMoveToSuperview; // @synthesize noboDidMoveToSuperview=_noboDidMoveToSuperview;
@property BOOL didBeginDelayedSetup; // @synthesize didBeginDelayedSetup=_didBeginDelayedSetup;
@property BOOL updatingTextPending; // @synthesize updatingTextPending=_updatingTextPending;
@property BOOL shouldOverlaySearchSidebarInFullScreen; // @synthesize shouldOverlaySearchSidebarInFullScreen=_shouldOverlaySearchSidebarInFullScreen;
@property BOOL isExitingFullScreen; // @synthesize isExitingFullScreen=_isExitingFullScreen;
@property BOOL isEnteringFullScreen; // @synthesize isEnteringFullScreen=_isEnteringFullScreen;
@property(retain, nonatomic) CalQuickEventPopoverController *quickEventPopoverController; // @synthesize quickEventPopoverController=_quickEventPopoverController;
@property(retain) APLPrintController *printController; // @synthesize printController=_printController;
@property(retain) CALViewSwitcherSegmentedControl *viewSwitcher; // @synthesize viewSwitcher=_viewSwitcher;
@property(retain) CalUICalendarSidebar *calendarSidebar; // @synthesize calendarSidebar=_calendarSidebar;
@property(retain) CalUINewFeaturesView *calendarNewFeaturesView; // @synthesize calendarNewFeaturesView=_calendarNewFeaturesView;
@property(retain) NSSplitViewItem *searchSidebarItem; // @synthesize searchSidebarItem=_searchSidebarItem;
@property(retain) NSSplitViewItem *calendarContainerItem; // @synthesize calendarContainerItem=_calendarContainerItem;
@property(retain) NSSplitViewItem *calendarSidebarItem; // @synthesize calendarSidebarItem=_calendarSidebarItem;
@property(retain) CalUISplitViewController *mainSplitViewController; // @synthesize mainSplitViewController=_mainSplitViewController;
@property(retain) CalCustomAlertController *customAlertController; // @synthesize customAlertController=_customAlertController;
@property(retain) NSArray *cachedCheckedCalendars; // @synthesize cachedCheckedCalendars=_cachedCheckedCalendars;
@property(retain) NSSet *cachedCheckedCalendarIDs; // @synthesize cachedCheckedCalendarIDs=_cachedCheckedCalendarIDs;
@property(retain, nonatomic) NSDate *lastUpdatingTextChange; // @synthesize lastUpdatingTextChange=_lastUpdatingTextChange;
@property(copy) NSString *delegateAccountUID; // @synthesize delegateAccountUID=_delegateAccountUID;
@property(retain) NSMutableDictionary *currentlyRunningSharingTaskGroups; // @synthesize currentlyRunningSharingTaskGroups=_currentlyRunningSharingTaskGroups;
@property(retain) NSMutableSet *principalIDsWithErrorDialogs; // @synthesize principalIDsWithErrorDialogs=_principalIDsWithErrorDialogs;
@property(retain) CalTouchBarController *touchBarController; // @synthesize touchBarController=_touchBarController;
@property(retain) NSString *filenameForDeferredOpen; // @synthesize filenameForDeferredOpen=_filenameForDeferredOpen;
@property(retain) NSURL *iCalURLForDeferredOpen; // @synthesize iCalURLForDeferredOpen=_iCalURLForDeferredOpen;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *sidebarLoadingGroup; // @synthesize sidebarLoadingGroup=_sidebarLoadingGroup;
@property(readonly) CalManagedObjectContext *persistentContext; // @synthesize persistentContext=_persistentContext;
@property(retain) CalResendInvitationsController *invitationsController; // @synthesize invitationsController=_invitationsController;
@property(retain) CalUICalendarViewsController *calendarViewsController; // @synthesize calendarViewsController=_calendarViewsController;
@property(retain, nonatomic) CalMessagePopoverController *messagePopoverController; // @synthesize messagePopoverController=_messagePopoverController;
@property(retain) CalMessageTableController *messageTableController; // @synthesize messageTableController=_messageTableController;
@property(retain) CalUISearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain) CalUIEventEditingManager *eventEditingManager; // @synthesize eventEditingManager=_eventEditingManager;
@property(retain) CalUISelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(retain) CALUserActionManager *userActionManager; // @synthesize userActionManager=_userActionManager;
@property(retain) CALCMManager *cmManager; // @synthesize cmManager=_cmManager;
@property(retain) CALWindow *window; // @synthesize window=_window;
@property BOOL windowWillClose; // @synthesize windowWillClose=_windowWillClose;
@property BOOL shouldReloadSidebar; // @synthesize shouldReloadSidebar=_shouldReloadSidebar;
@property BOOL isQuitEnabled; // @synthesize isQuitEnabled=_isQuitEnabled;
@property BOOL isInModalSheet; // @synthesize isInModalSheet=_isInModalSheet;
@property BOOL isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property BOOL sheetNotificationBlocked; // @synthesize sheetNotificationBlocked=_sheetNotificationBlocked;
@property BOOL canvasIsScrolling; // @synthesize canvasIsScrolling=_canvasIsScrolling;
@property(retain) CalEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (void).cxx_destruct;
- (void)importFiles:(id)arg1 toCalendar:(id)arg2;
- (void)moveEvent:(id)arg1 toCalendar:(id)arg2;
- (void)restoreUserActivityState:(id)arg1;
- (void)updateUserActivityState:(id)arg1;
- (void)userActivityWillSave:(id)arg1;
- (void)_trackUserActivityType:(id)arg1 activityObject:(id)arg2 invalidate:(BOOL)arg3;
- (void)trackDateSelection:(id)arg1;
- (void)trackEventSelection:(id)arg1;
- (void)_setMainUserActivity:(id)arg1;
- (id)_mainUserActivity;
- (void)updateTouchBar;
@property(readonly) NSTouchBar *touchBar;
- (BOOL)validateMenuItem:(id)arg1;
- (id)windowWillReturnUndoManager:(id)arg1;
- (void)closeInlineInspector;
- (void)errorStateDidUpdate:(id)arg1;
- (BOOL)_shouldAutoshowCalDAVError:(id)arg1;
- (BOOL)_shouldAutoshowExchangeError:(id)arg1;
- (void)handleErrorForPrincipalID:(id)arg1;
- (void)moveEvents:(id)arg1 toCalendar:(id)arg2;
- (BOOL)shouldCopyEventOnDrag:(id)arg1 toCalendar:(id)arg2;
- (void)moveAllSelectedEventsToCalendar:(id)arg1;
- (void)calendarSelected:(id)arg1;
- (void)endPropogatingLegacyChangesToEK;
- (void)beginPropogatingLegacyChangesToEK;
- (void)selectNextSectionFromSection:(long long)arg1 forward:(BOOL)arg2;
- (long long)nextSectionFromSection:(long long)arg1 forward:(BOOL)arg2;
- (BOOL)selectCalTabSection:(long long)arg1 forward:(BOOL)arg2;
- (BOOL)selectSearchResults;
- (BOOL)selectToolbarForwards:(BOOL)arg1;
- (BOOL)selectMainViewForwards:(BOOL)arg1;
- (BOOL)selectCalendarList;
- (void)newCalendarSubmenuNeedsUpdate:(id)arg1;
- (BOOL)_allowLocalCalendarCreation;
- (void)newSubmenuNeedsUpdateOldBroken:(id)arg1;
- (void)newSubmenuNeedsUpdate:(id)arg1;
- (void)fileMenuNeedsUpdate:(id)arg1;
- (void)addCalendar:(id)arg1 select:(BOOL)arg2 edit:(BOOL)arg3;
- (void)newGroup:(id)arg1;
- (void)newCalendarInGroup:(id)arg1;
- (void)newLocalCalendar:(id)arg1;
- (void)newCalendar:(id)arg1;
- (unsigned long long)nextNodeOrderForNodes:(id)arg1;
- (id)checkedManagedCalendars;
- (id)managedCalendars;
- (id)_managedCalendarsFromEKCalendars:(id)arg1;
- (id)checkedCalendars;
- (id)checkedCalendarIDs;
- (id)calendars;
- (unsigned long long)numberOfCalendars;
- (id)nodes;
- (void)selectCalendar:(id)arg1;
- (void)reloadCalendars;
- (BOOL)isDefaultCalendarLastSelected;
- (void)setDefaultCalendarToLastSelected;
- (void)setDefaultCalendarToFirstServerCalendar;
- (void)setDefaultManagedCalendar:(id)arg1 userSelected:(BOOL)arg2;
- (void)setDefaultCalendar:(id)arg1 userSelected:(BOOL)arg2;
- (void)setDefaultManagedCalendar:(id)arg1;
- (id)defaultManagedCalendar;
- (id)defaultCalendar;
- (id)listViewNodeForSelectedOrSender:(id)arg1;
- (id)selectedOrSenderNode:(id)arg1;
- (id)selectedManagedCalendar;
- (id)selectedCalendar;
- (void)toggleCalendarAvailability:(id)arg1;
- (void)_queueHelperForSender:(id)arg1 nibName:(id)arg2 groupType:(Class)arg3 viewerType:(Class)arg4;
- (void)showExchangeQueue:(id)arg1;
- (void)showCalDAVQueue:(id)arg1;
- (void)copyLinkToClipboard:(id)arg1;
- (void)changeLocation:(id)arg1;
- (void)sendPublishEmail:(id)arg1;
- (void)resendInvitations:(id)arg1;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)unpublish:(id)arg1;
- (void)stopSharing:(id)arg1;
- (void)stopSharingSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)publishNode:(id)arg1;
- (void)publish:(id)arg1;
- (void)showSharingPopoverForNode:(id)arg1;
- (void)showSharingPopover:(id)arg1;
- (void)windowDidDeminiaturize:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowDidFailToExitFullScreen:(id)arg1;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)windowDidFailToEnterFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (void)_updateWindowLayoutForFullScreen:(BOOL)arg1;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)timeZoneEnabledPrefChanged:(id)arg1;
- (void)overlayCalendarPrefChanged:(id)arg1;
- (void)checkQueueStatus:(id)arg1;
- (void)indicateInvitationIsNotValid;
- (BOOL)isAddressBookOK;
- (void)fileSystemChanged:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)performClose:(id)arg1;
- (void)performZoom:(id)arg1;
- (void)performMiniaturize:(id)arg1;
- (void)windowWillBecomeVisible:(id)arg1;
- (void)prepareWindowForTermination;
- (void)saveVisibleDates;
- (void)saveSidebarState;
- (void)saveViewRects;
- (void)visibleDateRangeChanged;
- (void)immediateActionRecognizerWillBeginAnimation:(id)arg1 forOccurrence:(id)arg2;
- (void)immediateActionRecognizerWillPrepare:(id)arg1 forOccurrence:(id)arg2;
- (void)showUIOccurrence:(id)arg1 event:(id)arg2 openInspector:(BOOL)arg3 inspectorType:(int)arg4 restoreDraft:(BOOL)arg5;
- (void)showUIOccurrence:(id)arg1 event:(id)arg2 openInspector:(BOOL)arg3 inspectorType:(int)arg4;
- (void)showEvent:(id)arg1 openInspector:(BOOL)arg2 inspectorType:(int)arg3;
- (void)showEventWithEventOccurrenceID:(id)arg1 openInspector:(BOOL)arg2;
- (void)showEventWithLegacyOccurrenceID:(id)arg1 openInspector:(BOOL)arg2;
- (BOOL)isInlineInspectorOpenForEventOccurrenceID:(id)arg1;
- (id)windowUID;
@property(readonly) CalUICalendarListViewController *calendarListViewController;
- (id)calendarListDataSource;
- (void)openRetargetableInspector;
- (void)toggleRetargetableInspector;
- (void)openStandaloneInspector;
- (id)inlineInspector;
- (id)inspectorManager;
- (void)updateNoBo;
- (void)resetMiniMonths;
- (void)splitViewItem:(id)arg1 didChangeCollapsed:(BOOL)arg2 animated:(BOOL)arg3;
- (void)splitViewItem:(id)arg1 willChangeCollapsed:(BOOL)arg2 animated:(BOOL)arg3;
- (void)splitViewDidEndResize:(id)arg1;
- (void)splitViewWillBeginResize:(id)arg1;
- (BOOL)searchSidebarIsShown;
- (void)toggleSearchSidebarVisibility:(id)arg1;
- (void)setSearchSidebarShown:(BOOL)arg1;
- (BOOL)calendarSidebarIsShown;
- (void)toggleCalendarSidebarVisibility:(id)arg1;
- (void)setCalendarSidebarShown:(BOOL)arg1;
- (void)entriesInNoBoHasChanged;
- (void)_showNobo:(BOOL)arg1;
- (void)showNotificationBox:(id)arg1;
- (void)updateUpdatingText:(BOOL)arg1 forceUpdate:(BOOL)arg2;
- (void)_scheduleTitleUpdate;
- (void)_setUpdatingText:(BOOL)arg1;
- (void)showAlertForSourceErrors;
- (void)errorsChangedNotification:(id)arg1;
- (void)principalStatusDidChange:(id)arg1;
- (void)handleGoogleAuthNotification:(id)arg1;
- (void)initAccessibility;
- (void)printCalendars:(id)arg1;
- (void)toggleFullScreen:(id)arg1;
- (void)moveToBeginningOfLine:(id)arg1;
- (void)moveToEndOfLine:(id)arg1;
- (void)makeTextSmaller:(id)arg1;
- (void)makeTextBigger:(id)arg1;
- (void)moveBackward:(id)arg1;
- (void)moveForward:(id)arg1;
- (void)switchToYearView:(id)arg1;
- (void)switchToMonthView:(id)arg1;
- (void)switchToWeekView:(id)arg1;
- (void)switchToDayView:(id)arg1;
- (void)goToDay:(id)arg1;
- (void)goToCurrentDay:(id)arg1;
- (void)showInspector:(id)arg1;
- (void)editEvent:(id)arg1;
- (void)getInfo:(id)arg1;
- (void)saveChangesToEvent:(id)arg1;
- (void)saveNewEventAndOpenInspector:(id)arg1;
- (void)focusOnMainView;
- (id)eventWithStartDate:(id)arg1 endDate:(id)arg2 allDay:(BOOL)arg3 title:(id)arg4 location:(id)arg5 calendar:(id)arg6;
- (void)_prepareWindowForEventCreation;
- (void)newEventAtDate:(id)arg1 isAllDay:(BOOL)arg2;
- (void)addEventClicked:(id)arg1;
- (void)newEventCommand:(id)arg1;
- (void)eventsChanged:(id)arg1;
- (void)eventsImportedNotification:(id)arg1;
- (void)eventsChangedNotification:(id)arg1;
- (void)eventsUpdatedNotification:(id)arg1;
- (BOOL)isEventCreationValidInCalendar:(id)arg1;
- (void)setCalendarViewTo:(id)arg1 withStartDate:(id)arg2;
- (id)findNewStartDate;
- (void)setCalendarViewTo:(id)arg1;
- (void)switchToYearView;
- (void)switchToMonthView;
- (void)switchToWeekView;
- (void)switchToOneDayView;
- (id)activeDateInCanvas;
- (id)titleDateInCanvas;
- (void)goToDate:(id)arg1;
- (id)newFeaturesView;
- (void)calendarStoreResetExternallyNotificationHandler:(id)arg1;
@property(readonly) BOOL isRefreshable;
- (BOOL)mergeCalendar:(id)arg1 withCalendar:(id)arg2 prompt:(BOOL)arg3;
- (void)_mergeCalendar:(id)arg1 withCalendar:(id)arg2;
- (void)merge:(id)arg1;
- (void)populateMergeSubMenu:(id)arg1 forNode:(id)arg2;
- (void)screenResolutionChangedNotificationHandler:(id)arg1;
- (void)datetimeFormatChangedNotificationHandler:(id)arg1;
- (id)currentViewName;
- (void)find:(id)arg1;
- (BOOL)isSearchActive;
- (void)searchDidFinish:(id)arg1;
- (void)dismissImportDialog;
- (void)showImportDialogWithMessage:(id)arg1;
- (id)resendInvitationsController;
- (id)publishController;
- (id)subscribeController;
- (id)mainCalendarView;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)stopSheetModal:(id)arg1;
- (void)beginSheetModal:(id)arg1 withQuit:(BOOL)arg2 withUserNotification:(BOOL)arg3 stayHidden:(BOOL)arg4;
- (void)beginSheetModal:(id)arg1;
- (void)didStopSheetModal:(id)arg1;
- (void)willStopSheetModal:(id)arg1;
- (void)didBeginSheetModal:(id)arg1 withQuit:(BOOL)arg2 withUserNotification:(BOOL)arg3;
- (void)willBeginSheetModal:(id)arg1 withQuit:(BOOL)arg2 withUserNotification:(BOOL)arg3 stayHidden:(BOOL)arg4;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)beSureWindowIsVisible;
- (void)beSureWindowIsVisibleForSheet:(BOOL)arg1;
- (void)saveWindowFrameUsingName:(id)arg1;
- (void)selectionDidChange;
- (void)calendarsDidChange;
- (void)checkedCalendarsDidChange;
- (void)noboDidMoveToSuperview:(id)arg1;
- (void)deferredSetup;
- (BOOL)isMainWindowController;
- (void)windowWillCloseNotification:(id)arg1;
- (void)dealloc;
- (void)removeFromNotificationCenter;
- (id)initWithDelegateUID:(id)arg1;
- (void)delayedSetup;
- (void)allVisibleOccurrenceContainersDidFinishDisplay;
- (void)pruneCacheToAppropriateRange;
- (void)prefetchAdditionalEventsAfterAllVisibleContainersLoaded;
- (void)_handleCalendarItemExternalIdentifierURL:(id)arg1;
- (void)_handleOpenDateURL:(id)arg1;
- (id)dateFromDateString:(id)arg1;
- (void)handleICalURL:(id)arg1;
- (id)bestPrincipalForMessage:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)_attendeeInMessage:(id)arg1 matchesMainPrincipal:(id)arg2 inContext:(id)arg3;
- (BOOL)openFile:(id)arg1;
- (id)_guessImportCalendarRequiringSource:(id)arg1;
- (id)_defaultImportCalendarRequiringSource:(id)arg1;
- (BOOL)_url:(id)arg1 matchesDomainForURL:(id)arg2;
- (id)_matchingAttendeeAddressesFrom:(id)arg1 inPrincipal:(id)arg2;
- (BOOL)_isAnyAttendeeAddressFrom:(id)arg1 equivalentTo:(id)arg2;
- (BOOL)_findPreferredSourceForMessage:(id)arg1 inContext:(id)arg2 result:(id *)arg3;
- (BOOL)_warnAboutDroppingReminders:(unsigned long long)arg1;
- (id)pathForDragAtURL:(id)arg1 withName:(id)arg2;
- (BOOL)exportCalendar:(id)arg1 toURL:(id)arg2;
- (void)exportPanelDidEnd:(id)arg1 returnCode:(long long)arg2 calendarToExport:(id)arg3;
- (void)export:(id)arg1;
- (void)import:(id)arg1;
- (void)_forceUpdateEKAndUIAfterImportOfManagedObjectIDs:(id)arg1 inContext:(id)arg2;
- (BOOL)importFiles:(id)arg1 toEventCalendar:(id)arg2 context:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)importFiles:(id)arg1 toEventCalendar:(id)arg2 context:(id)arg3 options:(unsigned long long)arg4;
- (BOOL)importFiles:(id)arg1 toCalendar:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)importFiles:(id)arg1 toCalendar:(id)arg2 options:(unsigned long long)arg3;
- (id)_createCalendarForFirstFileWithEvents:(id)arg1 context:(id)arg2;
- (void)_warnAboutDroppingReminders:(unsigned long long)arg1 files:(id)arg2;
- (BOOL)_displayDialogForIssue:(id)arg1 issueCount:(unsigned long long)arg2 totalEvents:(unsigned long long)arg3 dismissPermanently:(BOOL)arg4 answerCallBack:(CDUnknownBlockType)arg5;
- (void)_showICSImportDialog;
- (BOOL)_importFilesForDrag:(id)arg1;
- (BOOL)importCalendarFilesForDrag:(id)arg1;
- (void)exchangeWarningSheetDidEndWithCancel:(BOOL)arg1 contextInfo:(id)arg2;
- (void)exchangeErrorSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)importFinalizeCalendarFromVCS:(id)arg1 numMalformedEntities:(long long)arg2 inManagedObjectContext:(id)arg3;
- (void)importVCSFinishedWithNumMalformedEntities:(unsigned long long)arg1 inCalendar:(id)arg2;
- (BOOL)importVCSFile:(id)arg1 toCalendar:(id *)arg2 numMalformedEntities:(unsigned long long *)arg3 inManagedObjectContext:(id)arg4 numReminders:(unsigned long long *)arg5;
- (id)createImportCalendarFromFile:(id)arg1 withTitle:(id)arg2 withNotes:(id)arg3 isEvent:(BOOL)arg4 isTask:(BOOL)arg5 withColor:(id)arg6 inManagedObjectContext:(id)arg7;
- (id)createImportCalendarFromICS:(id)arg1 fromFile:(id)arg2 isEvent:(BOOL)arg3 isTask:(BOOL)arg4 inManagedObjectContext:(id)arg5;
- (id)_topmostPrincipal;
- (id)_calendarEntityNameForPrincipal:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

