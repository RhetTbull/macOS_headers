//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSUserInterfaceValidations-Protocol.h"
#import "QLPreviewPanelDataSource-Protocol.h"
#import "QLPreviewPanelDelegate-Protocol.h"
#import "WebEditingDelegate-Protocol.h"
#import "WebFrameLoadDelegate-Protocol.h"
#import "WebPolicyDelegate-Protocol.h"

@class ICMHTMLNoteEditorTouchBarController, ICMZoomController, NFNoteBody, NSArray, NSDate, NSMutableDictionary, NSObjectController, NSString, NoteWebView, PadContentView, PadViewFindController;
@protocol PadViewControllerDelegate;

@interface PadViewController : NSViewController <WebFrameLoadDelegate, WebPolicyDelegate, NSUserInterfaceValidations, QLPreviewPanelDataSource, QLPreviewPanelDelegate, WebEditingDelegate>
{
    BOOL _wantsFocusWhenReady;
    BOOL _dirty;
    BOOL _ignoreKVOHTMLChanges;
    BOOL _isSettingRepresentedObject;
    BOOL _isInMainWindow;
    NSObjectController *_parentController;
    NoteWebView *_webView;
    PadContentView *_contentView;
    PadViewFindController *_findController;
    NSMutableDictionary *_attachmentRepresentations;
    NFNoteBody *_displayedBody;
    NSDate *_lastCommitDate;
    NSArray *_attachmentsToQuicklook;
    id <PadViewControllerDelegate> _delegate;
    NSString *_lastKnownSnippet;
    ICMZoomController *_zoomController;
    ICMHTMLNoteEditorTouchBarController *_touchBarController;
}

@property(retain, nonatomic) ICMHTMLNoteEditorTouchBarController *touchBarController; // @synthesize touchBarController=_touchBarController;
@property(nonatomic) BOOL isInMainWindow; // @synthesize isInMainWindow=_isInMainWindow;
@property(retain, nonatomic) ICMZoomController *zoomController; // @synthesize zoomController=_zoomController;
@property(retain, nonatomic) NSString *lastKnownSnippet; // @synthesize lastKnownSnippet=_lastKnownSnippet;
@property(nonatomic) BOOL isSettingRepresentedObject; // @synthesize isSettingRepresentedObject=_isSettingRepresentedObject;
@property(nonatomic) __weak id <PadViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *attachmentsToQuicklook; // @synthesize attachmentsToQuicklook=_attachmentsToQuicklook;
@property(nonatomic) BOOL ignoreKVOHTMLChanges; // @synthesize ignoreKVOHTMLChanges=_ignoreKVOHTMLChanges;
@property(retain, nonatomic) NSDate *lastCommitDate; // @synthesize lastCommitDate=_lastCommitDate;
@property(nonatomic) BOOL dirty; // @synthesize dirty=_dirty;
@property(nonatomic) BOOL wantsFocusWhenReady; // @synthesize wantsFocusWhenReady=_wantsFocusWhenReady;
@property(retain, nonatomic) NFNoteBody *displayedBody; // @synthesize displayedBody=_displayedBody;
@property(retain, nonatomic) NSMutableDictionary *attachmentRepresentations; // @synthesize attachmentRepresentations=_attachmentRepresentations;
@property(retain, nonatomic) PadViewFindController *findController; // @synthesize findController=_findController;
@property(nonatomic) __weak PadContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak NoteWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSObjectController *parentController; // @synthesize parentController=_parentController;
- (void).cxx_destruct;
- (void)updateUserActivityState:(id)arg1;
- (void)zoomOut;
- (BOOL)canZoomOut;
- (void)zoomIn;
- (BOOL)canZoomIn;
- (void)globalZoomIndexDidChange:(id)arg1;
- (void)zoomResetToGlobalDefault;
- (BOOL)zoomToMainWindowZoomFactorIfNecessaryForNote:(id)arg1;
- (BOOL)zoomToSingleNoteWindowZoomFactorIfNecessaryForNote:(id)arg1;
- (BOOL)transferZoomIfNecessaryForNote:(id)arg1;
- (BOOL)canZoomReset;
- (id)previewPanel:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (BOOL)quickLookSelectionWithEvent:(id)arg1;
- (void)quicklookAttachment:(id)arg1;
- (id)actionMenuItemsForHitTestResult:(id)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (void)shareNote:(id)arg1;
- (void)_grabPastedAttachments;
- (void)_discardDeletedAttachments;
- (void)_unpackDOM;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)paste:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (void)performTextFinderAction:(id)arg1;
- (void)beginEditingAtEndOfDocument:(id)arg1;
- (void)toggleAutomaticListInsertion:(id)arg1;
- (id)_printOperationWithPrintInfo:(id)arg1;
- (void)exportNoteAsPDF:(id)arg1;
- (void)printNote:(id)arg1;
- (id)_snippetForDisplayedNote;
- (id)_titleForDisplayedNote;
- (BOOL)commitEditing;
- (void)webView:(id)arg1 didWriteSelectionToPasteboard:(id)arg2;
- (void)webViewDidChange:(id)arg1;
- (BOOL)_needsImmediateCommit;
- (void)webViewDidBeginEditing:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)_makeWebViewFirstResponderIfNecessary;
- (void)_finalizeCurrentEditingSession;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRepresentedObject:(id)arg1;
- (id)touchBar;
- (id)padView;
- (void)dealloc;
- (void)awakeFromNib;
- (id)nibBundle;
- (id)nibName;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

