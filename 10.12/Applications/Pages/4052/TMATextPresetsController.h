//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSPopoverDelegate-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "TSKChangeSourceObserver-Protocol.h"

@class NSArray, NSArrayController, NSButton, NSSet, NSString, NSTableView, TSADocumentRoot, TSDEditorController, TSKMacNSPopover;
@protocol TSWPTextInspecting, TSWPTextPresetDisplayProvider;

@interface TMATextPresetsController : NSViewController <TSKChangeSourceObserver, NSPopoverDelegate, NSTableViewDelegate>
{
    NSSet *_baseStyleSet;
    TSKMacNSPopover *_stylePopover;
    double _stylePopvoerContentWidth;
    double _stylePopoverContentMaxHeight;
    double _tableViewTopMargin;
    double _maxFontSize;
    double _minFontSize;
    BOOL _isClosingFromMainMenuItemAction;
    BOOL _showOverridesInButton;
    BOOL _shouldScrollToSelectedStyle;
    BOOL _scaleFontSizesByDefaultViewScale;
    NSSet *_styleSet;
    NSSet *_characterStyleSet;
    NSArray *_presets;
    NSString *_presetKind;
    NSString *_bindingKey;
    TSDEditorController *_editorController;
    NSViewController *_cellViewController;
    double _fixedHeight;
    double _fixedRowHeight;
    double _fixedFontSize;
    id <TSWPTextPresetDisplayProvider> _presetProvider;
    NSTableView *_tableView;
    NSArrayController *_objectController;
    NSArrayController *_characterArrayController;
    NSButton *_styleButton;
}

@property(retain, nonatomic) NSButton *styleButton; // @synthesize styleButton=_styleButton;
@property(nonatomic) NSArrayController *characterArrayController; // @synthesize characterArrayController=_characterArrayController;
@property(nonatomic) NSArrayController *objectController; // @synthesize objectController=_objectController;
@property(nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) id <TSWPTextPresetDisplayProvider> presetProvider; // @synthesize presetProvider=_presetProvider;
@property(nonatomic) double fixedFontSize; // @synthesize fixedFontSize=_fixedFontSize;
@property(nonatomic) BOOL scaleFontSizesByDefaultViewScale; // @synthesize scaleFontSizesByDefaultViewScale=_scaleFontSizesByDefaultViewScale;
@property(nonatomic) BOOL shouldScrollToSelectedStyle; // @synthesize shouldScrollToSelectedStyle=_shouldScrollToSelectedStyle;
@property(nonatomic) double fixedRowHeight; // @synthesize fixedRowHeight=_fixedRowHeight;
@property(nonatomic) double fixedHeight; // @synthesize fixedHeight=_fixedHeight;
@property(retain, nonatomic) NSViewController *cellViewController; // @synthesize cellViewController=_cellViewController;
@property(nonatomic) BOOL showOverridesInButton; // @synthesize showOverridesInButton=_showOverridesInButton;
@property(retain, nonatomic) TSDEditorController *editorController; // @synthesize editorController=_editorController;
@property(copy, nonatomic) NSString *bindingKey; // @synthesize bindingKey=_bindingKey;
@property(retain, nonatomic) NSString *presetKind; // @synthesize presetKind=_presetKind;
@property(copy, nonatomic) NSArray *presets; // @synthesize presets=_presets;
@property(retain, nonatomic) NSSet *characterStyleSet; // @synthesize characterStyleSet=_characterStyleSet;
@property(retain, nonatomic) NSSet *styleSet; // @synthesize styleSet=_styleSet;
@property(readonly, nonatomic) BOOL isClosingFromMainMenuItemAction; // @synthesize isClosingFromMainMenuItemAction=_isClosingFromMainMenuItemAction;
- (void)closeStylesList;
- (void)activateStylesList:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (id)presentInPopoverForSender:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
@property(readonly, nonatomic) NSString *cellViewIdentifier;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)popUpButtonWillPopUpNotification:(id)arg1;
- (void)menuItemWillSendActionNotification:(id)arg1;
- (void)updateStyleButton;
- (id)p_attributedStringForPropertyMap:(id)arg1 andName:(id)arg2 capitalization:(int)arg3 hasVariations:(BOOL)arg4;
- (id)p_attributedStringForParagraphStyle:(id)arg1 characterStyle:(id)arg2 andName:(id)arg3 hasVariations:(BOOL)arg4;
- (id)attributedStringForStyle:(id)arg1 andName:(id)arg2 hasVariations:(BOOL)arg3;
- (void)updateAllVisibleCellViews;
- (void)updateCellView:(id)arg1 withPreset:(id)arg2;
- (void)p_updateStylePopoverSize:(id)arg1;
- (void)scrollToFirstCheckedStyle;
@property(readonly, nonatomic) Class styleClass;
@property(readonly, nonatomic) id <TSWPTextInspecting> textEditor;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)updatePresets;
@property(readonly, nonatomic) TSADocumentRoot *documentRoot;
- (void)loadView;
- (id)nibName;
- (void)dealloc;
- (id)initWithArrayController:(id)arg1 presetKind:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

