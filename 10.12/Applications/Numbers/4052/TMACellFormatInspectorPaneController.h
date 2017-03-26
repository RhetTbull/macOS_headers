//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorPaneController.h"

#import "NSMenuDelegate-Protocol.h"

@class NSPopUpButton, NSString, NSTextField, TMACustomFormatSheetController;

@interface TMACellFormatInspectorPaneController : TMAInspectorPaneController <NSMenuDelegate>
{
    NSPopUpButton *mFormatPopUpButton;
    BOOL mObserversWereAdded;
    long long mCustomFormatListCount;
    TMACustomFormatSheetController *mCustomFormatSheetController;
    NSTextField *mFormatLabel;
}

+ (id)nibName;
@property(nonatomic) NSPopUpButton *formatPopUpButton; // @synthesize formatPopUpButton=mFormatPopUpButton;
@property(nonatomic) NSTextField *formatLabel; // @synthesize formatLabel=mFormatLabel;
- (void)menuNeedsUpdate:(id)arg1;
- (void)setFormatType:(id)arg1;
- (void)p_addNewCustomFormatForDocument:(id)arg1;
- (void)p_updateSelectedMenuItem;
- (int)p_formatTypeForCustomFormatSheet;
- (id)p_formatTypesForCustomFormatSheet;
- (id)p_selectedFormatTypes;
- (BOOL)commitEditing;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updatePanes;
- (void)loadView;
- (void)p_populateFormatTypesMenu;
- (void)p_addItemForFormatType:(int)arg1;
- (id)p_cellInspectorPropertyVendor;
- (id)p_customFormatList;
- (id)p_cellInspectorCommandPushingProxy;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

