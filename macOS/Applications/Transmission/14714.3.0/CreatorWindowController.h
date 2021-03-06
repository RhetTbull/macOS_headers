//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSImageView, NSMutableArray, NSProgressIndicator, NSSegmentedControl, NSTableView, NSTextField, NSTextView, NSTimer, NSURL, NSUserDefaults, NSView;

@interface CreatorWindowController : NSWindowController
{
    NSImageView *fIconView;
    NSTextField *fNameField;
    NSTextField *fStatusField;
    NSTextField *fPiecesField;
    NSTextField *fLocationField;
    NSTableView *fTrackerTable;
    NSSegmentedControl *fTrackerAddRemoveControl;
    NSTextView *fCommentView;
    NSButton *fPrivateCheck;
    NSButton *fOpenCheck;
    NSView *fProgressView;
    NSProgressIndicator *fProgressIndicator;
    struct tr_metainfo_builder *fInfo;
    NSURL *fPath;
    NSURL *fLocation;
    NSMutableArray *fTrackers;
    NSTimer *fTimer;
    BOOL fStarted;
    BOOL fOpenWhenCreated;
    NSUserDefaults *fDefaults;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)createTorrentFile:(struct tr_session *)arg1 forFile:(id)arg2;
+ (id)createTorrentFile:(struct tr_session *)arg1;
+ (id)chooseFile;
- (void).cxx_destruct;
- (void)paste:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)copy:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)addRemoveTracker:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)cancelCreateProgress:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)cancelCreateWindow:(id)arg1;
- (void)create:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)window:(id)arg1 didDecodeRestorableState:(id)arg2;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithHandle:(struct tr_session *)arg1 path:(id)arg2;
- (void)failureSheetClosed:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)checkProgress;
- (void)createReal;
- (void)createBlankAddressAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)updateLocationField;

@end

