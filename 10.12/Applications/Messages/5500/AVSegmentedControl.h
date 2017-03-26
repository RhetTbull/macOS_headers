//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSegmentedControl.h>

#import "NSMenuDelegate-Protocol.h"

@class IMAccount, NSMenu, NSString;

@interface AVSegmentedControl : NSSegmentedControl <NSMenuDelegate>
{
    BOOL _menuIsValid;
    BOOL _registered;
    BOOL _showingPause;
    BOOL _shouldShowPause;
    id _flagChangeMonitor;
    BOOL _muted;
    BOOL _muteAllowed;
    BOOL _paused;
    BOOL _pauseAllowed;
    IMAccount *_account;
    id _segmentedControlTarget;
    NSMenu *_addBuddyMenu;
}

+ (Class)cellClass;
@property(retain) NSMenu *addBuddyMenu; // @synthesize addBuddyMenu=_addBuddyMenu;
@property __weak id segmentedControlTarget; // @synthesize segmentedControlTarget=_segmentedControlTarget;
@property(retain, nonatomic) IMAccount *account; // @synthesize account=_account;
@property(nonatomic, getter=isPauseAllowed) BOOL pauseAllowed; // @synthesize pauseAllowed=_pauseAllowed;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isMuteAllowed) BOOL muteAllowed; // @synthesize muteAllowed=_muteAllowed;
@property(nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_muted;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)invalidateAddMenu;
- (void)menuWillOpen:(id)arg1;
- (void)_rebuildMenuIfNecessary;
- (void)_registerForNotifications;
- (void)_addItemForEmptyList;
- (void)_addItemForIMHandle:(id)arg1 toMenu:(id)arg2 atIndex:(long long)arg3 showingDetails:(BOOL)arg4;
- (void)_addItemForAccount:(id)arg1 atIndex:(int *)arg2;
- (void)_personSelected:(id)arg1;
- (void)selfAction:(id)arg1;
- (void)_sendActionForSegmentType:(int)arg1;
- (void)_showMuteUI;
- (void)_showPauseUI;
@property(nonatomic, getter=isAddEnabled) BOOL addEnabled; // @dynamic addEnabled;
- (void)setAddTooltip:(id)arg1;
- (void)setFullScreenEnabled:(BOOL)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)_configureButtons;
- (long long)segmentForTag:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

