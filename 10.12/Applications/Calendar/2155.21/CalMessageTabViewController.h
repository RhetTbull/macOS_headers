//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class CalMessageTabView, CalMessageTableController, CalMessageTableViewController, NSArray;

@interface CalMessageTabViewController : NSViewController
{
    CalMessageTableController *_messageTableController;
    CalMessageTableViewController *_inboxController;
    CalMessageTableViewController *_repliedController;
}

@property(retain) CalMessageTableViewController *repliedController; // @synthesize repliedController=_repliedController;
@property(retain) CalMessageTableViewController *inboxController; // @synthesize inboxController=_inboxController;
@property __weak CalMessageTableController *messageTableController; // @synthesize messageTableController=_messageTableController;
- (void).cxx_destruct;
- (void)didChangeTabSelection;
- (id)selectedTableViewController;
- (id)eventForCurrentlySelectedNotification;
- (BOOL)showingEmptyInbox;
- (BOOL)hasContent;
- (id)prefetchRange;
- (unsigned long long)messageCount;
- (void)tableViewsNeedDisplay;
- (void)deselectTables;
- (void)reloadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)selectedTabViewItemIndex;
- (void)_setupTabsWithController:(id)arg1;
@property(readonly, nonatomic) CalMessageTabView *tabView;
@property(readonly, nonatomic) NSArray *messageTableViews;
@property(readonly, nonatomic) NSArray *messageTableViewControllers;
- (id)initForController:(id)arg1;

@end

