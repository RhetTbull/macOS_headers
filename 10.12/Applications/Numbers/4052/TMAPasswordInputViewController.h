//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTextFieldDelegate-Protocol.h"

@class NSString, NSTextField, SFUCryptoKey;

@interface TMAPasswordInputViewController : NSViewController <NSTextFieldDelegate>
{
    unsigned long long _style;
    SFUCryptoKey *_existingDocumentEncryptionKey;
    NSTextField *_passwordNotPresentLabel;
    NSTextField *_passwordMismatchLabel;
    NSTextField *_oldPasswordMismatchLabel;
    NSTextField *_passwordHintLabel;
    NSTextField *_oldPasswordField;
    NSTextField *_passwordField;
    NSTextField *_secondPasswordField;
    NSTextField *_passwordHintField;
}

@property(nonatomic) NSTextField *passwordHintField; // @synthesize passwordHintField=_passwordHintField;
@property(nonatomic) NSTextField *secondPasswordField; // @synthesize secondPasswordField=_secondPasswordField;
@property(nonatomic) NSTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(nonatomic) NSTextField *oldPasswordField; // @synthesize oldPasswordField=_oldPasswordField;
@property(nonatomic) NSTextField *passwordHintLabel; // @synthesize passwordHintLabel=_passwordHintLabel;
@property(nonatomic) NSTextField *oldPasswordMismatchLabel; // @synthesize oldPasswordMismatchLabel=_oldPasswordMismatchLabel;
@property(nonatomic) NSTextField *passwordMismatchLabel; // @synthesize passwordMismatchLabel=_passwordMismatchLabel;
@property(nonatomic) NSTextField *passwordNotPresentLabel; // @synthesize passwordNotPresentLabel=_passwordNotPresentLabel;
@property(retain, nonatomic) SFUCryptoKey *existingDocumentEncryptionKey; // @synthesize existingDocumentEncryptionKey=_existingDocumentEncryptionKey;
- (void)disableFields;
- (BOOL)_oldPasswordMatchesExistingDocumentPassphrase;
- (void)showPasswordHintLabelWithHint:(id)arg1;
- (void)showOldPasswordMismatchLabel;
- (void)showPasswordMismatchLabel;
- (void)showPasswordNotPresentLabel;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)isAuthorizedToRemovePassword;
- (unsigned long long)isPasswordValid;
@property(readonly, nonatomic) NSString *passwordHint;
@property(readonly, nonatomic) NSString *secondPassword;
@property(readonly, nonatomic) NSString *password;
@property(readonly, nonatomic) NSString *oldPassword;
@property(readonly, nonatomic) BOOL isViewLoaded;
- (void)setTooltips:(id)arg1;
- (id)nibName;
- (void)dealloc;
- (id)initWithStyle:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

