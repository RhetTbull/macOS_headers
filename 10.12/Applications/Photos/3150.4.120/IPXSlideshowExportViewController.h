//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSOpenSavePanelDelegate-Protocol.h"

@class NSButton, NSImageView, NSPopUpButton, NSProgressIndicator, NSSavePanel, NSString, NSWindow;

@interface IPXSlideshowExportViewController : NSViewController <NSOpenSavePanelDelegate>
{
    unsigned long long _exportOperation;
    NSPopUpButton *_exportTypePopup;
    NSButton *_exportAt60FPSCheckbox;
    NSSavePanel *_exportPanel;
    NSWindow *_exportProgressWindow;
    NSProgressIndicator *_exportProgressIndicator;
    NSImageView *_exportProgressImageView;
    NSButton *_sendToiTunesCheckbox;
    NSWindow *_window;
}

@property(nonatomic) __weak NSWindow *window; // @synthesize window=_window;
@property(retain) NSButton *sendToiTunesCheckbox; // @synthesize sendToiTunesCheckbox=_sendToiTunesCheckbox;
@property(retain) NSImageView *exportProgressImageView; // @synthesize exportProgressImageView=_exportProgressImageView;
@property(retain) NSProgressIndicator *exportProgressIndicator; // @synthesize exportProgressIndicator=_exportProgressIndicator;
@property(retain) NSWindow *exportProgressWindow; // @synthesize exportProgressWindow=_exportProgressWindow;
@property(nonatomic) __weak NSSavePanel *exportPanel; // @synthesize exportPanel=_exportPanel;
@property(retain) NSButton *exportAt60FPSCheckbox; // @synthesize exportAt60FPSCheckbox=_exportAt60FPSCheckbox;
@property(retain) NSPopUpButton *exportTypePopup; // @synthesize exportTypePopup=_exportTypePopup;
- (void).cxx_destruct;
- (id)_executeAppleScript:(id)arg1;
- (id)_iTunesAppName;
- (void)_revealPathInFinder:(id)arg1;
- (void)_addPathAndRevealIniTunes:(id)arg1;
- (struct CGSize)_sizeForDocumentAspectRatio:(struct CGSize)arg1 documentAspectRatio:(double)arg2;
- (long long)_roundToEven:(double)arg1;
- (double)_thisScreenAspectRatio;
- (void)_beginExportProgressSheet;
- (void)cancelExport:(id)arg1;
- (void)exportSlideshow:(id)arg1;
- (void)beginExportPanelModalForSlideshow:(id)arg1 modalForWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendToiTunesChanged:(id)arg1;
- (void)exportAt60FPSChanged:(id)arg1;
- (void)exportTypeChanged:(id)arg1;
- (void)loadView;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

