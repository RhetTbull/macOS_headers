//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSImageView, NSLayoutConstraint, NSTextField, NSView, NVMultilineCheckboxButton, NVMultilineCheckboxLabel;

__attribute__((visibility("hidden")))
@interface NVRAPPrivacyWindowController : NSWindowController
{
    NSImageView *_iconView;
    NSTextField *_descriptionTextField;
    NVMultilineCheckboxButton *_optInButton;
    NVMultilineCheckboxLabel *_optInTextField;
    NSLayoutConstraint *_optInHeightConstraint;
    NSLayoutConstraint *_doneButtonTopConstraint;
    NSButton *_okButton;
    NSButton *_cancelButton;
    NSView *_optInContainer;
    long long _appearance;
}

@property long long appearance; // @synthesize appearance=_appearance;
@property __weak NSView *optInContainer; // @synthesize optInContainer=_optInContainer;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSButton *okButton; // @synthesize okButton=_okButton;
@property __weak NSLayoutConstraint *doneButtonTopConstraint; // @synthesize doneButtonTopConstraint=_doneButtonTopConstraint;
@property __weak NSLayoutConstraint *optInHeightConstraint; // @synthesize optInHeightConstraint=_optInHeightConstraint;
@property __weak NVMultilineCheckboxLabel *optInTextField; // @synthesize optInTextField=_optInTextField;
@property __weak NVMultilineCheckboxButton *optInButton; // @synthesize optInButton=_optInButton;
@property __weak NSTextField *descriptionTextField; // @synthesize descriptionTextField=_descriptionTextField;
@property __weak NSImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)doneAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)setOptInText;
- (void)setButtonText;
- (void)setDescriptionText;
- (void)setIconImage;
- (void)windowDidLoad;
- (id)windowNibName;
- (id)initWithAppearance:(long long)arg1;

@end

