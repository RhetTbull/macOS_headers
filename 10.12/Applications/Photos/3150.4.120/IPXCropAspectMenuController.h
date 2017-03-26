//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, NSTableView, NSTextField, NSUndoManager, NSView, _IPXOrientationButton;
@protocol IPXCropAspectMenuDataSource, IPXCropAspectMenuDelegate;

@interface IPXCropAspectMenuController : IPXViewController <NSTableViewDataSource, NSTableViewDelegate, NSTextFieldDelegate>
{
    NSTableView *_tableView;
    NSArray *_labels;
    BOOL _portrait;
    NSView *_orientationSelector;
    NSView *_customAspectFieldContainer;
    NSTextField *_widthTextField;
    NSTextField *_heightTextField;
    NSTextField *_separatorField;
    NSLayoutConstraint *_orientationSelectorHeightConstraint;
    NSLayoutConstraint *_customAspectContainerHeightConstraint;
    NSView *_separatorLine;
    NSLayoutConstraint *_separatorHeightConstraint;
    BOOL _isOrientationSelectorSectionOpen;
    BOOL _isCustomAspectSectionOpen;
    long long _previousValue;
    NSLayoutConstraint *_tableViewWidthConstraint;
    _IPXOrientationButton *_portraitButton;
    _IPXOrientationButton *_landscapeButton;
    long long _selectedIndex;
    BOOL _externallySelectingRow;
    id <IPXCropAspectMenuDelegate> _delegate;
    id <IPXCropAspectMenuDataSource> _dataSource;
    NSUndoManager *_undoManager;
    struct CGSize _masterSize;
}

+ (id)cropAspectRatioLabels;
@property(retain) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(nonatomic) BOOL portrait; // @synthesize portrait=_portrait;
@property(nonatomic) struct CGSize masterSize; // @synthesize masterSize=_masterSize;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <IPXCropAspectMenuDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IPXCropAspectMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_maxTableCellWidthForCurrentContentsPlusAddedCellView:(id)arg1;
- (void)_updateTextFieldsForSelectedIndex:(long long)arg1;
- (void)_setTableViewSelectedIndex:(long long)arg1;
- (id)_checkImage;
- (void)_changeOrientationSegment:(long long)arg1;
- (void)_segmentSelected:(id)arg1;
- (void)_setupOrientationSelectorInView:(id)arg1;
- (void)_validateInput;
- (CDStruct_4bcfbbae)_conformAspectRatio:(CDStruct_4bcfbbae)arg1 portrait:(BOOL)arg2;
- (void)_setupCustomContainer:(id)arg1;
- (void)_updateSeparatorLineVisibilityAnimated:(BOOL)arg1;
- (void)_setCustomAspectSectionOpen:(BOOL)arg1 animate:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setOrientationSelectorSectionOpen:(BOOL)arg1 animate:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setSelectedIndex:(long long)arg1 animate:(BOOL)arg2;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
@property(readonly, nonatomic) CDStruct_4bcfbbae customRatio;
- (void)setEnableOrientationSelector:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewDidLoad;
- (id)contextualUndoManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

