//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSOutlineViewDataSource-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"
#import "NSTouchBarProvider-Protocol.h"

@class BatteryGraphManager, NSArray, NSBox, NSButton, NSDictionary, NSImage, NSMatrix, NSMenu, NSMenuItem, NSMutableArray, NSMutableDictionary, NSNumberFormatter, NSOutlineView, NSPanel, NSPopUpButton, NSPopoverTouchBarItem, NSSegmentedControl, NSString, NSTabView, NSTableColumn, NSTextField, NSTimer, NSTouchBar, NSWindow, NetStatManager, SMCPUInfo, SMCPUMonitor, SMDiskInfo, SMNetworkInfo, TotalPowerGraphManager;
@protocol OS_dispatch_queue, OS_sysmon_request, OS_sysmon_row;

@interface SMProcessController : NSObject <NSToolbarDelegate, NSOutlineViewDataSource, NSOutlineViewDelegate, NSTouchBarProvider, NSTouchBarDelegate>
{
    NSWindow *_window;
    NSOutlineView *_outlineView;
    NSTableColumn *_processNameColumn;
    NSTableColumn *_12hrPowerColumn;
    NSTableColumn *_graphicCardColumn;
    NSMenuItem *_columnMenu;
    NSMenu *_viewMenu;
    NSBox *_saveTypeBox;
    NSMatrix *_saveTypeMatrix;
    NSButton *_toolbarGetInfo;
    NSButton *_toolbarForceQuit;
    NSPopUpButton *_toolbarSysDiagnose;
    NSSegmentedControl *_toolbarTabs;
    NSTextField *_filterTextField;
    NSTabView *_tabView;
    NSTextField *_graphicsCardLabel;
    NSTextField *_graphicsCardValue;
    NSMenuItem *_frequencySubmenu;
    NSMenu *_columnsMenu;
    NSMenuItem *_showCPUMonitorsOnTop;
    NSPanel *_signalSheet;
    NSTextField *_signalText;
    NSPopUpButton *_signalPopup;
    NSWindow *_sysdaignoseWaitWindow;
    NSTextField *_sysdaignoseWaitWindowTitle;
    NSDictionary *_columnToMenuTagDict;
    NSString *_filter;
    NSMutableDictionary *_sortedAndFilteredProcesses;
    int _showCategory;
    int _previousShowCategory;
    int _prevShowCategory;
    int _selectedTab;
    NSMutableArray *_previousSelectedItems;
    NSMutableArray *_watchedItems;
    SMCPUInfo *_cpuInfo;
    SMNetworkInfo *_networkInfo;
    SMDiskInfo *_diskInfo;
    SMCPUMonitor *_monitor;
    BatteryGraphManager *_batteryGraphManager;
    TotalPowerGraphManager *_totalPowerGraphManager;
    NSMutableDictionary *_inspectorDict;
    NSTimer *_controlTimer;
    BOOL _displayHierarchy;
    NSNumberFormatter *_sizeFormatter;
    NSNumberFormatter *_threadFormatter;
    NSNumberFormatter *_powerScoreFormatter;
    int _updateIntervalTag;
    void *_lsNotificationID;
    unsigned int _my_uid;
    BOOL _alreadyAwake;
    long long _mtbOnceToken;
    NSTouchBar *_mainTouchBar;
    NSSegmentedControl *_mtbTabControl;
    NSButton *_mtbStopButton;
    NSButton *_mtbInfoButton;
    NSButton *_mtbGearButton;
    NSPopoverTouchBarItem *_mtbGearPopover;
    long long _gtbOnceToken;
    NSTouchBar *_gearTouchBar;
    NSMutableArray *_gearMenuButtons;
    BOOL _sortDirection;
    BOOL _windowOcclusionState;
    BOOL _discreteGPUEnabled;
    NSDictionary *_processes;
    NSArray *_allProcesses;
    NSArray *_placeHolderProcesses;
    NSString *_sortProperty;
    NSImage *_ascendingSortingImage;
    NSImage *_descendingSortingImage;
    unsigned long long _jobTicket;
    NSObject<OS_dispatch_queue> *_sampleQueue;
    NSObject<OS_sysmon_request> *_sysmonRequest;
    NSObject<OS_sysmon_request> *_sysmonSysRequest;
    NSObject<OS_sysmon_row> *_lastSysSysmonRow;
    long long _sysSysmonRowTimeStamp;
    NetStatManager *_netStatManager;
    NSTimer *_updateHistoryTableTimer;
    long long _lastFreeNegativePID;
    NSString *_bundleIDToSelect;
    NSString *_processNameToSelect;
}

