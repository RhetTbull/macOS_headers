//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"

@class NSControl, NSManagedObjectContext, NSString, NSURL, NSView, PadContentView, PadViewController, UserStyleSheetGenerator;

@interface NotesWindowController : NSWindowController <NSWindowDelegate>
{
    BOOL _stateRestored;
    PadViewController *_padViewController;
    NSView *_padView;
    PadContentView *_padContentView;
    NSControl *_shareButton;
}

+ (id)windowIdentifier;
@property(nonatomic) __weak NSControl *shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) BOOL stateRestored; // @synthesize stateRestored=_stateRestored;
@property(nonatomic) __weak PadContentView *padContentView; // @synthesize padContentView=_padContentView;
@property(nonatomic) __weak NSView *padView; // @synthesize padView=_padView;
@property(retain, nonatomic) PadViewController *padViewController; // @synthesize padViewController=_padViewController;
- (void).cxx_destruct;
- (void)windowDidFailToExitFullScreen:(id)arg1;
- (void)windowDidFailToEnterFullScreen:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (id)windowWillReturnUndoManager:(id)arg1;
- (void)shareNote:(id)arg1;
- (void)deleteNote:(id)arg1;
- (void)newNote:(id)arg1;
- (void)toggleFloatOnTop:(id)arg1;
- (void)performTextFinderAction:(id)arg1;
- (void)exportNoteAsPDF:(id)arg1;
- (void)printNote:(id)arg1;
@property(readonly, nonatomic) double padViewTopMargin;
@property(readonly, nonatomic) NSURL *userStyleSheetURL;
- (BOOL)validateMenuItem:(id)arg1;
@property(readonly, nonatomic) UserStyleSheetGenerator *sharedUserStyleSheetGenerator;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
- (void)awakeFromNib;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

