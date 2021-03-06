//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "SubstratePluginToInstallDragViewDelegate-Protocol.h"

@class NSButton, NSProgressIndicator, NSString, NSTextField, NSView, SubstratePluginToInstallDragView;
@protocol SubstratePluginInstallObserver;

__attribute__((visibility("hidden")))
@interface SubstratePluginToInstallViewController : NSViewController <SubstratePluginToInstallDragViewDelegate>
{
    BOOL _working;
    id <SubstratePluginInstallObserver> _observer;
    NSView *_subviewToInstall;
    NSTextField *_installTip;
    NSProgressIndicator *_workingSpin;
    NSView *_displayInfo;
    NSTextField *_displayInfoPluginName;
    NSTextField *_displayInfoTargetApp;
    NSTextField *_displayInfoAuthorName;
    NSTextField *_displayInfoAuthorEmail;
    NSTextField *_displayInfoCodeSign;
    SubstratePluginToInstallDragView *_dragAndDropView;
    NSButton *_importPlugin;
    NSString *_installingPluginPath;
}

@property(nonatomic) BOOL working; // @synthesize working=_working;
@property(retain, nonatomic) NSString *installingPluginPath; // @synthesize installingPluginPath=_installingPluginPath;
@property __weak NSButton *importPlugin; // @synthesize importPlugin=_importPlugin;
@property __weak SubstratePluginToInstallDragView *dragAndDropView; // @synthesize dragAndDropView=_dragAndDropView;
@property __weak NSTextField *displayInfoCodeSign; // @synthesize displayInfoCodeSign=_displayInfoCodeSign;
@property __weak NSTextField *displayInfoAuthorEmail; // @synthesize displayInfoAuthorEmail=_displayInfoAuthorEmail;
@property __weak NSTextField *displayInfoAuthorName; // @synthesize displayInfoAuthorName=_displayInfoAuthorName;
@property __weak NSTextField *displayInfoTargetApp; // @synthesize displayInfoTargetApp=_displayInfoTargetApp;
@property __weak NSTextField *displayInfoPluginName; // @synthesize displayInfoPluginName=_displayInfoPluginName;
@property __weak NSView *displayInfo; // @synthesize displayInfo=_displayInfo;
@property __weak NSProgressIndicator *workingSpin; // @synthesize workingSpin=_workingSpin;
@property __weak NSTextField *installTip; // @synthesize installTip=_installTip;
@property __weak NSView *subviewToInstall; // @synthesize subviewToInstall=_subviewToInstall;
@property(nonatomic) __weak id <SubstratePluginInstallObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)onInstallationEnd:(id)arg1 success:(BOOL)arg2;
- (void)onInstallationBegin:(id)arg1;
- (void)installPlugin:(id)arg1;
- (void)didFinishDraggingPlugin:(id)arg1;
- (void)draggingPluginExited:(id)arg1;
- (void)draggingPluginEntered:(id)arg1;
- (BOOL)canDraggingPlugin;
- (void)clickImportPlugin:(id)arg1;
- (void)updateDisplayInfoWith:(id)arg1;
- (void)updateStatus;
- (void)prepareUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