+ (void)initialize;
+ (id)processController;
@property BOOL discreteGPUEnabled; // @synthesize discreteGPUEnabled=_discreteGPUEnabled;
@property BOOL windowOcclusionState; // @synthesize windowOcclusionState=_windowOcclusionState;
@property(retain) NSString *processNameToSelect; // @synthesize processNameToSelect=_processNameToSelect;
@property(retain) NSString *bundleIDToSelect; // @synthesize bundleIDToSelect=_bundleIDToSelect;
@property long long lastFreeNegativePID; // @synthesize lastFreeNegativePID=_lastFreeNegativePID;
@property(retain) NSTimer *updateHistoryTableTimer; // @synthesize updateHistoryTableTimer=_updateHistoryTableTimer;
@property(retain) NetStatManager *netStatManager; // @synthesize netStatManager=_netStatManager;
@property long long sysSysmonRowTimeStamp; // @synthesize sysSysmonRowTimeStamp=_sysSysmonRowTimeStamp;
@property(retain) NSObject<OS_sysmon_row> *lastSysSysmonRow; // @synthesize lastSysSysmonRow=_lastSysSysmonRow;
@property(retain) NSObject<OS_sysmon_request> *sysmonSysRequest; // @synthesize sysmonSysRequest=_sysmonSysRequest;
@property(retain) NSObject<OS_sysmon_request> *sysmonRequest; // @synthesize sysmonRequest=_sysmonRequest;
@property(retain) NSObject<OS_dispatch_queue> *sampleQueue; // @synthesize sampleQueue=_sampleQueue;
@property unsigned long long jobTicket; // @synthesize jobTicket=_jobTicket;
@property(retain) NSImage *descendingSortingImage; // @synthesize descendingSortingImage=_descendingSortingImage;
@property(retain) NSImage *ascendingSortingImage; // @synthesize ascendingSortingImage=_ascendingSortingImage;
@property BOOL sortDirection; // @synthesize sortDirection=_sortDirection;
@property(retain) NSString *sortProperty; // @synthesize sortProperty=_sortProperty;
@property(retain) NSArray *placeHolderProcesses; // @synthesize placeHolderProcesses=_placeHolderProcesses;
@property(retain) NSArray *allProcesses; // @synthesize allProcesses=_allProcesses;
@property(retain) NSDictionary *processes; // @synthesize processes=_processes;
- (void).cxx_destruct;
- (void)tbarTabPressed:(id)arg1;
- (void)actionItemPressed:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)gearTouchBar;
@property(readonly) NSTouchBar *touchBar;
- (void)dealloc;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectTableColumn:(id)arg2;
- (void)outlineView:(id)arg1 didDragTableColumn:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (void)_updateSortColumn;
- (id)_deltaDescriptionForLongLong:(id)arg1;
- (id)_deltaSizeStringForValue:(id)arg1 deltaSize:(id)arg2 marked:(BOOL)arg3;
- (id)_deltaDescriptionForDouble:(double)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)selectProcessByBundleID:(id)arg1 orName:(id)arg2;
- (void)selectToolbarTab:(long long)arg1;
- (id)_childrenOfProcess:(id)arg1;
- (void)updateAllInspectors;
- (void)removeInspector:(id)arg1;
- (id)inspectorForProcess:(id)arg1;
- (id)processForPID:(id)arg1;
- (id)filteredProcesses;
- (id)inspectorForPID:(id)arg1;
- (BOOL)pidIsDead:(id)arg1;
- (BOOL)_shouldShowProcess:(id)arg1;
- (void)inspect:(id)arg1;
- (void)quitProcessWithProcess:(id)arg1 window:(id)arg2;
- (void)cancelSignalSheet:(id)arg1;
- (void)sendSignalFromSheet:(id)arg1;
- (void)sendSignalWithProcess:(id)arg1 window:(id)arg2;
- (void)markProcess:(id)arg1;
- (void)sendSignal:(id)arg1;
- (void)quitProcess:(id)arg1;
- (void)forceQuitPID:(int)arg1;
- (void)quitPID:(int)arg1;
- (void)printDocument:(id)arg1;
- (void)printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)changeColumns:(id)arg1;
- (void)filterProcessesAction:(id)arg1;
- (void)selectFilter:(id)arg1;
- (void)clearFilter:(id)arg1;
- (void)filter:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)cancelDiagnose:(id)arg1;
- (void)sysdiagnose:(id)arg1;
- (BOOL)isSafariSelected;
- (BOOL)isMailSelected;
- (BOOL)selectionIncludesProcessWithBundleID:(id)arg1;
- (void)mddiagnose:(id)arg1;
- (void)spindump:(id)arg1;
- (void)sample:(id)arg1;
- (id)stringForDraggedItems:(id)arg1;
- (id)stringForSelectedRows;
- (void)copy:(id)arg1;
- (void)toolbarTabDidChange:(id)arg1;
- (void)showSysDiagnoseMenu:(id)arg1;
- (void)changeExportFormat:(id)arg1;
- (void)toggleCPUWindowsOnTop:(id)arg1;
- (void)updateSysSysmonRequest;
- (void)_updateSysmonRequest;
- (id)_pidsForcingDiscreteGPU;
- (void)changeUpdateFrequency:(id)arg1;
- (void)_sortProcessArray:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)awakeFromNib;
- (void)_occlusionStateDidChangeNotification:(id)arg1;
- (id)_pluginImage;
- (void)_validateToolbarButtons;
- (void)_saveUserColumns;
- (void)_processHistory:(id)arg1 sinceSecondsAgo:(unsigned long long)arg2;
- (void)_updateHistoryTable:(id)arg1;
- (id)_processSysmonTable:(id)arg1 updateTable:(BOOL)arg2;
- (void)_processSysSysmonTable:(id)arg1;
- (void)_updateTabsWithSysmonRow:(id)arg1;
- (void)_updateTable;
- (void)windowWillClose:(id)arg1;
- (id)init;
- (void)_syncColumnsWithTab;
- (id)locString:(id)arg1;
- (unsigned long long)_updateInterval;
- (id)_stringOfActiveURLsForProcess:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

