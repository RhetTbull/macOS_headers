//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DJDriverDelegate-Protocol.h"
#import "DJScenario-Protocol.h"

@class DJConnectionWindowController, DJFirmwareDescription, DJReceiver, DJWirelessDevice, NSButton, NSProgressIndicator, NSTextField, NSTextView, NSTimer, NSView;

@interface DJDFUScenario : NSObject <DJScenario, DJDriverDelegate>
{
    DJConnectionWindowController *_controller;
    DJReceiver *_receiver;
    DJWirelessDevice *_device;
    _Bool _recovery;
    DJFirmwareDescription *_firmware;
    id _dfu;
    int _stage;
    _Bool _shouldQuitWhenDone;
    NSTimer *_timer;
    NSView *_batteryWarningView;
    NSTextView *_batteryWarningTextView;
    NSView *_batteryChargingWarningView;
    NSTextView *_batteryChargingWarningTextView;
    NSView *_updateNeededWarningView;
    NSView *_welcomeView;
    NSTextView *_welcomeTextView;
    NSView *_restartView;
    NSTextView *_restartTextView;
    NSButton *_restartCancelButton;
    NSView *_detectionFailedView;
    NSTextView *_detectionFailedTextView;
    NSView *_updatingView;
    NSTextField *_updatingOperationTextField;
    NSProgressIndicator *_updatingProgressIndicator;
    NSView *_succeededView;
    NSTextView *_succeededTextView;
    NSView *_updateFailedView;
    NSView *_stopView;
}

- (void)dfuDidFail:(id)arg1 recoverable:(_Bool)arg2;
- (void)_dfuDidEndDelayed:(id)arg1;
- (void)dfuDidEnd:(id)arg1;
- (void)dfuWillEnd:(id)arg1;
- (void)dfu:(id)arg1 progress:(double)arg2;
- (void)dfu:(id)arg1 status:(id)arg2;
- (void)dfuWillStart:(id)arg1;
- (void)dfuMatchingFirmware:(id)arg1 device:(id)arg2;
- (void)dfuMatchingFirmware:(id)arg1 receiver:(id)arg2;
- (void)handleReport:(id)arg1 reportID:(unsigned char)arg2 deviceIndex:(unsigned char)arg3;
- (void)stopYesButton:(id)arg1;
- (void)stopNoButton:(id)arg1;
- (void)updateFailedTimeoutCloseButton:(id)arg1;
- (void)updateFailedRetryButton:(id)arg1;
- (void)updateFailedCancelButton:(id)arg1;
- (void)succeededExitButton:(id)arg1;
- (void)updatingCancelButton:(id)arg1;
- (void)detectionFailedRetryButton:(id)arg1;
- (void)detectionFailedCancelButton:(id)arg1;
- (void)detectionFailedRecoverButton:(id)arg1;
- (void)restartCancelButton:(id)arg1;
- (void)welcomeUpdateButton:(id)arg1;
- (void)welcomeCancelButton:(id)arg1;
- (void)updateNeededWarningCloseButton:(id)arg1;
- (void)batteryChargingWarningOKButton:(id)arg1;
- (void)batteryWarningOKButton:(id)arg1;
- (unsigned long long)applicationShouldTerminate;
- (_Bool)windowShouldClose;
- (void)receiverRemoval:(id)arg1;
- (void)receiverArrival:(id)arg1;
- (void)sessionDidBecomeActive;
- (void)sessionDidResignActive;
- (void)finish;
- (void)_startRecoveryWithDevice;
- (void)_startUpdateWithDevice;
- (void)_startWithDevice;
- (void)_startDelayed:(id)arg1;
- (void)_startWithReceiverInDFUMode;
- (void)_startWithReceiver;
- (void)start;
- (void)_releaseScreens;
- (void)_showStopScreen;
- (void)_showUpdateFailedUnrecoverableScreen;
- (void)_showUpdateFailedScreen;
- (void)_showSucceededScreen;
- (void)_showUpdatingScreen;
- (void)_showDetectionFailedTimeoutScreen;
- (void)_showDetectionFailedScreen;
- (void)_showRestartScreen;
- (void)_showWelcomeScreen;
- (void)_showUpdateNeededWarningScreen;
- (void)_showBatteryChargingWarningScreen;
- (void)_showBatteryWarningScreen;
- (id)title;
- (void)finalize;
- (void)dealloc;
- (id)initWithController:(id)arg1 screen:(id)arg2;
- (id)initWithController:(id)arg1 withReceiver:(id)arg2 recoverDevice:(_Bool)arg3;
- (id)initWithController:(id)arg1 withReceiver:(id)arg2 withDevice:(id)arg3;
- (id)initWithController:(id)arg1;
- (id)init;

@end

