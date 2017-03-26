//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "MusicCellDelegate-Protocol.h"
#import "MusicPickerViewControllerDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class IPXMusicCellView, IPXMusicPickerViewController, IPXSlideshowEditorController, IPXTextField, NSArray, NSArrayController, NSButton, NSLayoutConstraint, NSString, NSTableView, NSView;

@interface IPXSlideshowSettingsMusicViewController : IPXViewController <NSTableViewDataSource, NSTableViewDelegate, MusicPickerViewControllerDelegate, MusicCellDelegate>
{
    IPXSlideshowEditorController *_editorController;
    NSArrayController *_selectionController;
    NSArray *_dummyData;
    NSTableView *_tableView;
    NSView *_fullView;
    NSView *_musicView;
    NSView *_musicLineView;
    NSView *_musicContentView;
    NSView *_musicPickerView;
    NSView *_musicPickerLineView;
    NSView *_musicPickerContentView;
    NSView *_centeredView;
    IPXMusicCellView *_musicCellView;
    IPXTextField *_musicTextField;
    IPXTextField *_musicPickerTextField;
    NSLayoutConstraint *_musicViewLeftConstraint;
    NSLayoutConstraint *_musicViewRightConstraint;
    NSLayoutConstraint *_musicPickerViewLeftConstraint;
    NSLayoutConstraint *_musicPickerViewRightConstraint;
    NSLayoutConstraint *_musicViewHeightConstraint;
    NSLayoutConstraint *_musicPickerViewHeightConstraint;
    IPXMusicPickerViewController *_musicPicker;
    NSView *_fadeView;
    NSButton *_toggleButton;
}

@property __weak NSButton *toggleButton; // @synthesize toggleButton=_toggleButton;
@property(retain) NSView *fadeView; // @synthesize fadeView=_fadeView;
@property(retain) IPXMusicPickerViewController *musicPicker; // @synthesize musicPicker=_musicPicker;
@property NSLayoutConstraint *musicPickerViewHeightConstraint; // @synthesize musicPickerViewHeightConstraint=_musicPickerViewHeightConstraint;
@property NSLayoutConstraint *musicViewHeightConstraint; // @synthesize musicViewHeightConstraint=_musicViewHeightConstraint;
@property __weak NSLayoutConstraint *musicPickerViewRightConstraint; // @synthesize musicPickerViewRightConstraint=_musicPickerViewRightConstraint;
@property __weak NSLayoutConstraint *musicPickerViewLeftConstraint; // @synthesize musicPickerViewLeftConstraint=_musicPickerViewLeftConstraint;
@property __weak NSLayoutConstraint *musicViewRightConstraint; // @synthesize musicViewRightConstraint=_musicViewRightConstraint;
@property __weak NSLayoutConstraint *musicViewLeftConstraint; // @synthesize musicViewLeftConstraint=_musicViewLeftConstraint;
@property __weak IPXTextField *musicPickerTextField; // @synthesize musicPickerTextField=_musicPickerTextField;
@property __weak IPXTextField *musicTextField; // @synthesize musicTextField=_musicTextField;
@property __weak IPXMusicCellView *musicCellView; // @synthesize musicCellView=_musicCellView;
@property __weak NSView *centeredView; // @synthesize centeredView=_centeredView;
@property __weak NSView *musicPickerContentView; // @synthesize musicPickerContentView=_musicPickerContentView;
@property __weak NSView *musicPickerLineView; // @synthesize musicPickerLineView=_musicPickerLineView;
@property __weak NSView *musicPickerView; // @synthesize musicPickerView=_musicPickerView;
@property __weak NSView *musicContentView; // @synthesize musicContentView=_musicContentView;
@property __weak NSView *musicLineView; // @synthesize musicLineView=_musicLineView;
@property __weak NSView *musicView; // @synthesize musicView=_musicView;
@property __weak NSView *fullView; // @synthesize fullView=_fullView;
@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain) NSArray *dummyData; // @synthesize dummyData=_dummyData;
@property(retain) NSArrayController *selectionController; // @synthesize selectionController=_selectionController;
@property(nonatomic) __weak IPXSlideshowEditorController *editorController; // @synthesize editorController=_editorController;
- (void).cxx_destruct;
- (void)removeSongForRow:(long long)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_updateSlideshowFromSelection;
- (void)toggleMusicPicker:(id)arg1;
- (void)updateConstraints;
- (void)updateConstraintsAnimate:(BOOL)arg1;
- (void)deletePressedInTableView:(id)arg1;
- (double)musicViewHeight;
- (BOOL)musicViewControllerCanMultiSelect;
- (id)musicViewControllerSelectedItems:(id)arg1;
- (void)musicViewControllerDidCancel:(id)arg1;
- (void)musicViewControllerDidChangeSelection:(id)arg1;
- (void)deleteDRMs;
@property(readonly) NSArray *selectedAudioItems;
- (void)resync;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLiveResize;
- (void)musicSettingsViewResized:(id)arg1;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)setupParentConstraints;
- (void)viewDidLoad;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

