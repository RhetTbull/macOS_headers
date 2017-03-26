//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSTabViewDelegate-Protocol.h"

@class NSButton, NSSecureTextField, NSString, NSTabView, NSTextField;

__attribute__((visibility("hidden")))
@interface BTTScreenshotUploadConfigurator : NSWindowController <NSTabViewDelegate>
{
    NSButton *_addToClipboard;
    NSButton *_openCustomURL;
    NSTextField *_terminalCommandField;
    NSTextField *_customClipboardURLField;
    NSTextField *_customOpenInBrowserURLField;
    NSTabView *_tabView;
    NSButton *_openImgurInBrowser;
    NSButton *_clipImgurLink;
    NSSecureTextField *_passwordField;
}

@property __weak NSSecureTextField *passwordField; // @synthesize passwordField=_passwordField;
@property __weak NSButton *clipImgurLink; // @synthesize clipImgurLink=_clipImgurLink;
@property __weak NSButton *openImgurInBrowser; // @synthesize openImgurInBrowser=_openImgurInBrowser;
@property __weak NSTabView *tabView; // @synthesize tabView=_tabView;
@property __weak NSTextField *customOpenInBrowserURLField; // @synthesize customOpenInBrowserURLField=_customOpenInBrowserURLField;
@property __weak NSTextField *customClipboardURLField; // @synthesize customClipboardURLField=_customClipboardURLField;
@property __weak NSTextField *terminalCommandField; // @synthesize terminalCommandField=_terminalCommandField;
@property __weak NSButton *openCustomURL; // @synthesize openCustomURL=_openCustomURL;
@property __weak NSButton *addToClipboard; // @synthesize addToClipboard=_addToClipboard;
- (void).cxx_destruct;
- (void)save:(id)arg1;
- (void)selectTerminalTab;
- (void)testSettings:(id)arg1;
- (void)setTerminalCommandDefault:(id)arg1;
- (void)setImgurDefault:(id)arg1;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)authorizeImgur:(id)arg1;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

