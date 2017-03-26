//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "TSACollaborationPassphraseRetriever-Protocol.h"

@class NSButton, NSProgressIndicator, NSString, NSTextField, NSURL, TMABadgeIconView, TMADocument;
@protocol TSPPassphraseConsumer;

@interface TMADocumentPassphraseController : NSWindowController <TSACollaborationPassphraseRetriever>
{
    id <TSPPassphraseConsumer> _passphraseConsumer;
    unsigned long long _incorrectPasswordCount;
    NSTextField *_passwordField;
    TMABadgeIconView *_appIcon;
    CDUnknownBlockType _completionHandler;
    NSTextField *_documentPasswordPromptField;
    NSButton *_saveInKeychainButton;
    NSButton *_okButton;
    NSButton *_cancelButton;
    NSProgressIndicator *_spinner;
    TMADocument *_tmaDocument;
    NSURL *_url;
    NSString *_preferredDisplayName;
    NSString *_originalDocumentDisplayName;
}

+ (id)passphraseControllerWithConsumer:(id)arg1 document:(id)arg2 url:(id)arg3 preferredDisplayName:(id)arg4 originalDocumentDisplayName:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)retrievePassphraseWithConsumer:(id)arg1 url:(id)arg2 preferredDisplayName:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (long long)retrievePassphraseWithConsumer:(id)arg1 document:(id)arg2;
+ (id)dispatchGroup;
@property(copy, nonatomic) NSString *originalDocumentDisplayName; // @synthesize originalDocumentDisplayName=_originalDocumentDisplayName;
@property(copy, nonatomic) NSString *preferredDisplayName; // @synthesize preferredDisplayName=_preferredDisplayName;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) TMADocument *tmaDocument; // @synthesize tmaDocument=_tmaDocument;
@property(nonatomic) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) NSButton *okButton; // @synthesize okButton=_okButton;
@property(nonatomic) TMABadgeIconView *appIcon; // @synthesize appIcon=_appIcon;
@property(nonatomic) NSTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(nonatomic) NSButton *saveInKeychainButton; // @synthesize saveInKeychainButton=_saveInKeychainButton;
@property(nonatomic) NSTextField *documentPasswordPromptField; // @synthesize documentPasswordPromptField=_documentPasswordPromptField;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)setBusy:(BOOL)arg1;
- (void)_showInvalidPasswordAlert;
- (void)_showNetworkRetryErrorAlert;
- (void)_savePassphraseInKeychain;
- (void)cancelPassword:(id)arg1;
- (void)enterPassword:(id)arg1;
- (void)passwordAttempted:(BOOL)arg1 error:(id)arg2;
- (id)lookupPassphraseInKeychain;
- (void)callCompletionWithSuccess:(BOOL)arg1;
- (void)dismissModalDialogWithSuccess:(BOOL)arg1;
- (void)showModalDialog;
- (void)windowDidLoad;
- (void)receiveCancelNotification:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithConsumer:(id)arg1 document:(id)arg2 url:(id)arg3 preferredDisplayName:(id)arg4 originalDocumentDisplayName:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

