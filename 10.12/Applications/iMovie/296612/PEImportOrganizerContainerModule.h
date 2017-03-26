//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PEOrganizerBaseContainerModule.h"

#import "FFImportOrganizerModuleDelegate-Protocol.h"

@class PEImportPlayerContainerModule;

@interface PEImportOrganizerContainerModule : PEOrganizerBaseContainerModule <FFImportOrganizerModuleDelegate>
{
    PEImportPlayerContainerModule *_importPlayerContainerModule;
}

+ (void)radVolumeDidMount:(id)arg1;
+ (void)startObservingPTPDeviceNotification;
+ (void)startObservingiOSRADVolumeDidMountNotification;
+ (void)startObservingNSVolumeDidMountNotification;
+ (void)volumeDidMount:(id)arg1;
+ (void)importWindowWillStartClosing:(id)arg1;
+ (void)windowWillClose:(id)arg1;
+ (void)willBecomeActive;
+ (void)willResignActive;
+ (id)activeImportModule;
+ (BOOL)isImportingTape;
+ (void)shutdownTasks;
+ (void)startupTasks;
+ (id)importWindow;
+ (void)showImportPanelWithKeywords:(id)arg1 forEvent:(id)arg2;
+ (void)closeImportWindow;
+ (void)openImportWindowWithKeywords:(id)arg1 forEvent:(id)arg2;
- (void)setNumericEntryShowsSubframes:(BOOL)arg1;
- (void)setNumericEntryDirection:(int)arg1;
- (void)setNumericEntryType:(int)arg1;
- (void)setNumericEntryValue:(id)arg1;
- (void)numericEntryDidEnd;
- (void)numericEntryWillBegin;
- (void)importClips;
- (void)revealMediaRangesInEvents:(id)arg1;
- (void)showImportPanel:(id)arg1;
- (void)importWindowWillStartClosing:(id)arg1;
- (void)importWindowDidFinishOpening:(id)arg1;
- (void)importWindowDidBecomeKey:(id)arg1;
- (void)stopSkimmingForOwner:(id)arg1;
- (struct CGSize)viewMinSize;
- (void)organizerModule:(id)arg1 didSelectItems:(id)arg2;
- (BOOL)startSkimmingWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 owner:(id)arg3;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 unloadingBlock:(CDUnknownBlockType)arg4;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 unloadingBlock:(CDUnknownBlockType)arg3;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (BOOL)wantsHeaderBar;
- (id)customContentSeparatorColorForState:(BOOL)arg1;
- (Class)organizerModuleClass;
- (void)dealloc;
- (id)init;
- (void)stopUsingMedia:(id)arg1;

@end

