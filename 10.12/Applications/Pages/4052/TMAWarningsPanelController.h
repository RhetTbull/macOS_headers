//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSArray, NSString, NSView, TMAWarningsViewController;

@interface TMAWarningsPanelController : NSWindowController
{
    TMAWarningsViewController *_warningsViewController;
    CDUnknownBlockType _completionHandler;
    BOOL _closeButtonHidden;
    BOOL _showWarningDetails;
    NSView *_contentView;
}

@property(nonatomic) BOOL showWarningDetails; // @synthesize showWarningDetails=_showWarningDetails;
@property(nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) BOOL closeButtonHidden; // @synthesize closeButtonHidden=_closeButtonHidden;
- (void)_sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)close:(id)arg1;
- (void)hide:(id)arg1;
- (void)showModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancel;
@property(copy, nonatomic) NSArray *warnings;
@property(readonly, nonatomic) BOOL hasWarnings;
@property(copy, nonatomic) NSString *title;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;
- (id)windowNibName;

@end

