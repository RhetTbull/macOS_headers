//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXViewController.h>

#import <PhotoPrintProduct/NSComboBoxDelegate-Protocol.h>

@class KHFrame, KHTextView, NSArray, NSButton, NSComboBox, NSPopUpButton, NSString;

@interface KHFontPickerController : UXViewController <NSComboBoxDelegate>
{
    NSPopUpButton *_fontMenuButton;
    NSPopUpButton *_fontFaceButton;
    NSComboBox *_fontSizeButton;
    NSButton *_colorButton;
    KHFrame *_frame;
    NSArray *_fontList;
    KHTextView *_textView;
}

@property(retain) KHTextView *textView; // @synthesize textView=_textView;
@property(retain) NSArray *fontList; // @synthesize fontList=_fontList;
@property(retain) KHFrame *frame; // @synthesize frame=_frame;
@property(retain) NSButton *colorButton; // @synthesize colorButton=_colorButton;
@property(retain) NSComboBox *fontSizeButton; // @synthesize fontSizeButton=_fontSizeButton;
@property(retain) NSPopUpButton *fontFaceButton; // @synthesize fontFaceButton=_fontFaceButton;
@property(retain) NSPopUpButton *fontMenuButton; // @synthesize fontMenuButton=_fontMenuButton;
- (void).cxx_destruct;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (void)comboBoxSelectionDidChange:(id)arg1;
- (void)itemChosen:(id)arg1;
- (void)fontMenuButtonClicked:(id)arg1;
- (id)headerItemWithTitle:(id)arg1;
- (void)updateControls;
- (void)addMenuItemForFontFamily:(id)arg1 toMenu:(id)arg2;
- (id)attributedStringForFontFamily:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithTextView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

