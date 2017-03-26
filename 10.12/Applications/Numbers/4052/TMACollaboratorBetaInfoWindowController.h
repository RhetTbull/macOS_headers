//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSImageView, NSTextField, TMACollaboratorBetaInfoContentView, TSKMacURLLinkedTextField;

@interface TMACollaboratorBetaInfoWindowController : NSWindowController
{
    NSImageView *_sheetImage;
    NSTextField *_sheetTitle;
    NSTextField *_sheetMessage;
    TSKMacURLLinkedTextField *_learnMoreLinkedText;
    NSButton *_dontShowAgainCheckbox;
    NSButton *_continueButton;
    TMACollaboratorBetaInfoContentView *_contentView;
}

@property(nonatomic) TMACollaboratorBetaInfoContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) NSButton *continueButton; // @synthesize continueButton=_continueButton;
@property(nonatomic) NSButton *dontShowAgainCheckbox; // @synthesize dontShowAgainCheckbox=_dontShowAgainCheckbox;
@property(nonatomic) TSKMacURLLinkedTextField *learnMoreLinkedText; // @synthesize learnMoreLinkedText=_learnMoreLinkedText;
@property(nonatomic) NSTextField *sheetMessage; // @synthesize sheetMessage=_sheetMessage;
@property(nonatomic) NSTextField *sheetTitle; // @synthesize sheetTitle=_sheetTitle;
@property(nonatomic) NSImageView *sheetImage; // @synthesize sheetImage=_sheetImage;
- (void)dontShowPressed:(id)arg1;
- (void)continuePressed:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (id)learnMoreAttributedString;
- (void)showBetaInfoSheetForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)windowDidLoad;

@end

