//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSImageView, NSPanel, NSTextField;

@interface GBFeedbackProtectionPanel : NSWindowController
{
    NSPanel *_panel;
    NSImageView *_imageView;
    NSTextField *_textTitle;
    NSTextField *_textMessage;
    NSButton *_defaultButton;
    NSButton *_alternateButton;
    NSButton *_otherButton;
    int _returnCode;
}

+ (id)alertPanel;
- (void)buttonAction:(id)arg1;
- (int)runModalRelativeToWindow:(id)arg1;
- (int)runModal;
- (id)windowNibName;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

@end

