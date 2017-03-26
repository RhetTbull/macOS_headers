//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ReminderInspectorController.h"

@class EKReminderListViewController, MainController, NSPopover, NSView;

@interface ReminderListInspectorController : ReminderInspectorController
{
    NSPopover *_popover;
    MainController *_mainController;
    EKReminderListViewController *_reminderListViewController;
    NSView *_contentView;
}

@property(retain) NSView *contentView; // @synthesize contentView=_contentView;
@property(retain) EKReminderListViewController *reminderListViewController; // @synthesize reminderListViewController=_reminderListViewController;
@property(retain) MainController *mainController; // @synthesize mainController=_mainController;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (BOOL)popoverShouldClose:(id)arg1 withReason:(long long)arg2;
- (BOOL)popoverShouldDetach:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)showPopoverForCalendar:(id)arg1 relativeToRect:(struct CGRect)arg2 ofView:(id)arg3;
- (id)initWithMainController:(id)arg1;
- (void)viewDidLoad;

@end

