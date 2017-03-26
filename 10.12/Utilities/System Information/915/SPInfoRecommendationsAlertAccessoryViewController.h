//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SPInfoViewController.h"

#import "NSTableViewDelegate-Protocol.h"

@class NSArray, NSArrayController, NSIndexSet, NSLayoutConstraint, NSString, NSTableCellView, NSTableView;

@interface SPInfoRecommendationsAlertAccessoryViewController : SPInfoViewController <NSTableViewDelegate>
{
    NSString *_footnote;
    NSArrayController *_arrayController;
    NSTableView *_tableView;
    NSLayoutConstraint *_widthConstraint;
    NSTableCellView *_prototypeTableCellView;
    NSIndexSet *_selectionIndexes;
}

@property(copy) NSIndexSet *selectionIndexes; // @synthesize selectionIndexes=_selectionIndexes;
@property(retain) NSTableCellView *prototypeTableCellView; // @synthesize prototypeTableCellView=_prototypeTableCellView;
@property NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property NSTableView *tableView; // @synthesize tableView=_tableView;
@property NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
@property(copy) NSString *footnote; // @synthesize footnote=_footnote;
- (BOOL)recommendationHasOptions:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)updateViewConstraints;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)toggleSelectionWithSender:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *selectedRecommendations;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

