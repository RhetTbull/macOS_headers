//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TopologyViewControllerCommon.h"

#import "AUPasswordSheetControllerDelegate-Protocol.h"
#import "AUTaskControllerDelegate-Protocol.h"
#import "AssistantCallbackUIDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSPopoverDelegate-Protocol.h"
#import "NetTopoViewGestureDelegate-Protocol.h"
#import "SettingsFunctionDelegate-Protocol.h"

@class AUBaseModel, AUDocument, AUMIAPopoverViewController, AUPasswordSheetController, AUProblemMoreInfoViewController, AUSmallInternetViewController, AUSmallSummaryViewController, AUUnsupportedPopoverViewController, NSArray, NSArrayController, NSDictionary, NSImageView, NSLayoutConstraint, NSMutableArray, NSPopUpButton, NSPopover, NSProgressIndicator, NSScrollView, NSString, NSTextField, NSTimer, NSView, NSViewController, NetTopoLayoutRootLayer, NetTopoManager, NetTopoObjectLayer, NetTopoView;

@interface AUTopologyViewController : TopologyViewControllerCommon <AUTaskControllerDelegate, NetTopoViewGestureDelegate, AssistantCallbackUIDelegate, SettingsFunctionDelegate, AUPasswordSheetControllerDelegate, NSPopoverDelegate, NSMenuDelegate>
{
    NetTopoView *_topoView;
    NetTopoManager *_topoManager;
    NetTopoLayoutRootLayer *_topoRootLayer;
    NSScrollView *_topoScrollView;
    NSView *_topoContainerView;
    NSPopUpButton *_newRemoteDevicesMenu;
    NSTextField *_noFoundDevicesLabel;
    NSProgressIndicator *_topoActivityIndicator;
    NSLayoutConstraint *_topoConstraintTop;
    NSLayoutConstraint *_topoConstraintLeft;
    NSLayoutConstraint *_topoConstraintRight;
    NSLayoutConstraint *_topoConstraintBottom;
    NetTopoObjectLayer *_selectedLayer;
    BOOL _askingForPassword;
    BOOL _userInteractedWithThisTopo;
    BOOL _doingProgrammaticTopoBoundsChanging;
    NetTopoObjectLayer *_deferredDisplayDevice;
    NSViewController *_statusController;
    AUMIAPopoverViewController *ppvc;
    AUUnsupportedPopoverViewController *unvc;
    AUSmallSummaryViewController *ssvc;
    AUSmallInternetViewController *sivc;
    AUProblemMoreInfoViewController *problemMoreInfoViewController;
    AUPasswordSheetController *passwordSheetController;
    NSPopover *popover;
    BOOL showSettingsInNewWindow;
    BOOL openSettingsImmediately;
    AUDocument *document;
    AUBaseModel *currentModel;
    NSArrayController *_unconfiguredNetworks;
    NSArrayController *_remoteBaseStations;
    NSMutableArray *_networkInterfaces;
    NSDictionary *_unconfiguredInProgress;
    NSImageView *_unconfiguredBadgeView;
    struct CGSize _defaultPopupMenuSize;
    BOOL _unconfiguredMenuIsSportingWood;
    BOOL _topoViewDidLoad;
    BOOL _handlingFrameResizeNotification;
    BOOL _popoverWillClose;
    BOOL _openUnconfiguredInEditMode;
    BOOL servicingRequiredFirmwareUpdate;
    NSTimer *autostartAssistantTimer;
}

