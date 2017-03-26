//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSBox, NSButton, NSPopUpButton, NSTextField;

@interface FlexToolController : NSWindowController
{
    NSTextField *titleField;
    NSPopUpButton *flexModePopupButton;
    NSBox *moreInfoBox;
    NSButton *moreInfoDisclosureButton;
    NSTextField *moreInfoTitleField;
    NSTextField *moreInfoTextField;
    NSButton *cancelButton;
    NSButton *okayButton;
    BOOL fOkayClicked;
    float moreInfoBoxBaseHeight;
}

+ (int)showWithCSOName:(id)arg1 forWindow:(id)arg2;
- (void)didEndSheet:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)disclosureClicked:(id)arg1;
- (void)flexModeChanged:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)okayClicked:(id)arg1;
- (void)updateMoreInfoTexts;
- (void)windowDidResize:(id)arg1;
- (void)updateMoreInfoLayout;
- (float)textFieldNeededHeight;
- (int)selectedFlexMode;
- (void)awakeFromNib;
- (void)showWithCSOName:(id)arg1 forWindow:(id)arg2;

@end

