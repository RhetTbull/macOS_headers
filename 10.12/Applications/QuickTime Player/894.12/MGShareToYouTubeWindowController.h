//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "MGYouTubeAuthenticationViewControllerDelegate-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class MGYouTubeAccount, MGYouTubeAuthenticationViewController, NSArray, NSMutableDictionary, NSString, NSTextView, NSView;

@interface MGShareToYouTubeWindowController : NSWindowController <NSWindowDelegate, NSURLConnectionDelegate, MGYouTubeAuthenticationViewControllerDelegate>
{
    NSView *_currentView;
    MGYouTubeAuthenticationViewController *_authenticationViewController;
    MGYouTubeAccount *_account;
    NSView *_topView;
    NSView *_authView;
    NSView *_authViewFirstResponder;
    NSView *_metadataView;
    NSView *_metadataViewFirstResponder;
    NSView *_termsOfServiceView;
    NSTextView *_termsOfServiceTextView;
    NSArray *_categories;
    NSMutableDictionary *_metadata;
}

+ (id)keyPathsForValuesAffectingMetadataContainsInvalidTags;
@property(readonly) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy) NSArray *categories; // @synthesize categories=_categories;
@property(retain) NSTextView *termsOfServiceTextView; // @synthesize termsOfServiceTextView=_termsOfServiceTextView;
@property __weak NSView *termsOfServiceView; // @synthesize termsOfServiceView=_termsOfServiceView;
@property __weak NSView *metadataViewFirstResponder; // @synthesize metadataViewFirstResponder=_metadataViewFirstResponder;
@property __weak NSView *metadataView; // @synthesize metadataView=_metadataView;
@property __weak NSView *authViewFirstResponder; // @synthesize authViewFirstResponder=_authViewFirstResponder;
@property __weak NSView *authView; // @synthesize authView=_authView;
@property __weak NSView *topView; // @synthesize topView=_topView;
@property(retain) MGYouTubeAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)authenticationViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)authenticationViewControllerDidSucceed:(id)arg1;
- (void)authenticationViewControllerCancelled:(id)arg1;
- (void)exportAndShare;
- (void)fetchCategories:(CDUnknownBlockType)arg1;
- (void)showMetadata:(id)arg1;
- (void)showTermsOfService:(id)arg1;
- (void)changeUser:(id)arg1;
- (void)closeShareWindow:(id)arg1;
- (void)beginShare:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)switchToMetadataView;
- (void)switchToAuthenticationView;
- (void)makeCurrentView:(id)arg1;
- (void)windowDidLoad;
- (void)validateTokens:(CDUnknownBlockType)arg1;
@property(readonly) BOOL metadataContainsInvalidTags;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

