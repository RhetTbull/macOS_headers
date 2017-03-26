//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class CardContentViewController, NSArray, RemindersWindowController;

@interface CardViewController : NSViewController
{
    BOOL _showsCompleted;
    RemindersWindowController *_windowController;
    CardContentViewController *_incompleteRemindersViewController;
    CardContentViewController *_completedRemindersViewController;
    NSArray *_displayedLists;
    NSArray *_constraints;
}

@property(retain) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain) NSArray *displayedLists; // @synthesize displayedLists=_displayedLists;
@property(retain) CardContentViewController *completedRemindersViewController; // @synthesize completedRemindersViewController=_completedRemindersViewController;
@property(retain) CardContentViewController *incompleteRemindersViewController; // @synthesize incompleteRemindersViewController=_incompleteRemindersViewController;
@property BOOL showsCompleted; // @synthesize showsCompleted=_showsCompleted;
@property __weak RemindersWindowController *windowController; // @synthesize windowController=_windowController;
- (void).cxx_destruct;
- (void)firstResponderChanged:(id)arg1;
- (id)contentTableView;
- (BOOL)hasCompletedReminders;
- (BOOL)canCreateNewReminder;
- (void)resetScrollPosition;
- (BOOL)inLiveRefresh;
- (void)inspectActiveReminderView;
- (BOOL)activeReminderViewExists;
- (void)hideInfoButton;
- (void)updateRemindersTableForChangedReminderIDs:(id)arg1;
- (void)reloadRemindersTable;
- (void)showReminder:(id)arg1;
- (void)newReminderView:(id)arg1;
- (void)displayNewVisibleLists;
- (id)activeCardContentViewController;
- (id)visibleListIdentifiers;
- (id)visibleLists;
- (void)setVisibleLists:(id)arg1 forceRefresh:(BOOL)arg2;
- (void)setVisibleLists:(id)arg1;
- (id)selectedReminders;
- (BOOL)isSortable;
- (void)showCompleted:(BOOL)arg1 animate:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1 windowController:(id)arg2 type:(id)arg3 showsBackground:(BOOL)arg4;

@end