@property(retain, nonatomic) NSDictionary *unconfiguredInProgress; // @synthesize unconfiguredInProgress=_unconfiguredInProgress;
@property(nonatomic) BOOL topoViewDidLoad; // @synthesize topoViewDidLoad=_topoViewDidLoad;
@property(retain, nonatomic) NSTimer *autostartAssistantTimer; // @synthesize autostartAssistantTimer;
@property(nonatomic) BOOL unconfiguredMenuIsSportingWood; // @synthesize unconfiguredMenuIsSportingWood=_unconfiguredMenuIsSportingWood;
@property(retain, nonatomic) AUPasswordSheetController *passwordSheetController; // @synthesize passwordSheetController;
@property(retain, nonatomic) AUProblemMoreInfoViewController *problemMoreInfoViewController; // @synthesize problemMoreInfoViewController;
@property(retain, nonatomic) AUSmallInternetViewController *sivc; // @synthesize sivc;
@property(retain, nonatomic) AUUnsupportedPopoverViewController *unvc; // @synthesize unvc;
@property(retain, nonatomic) AUMIAPopoverViewController *ppvc; // @synthesize ppvc;
@property(retain, nonatomic) AUSmallSummaryViewController *ssvc; // @synthesize ssvc;
@property(retain, nonatomic) NetTopoManager *topoManager; // @synthesize topoManager=_topoManager;
@property(retain, nonatomic) NSArrayController *remoteBaseStations; // @synthesize remoteBaseStations=_remoteBaseStations;
@property(retain, nonatomic) NSArrayController *unconfiguredNetworks; // @synthesize unconfiguredNetworks=_unconfiguredNetworks;
@property(retain, nonatomic) NSImageView *unconfiguredBadgeView; // @synthesize unconfiguredBadgeView=_unconfiguredBadgeView;
@property(retain, nonatomic) NSPopover *popover; // @synthesize popover;
@property(retain, nonatomic) AUBaseModel *currentModel; // @synthesize currentModel;
- (void)passwordSheetControllerDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)errorSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)taskController:(id)arg1 taskComplete:(int)arg2 taskInfo:(id)arg3;
- (void)removeUnconfiguredNetworkOnSuccess;
- (int)callbackAskUserForPassword:(int)arg1 param:(id)arg2 forController:(id)arg3;
- (void)callbackAskCancel;
- (void)dismissProblemMoreInfoSheet;
- (void)updateAnyProblemMoreInfoSheets:(id)arg1;
- (void)startProblemMoreInfoSheetForBaseStation:(id)arg1 problemCode:(unsigned int)arg2;
- (int)callbackFunctionWithParamDict:(id)arg1;
- (void)setupForCleanTopo;
- (void)cancelNoFoundDevicesMessage;
- (void)showNoFoundDevicesMessage;
- (void)initializeNoFoundDevicesMessage;
- (void)cleanupPopover:(BOOL)arg1;
- (void)enterPassword:(id)arg1;
- (void)deviceAssetsUpdated:(id)arg1;
- (void)deviceHasGoneMissing:(id)arg1;
- (void)deviceWasChanged:(id)arg1;
- (void)deviceWasAdded:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedTopologyNodes;
- (void)joinNetworkAndConfigure:(id)arg1;
- (void)newOrRemoteDeviceSelected:(id)arg1;
- (void)fwUpdateSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)requiredFirmwareUpdateAvailabilityChanged:(id)arg1;
- (void)deviceDiscoveryComplete:(id)arg1;
- (void)topologyWillBeDestroyed;
- (void)networkInterfaceRemoved:(id)arg1;
- (void)networkInterfaceAdded:(id)arg1 displayName:(id)arg2;
- (void)deviceHadReadError:(id)arg1 status:(int)arg2;
- (void)deviceHadWriteError:(id)arg1 status:(int)arg2;
- (void)deviceHadTaskError:(id)arg1 taskCode:(unsigned int)arg2 status:(int)arg3;
- (BOOL)okToRunDiscovery;
- (void)remoteAirPortBaseStationRemoved:(id)arg1;
- (id)uniquedUnconfiguredAirPortNetwork;
- (void)remoteAirPortBaseStationAdded:(id)arg1;
- (void)unconfiguredAirPortNetworkRemoved:(id)arg1;
- (void)unconfiguredAirPortNetworkAdded:(id)arg1;
- (id)defaultBaseNameForUnconfiguredItem:(id)arg1;
- (BOOL)handleKeyEquivalent:(id)arg1 withEvent:(id)arg2;
- (void)mouseDownInTopoView:(id)arg1 withEvent:(id)arg2 andTouchedLayer:(id)arg3;
- (void)selectedObjectChanged:(id)arg1;
- (void)okToUseOldSoftwareForNode:(id)arg1;
- (void)displayInfoForNode:(id)arg1;
- (void)showBaseStationInfoInSeparateWindowWithDevice:(id)arg1;
- (void)showBaseStationInfoPopoverWithDevice:(id)arg1;
- (void)showUnsupportedPopoverWithDevice:(id)arg1 reason:(unsigned long long)arg2;
- (void)showMIAPopoverWithDevice:(id)arg1;
- (void)showEnterPasswordPopoverWithDevice:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (BOOL)dismissPopoverIfVisible;
- (void)showPopoverAttachedToDevice:(id)arg1 withContentViewController:(id)arg2 animated:(BOOL)arg3;
- (void)syncTopoContentSize;
- (double)getBestTopoContentScaleForLayoutBounds:(struct CGRect)arg1;
- (void)handleFrameResize;
- (void)frameWasResized:(id)arg1;
- (void)topoBoundsWasChanged:(id)arg1;
- (void)zoomTopoToNewAbsoluteScale:(double)arg1;
- (void)checkAutostartAssistant:(id)arg1;
- (void)setup;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)problemMoreInfoSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)menuDidClose:(id)arg1;
- (void)newRemoteMenuWillPopUp:(id)arg1;
- (void)setupDevicesAndNetworksMenu;
- (void)updateUnconfiguredMenuBadge;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

