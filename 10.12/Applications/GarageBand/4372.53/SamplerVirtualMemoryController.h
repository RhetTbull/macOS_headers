//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SmallDialogController.h"

@class NSButton, NSPopUpButton, NSTextField;

@interface SamplerVirtualMemoryController : SmallDialogController
{
    NSButton *active;
    NSPopUpButton *diskDriveSpeed;
    NSPopUpButton *harddiskRecordingActivity;
    NSTextField *requiresConstantRAM;
    NSTextField *diskIOTraffic;
    NSTextField *notReadFromDiskInTime;
    NSButton *apply;
}

+ (id)nibName;
- (void)handleUM_BLINK:(id)arg1;
- (void)clickCancel:(id)arg1;
- (void)clickOK:(id)arg1;
- (void)clickApply:(id)arg1;
- (void)changeHarddiskRecordingActivity:(id)arg1;
- (void)changeDiskDriveSpeed:(id)arg1;
- (void)changeActive:(id)arg1;
- (void)updateUI;
- (void)awakeFromNib;
- (void)updatePerformance;
- (void)windowWillClose:(id)arg1;
- (void)willBecomeVisible;

@end

