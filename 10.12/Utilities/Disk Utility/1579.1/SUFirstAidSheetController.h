//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSTableViewDataSource-Protocol.h"

@class NSString, NSWindow, SKDisk, SUBaseProgressSheet;

@interface SUFirstAidSheetController : NSWindowController <NSTableViewDataSource>
{
    NSWindow *_parentWindow;
    SKDisk *_targetDisk;
    SUBaseProgressSheet *_progressSheet;
    CDUnknownBlockType _completionHandler;
}

@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) SUBaseProgressSheet *progressSheet; // @synthesize progressSheet=_progressSheet;
@property(retain) SKDisk *targetDisk; // @synthesize targetDisk=_targetDisk;
@property __weak NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (void).cxx_destruct;
- (void)_runVerifyOrRepairDiskIsRootVolume:(BOOL)arg1 lvNeedsResize:(BOOL)arg2;
- (void)_createLogicalVolumeForEmptyLVG;
- (void)_resizeLVToFitLVG;
- (void)_fixPartitionMapSizeIsRootVolume:(BOOL)arg1;
- (void)showWindowWithParentWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showWindow:(id)arg1;
- (void)windowDidLoad;
- (id)initWithTargetDisk:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

