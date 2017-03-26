//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "iTermShortcutInputViewDelegate-Protocol.h"

@class NSPopUpButton, NSString, NSTextField, NSView, iTermPasteSpecialViewController, iTermShortcutInputView;

@interface iTermEditKeyActionWindowController : NSWindowController <iTermShortcutInputViewDelegate>
{
    iTermShortcutInputView *_shortcutField;
    NSPopUpButton *_actionPopup;
    NSTextField *_parameter;
    NSTextField *_parameterLabel;
    NSPopUpButton *_profilePopup;
    NSPopUpButton *_selectionMovementUnit;
    NSPopUpButton *_menuToSelectPopup;
    NSTextField *_profileLabel;
    NSTextField *_colorPresetsLabel;
    NSPopUpButton *_colorPresetsPopup;
    NSView *_pasteSpecialViewContainer;
    iTermPasteSpecialViewController *_pasteSpecialViewController;
    BOOL _ok;
    BOOL _isNewMapping;
    int _action;
    NSString *_currentKeyCombination;
    NSString *_parameterValue;
}

+ (void)recursiveAddMenu:(id)arg1 toButtonMenu:(id)arg2 depth:(int)arg3;
+ (BOOL)item:(id)arg1 isWindowInWindowsMenu:(id)arg2;
+ (void)populatePopUpButtonWithMenuItems:(id)arg1 selectedValue:(id)arg2;
@property(nonatomic) BOOL isNewMapping; // @synthesize isNewMapping=_isNewMapping;
@property(nonatomic) BOOL ok; // @synthesize ok=_ok;
@property(nonatomic) int action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *parameterValue; // @synthesize parameterValue=_parameterValue;
@property(copy, nonatomic) NSString *currentKeyCombination; // @synthesize currentKeyCombination=_currentKeyCombination;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (void)actionChanged:(id)arg1;
- (void)setPasteSpecialHidden:(BOOL)arg1;
- (void)updateFrameAnimated:(BOOL)arg1;
- (BOOL)anyAccessoryVisible;
- (void)updateViewsAnimated:(BOOL)arg1;
- (void)shortcutInputView:(id)arg1 didReceiveKeyPressEvent:(id)arg2;
- (id)titleOfActionWithTag:(int)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

