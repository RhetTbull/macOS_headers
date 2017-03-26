//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SPInfoViewController.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"
#import "QLPreviewPanelDataSource-Protocol.h"
#import "QLPreviewPanelDelegate-Protocol.h"
#import "SPInfoCollectionControllerDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSButton, NSExtensionItem, NSStackView, NSString, NSTableView, NSTextField, SPInfoCollectionController;

@interface SPInfoExtensionViewController : SPInfoViewController <NSTableViewDataSource, NSTableViewDelegate, QLPreviewPanelDataSource, QLPreviewPanelDelegate, SPInfoCollectionControllerDelegate, NSTouchBarDelegate>
{
    NSTableView *_tableView;
    NSStackView *_stackView;
    NSButton *_headerActionButton;
    NSButton *_summaryButton;
    NSTextField *_summaryMessageTextField;
    SPInfoCollectionController *_collectionController;
    NSArray *_sortDescriptors;
}

+ (id)keyPathsForValuesAffectingResource;
+ (id)keyPathsForValuesAffectingAttributedTitle;
@property(copy) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain) SPInfoCollectionController *collectionController; // @synthesize collectionController=_collectionController;
@property NSTextField *summaryMessageTextField; // @synthesize summaryMessageTextField=_summaryMessageTextField;
@property NSButton *summaryButton; // @synthesize summaryButton=_summaryButton;
@property NSButton *headerActionButton; // @synthesize headerActionButton=_headerActionButton;
@property NSStackView *stackView; // @synthesize stackView=_stackView;
@property NSTableView *tableView; // @synthesize tableView=_tableView;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)subTouchBar;
@property(readonly, retain, nonatomic) NSExtensionItem *resource;
- (void)rearrangeResources;
- (void)presentDeletionConfirmationForResources:(id)arg1;
@property(readonly, retain, nonatomic) NSAttributedString *attributedTitle;
- (void)collectionControllerDidArrangeObjects:(id)arg1;
- (void)collectionController:(id)arg1 didArrangeObject:(id)arg2 oldIndex:(unsigned long long)arg3 newIndex:(unsigned long long)arg4;
- (void)collectionControllerWillArrangeObjects:(id)arg1;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (BOOL)previewPanel:(id)arg1 handleEvent:(id)arg2;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)tableView:(id)arg1 mouseDownInHeaderOfTableColumn:(id)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)viewDidLoad;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)quickLookPreviewItems:(id)arg1;
- (void)performSummaryActionWithSender:(id)arg1;
- (void)performDeleteActionWithSender:(id)arg1;
- (void)performRevealActionWithSender:(id)arg1;
- (void)performExtensionActionWithSender:(id)arg1;
- (void)openResourceWithSender:(id)arg1;
- (void)delete:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

