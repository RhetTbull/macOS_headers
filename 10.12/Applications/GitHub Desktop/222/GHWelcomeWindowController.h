//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GHWindowController.h"

#import "NSWindowDelegate-Protocol.h"

@class GHLabel, GHStyledView, GHViewController, NSButton, NSColor, NSString, NSView, RBLSlidingContainerView;
@protocol GHWelcomeWindowControllerDelegate;

@interface GHWelcomeWindowController : GHWindowController <NSWindowDelegate>
{
    id <GHWelcomeWindowControllerDelegate> _delegate;
    RBLSlidingContainerView *_containerView;
    NSView *_welcomeView;
    NSButton *_rightButton;
    NSButton *_leftButton;
    GHLabel *_setupGitLabel;
    GHLabel *_connectGitHubLabel;
    GHLabel *_findReposLabel;
    GHLabel *_welcomeHeading;
    GHLabel *_welcomeSubtext;
    GHStyledView *_breadcrumbView;
    GHStyledView *_backgroundView;
    GHViewController *_stepViewController;
    NSColor *_selectedLabelColor;
    NSColor *_defaultLabelColor;
    GHLabel *_selectedLabel;
}

@property(nonatomic) __weak GHLabel *selectedLabel; // @synthesize selectedLabel=_selectedLabel;
@property(retain, nonatomic) NSColor *defaultLabelColor; // @synthesize defaultLabelColor=_defaultLabelColor;
@property(retain, nonatomic) NSColor *selectedLabelColor; // @synthesize selectedLabelColor=_selectedLabelColor;
@property(retain, nonatomic) GHViewController *stepViewController; // @synthesize stepViewController=_stepViewController;
@property(nonatomic) __weak GHStyledView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak GHStyledView *breadcrumbView; // @synthesize breadcrumbView=_breadcrumbView;
@property(nonatomic) __weak GHLabel *welcomeSubtext; // @synthesize welcomeSubtext=_welcomeSubtext;
@property(nonatomic) __weak GHLabel *welcomeHeading; // @synthesize welcomeHeading=_welcomeHeading;
@property(nonatomic) __weak GHLabel *findReposLabel; // @synthesize findReposLabel=_findReposLabel;
@property(nonatomic) __weak GHLabel *connectGitHubLabel; // @synthesize connectGitHubLabel=_connectGitHubLabel;
@property(nonatomic) __weak GHLabel *setupGitLabel; // @synthesize setupGitLabel=_setupGitLabel;
@property(nonatomic) __weak NSButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) __weak NSButton *rightButton; // @synthesize rightButton=_rightButton;
@property(nonatomic) __weak NSView *welcomeView; // @synthesize welcomeView=_welcomeView;
@property(nonatomic) __weak RBLSlidingContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <GHWelcomeWindowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showViewController:(id)arg1 animationDirection:(unsigned long long)arg2;
- (void)findReposWithAnimationDirection:(unsigned long long)arg1;
- (void)setupGitWithAnimationDirection:(unsigned long long)arg1;
- (void)connectGitHubWithAnimationDirection:(unsigned long long)arg1;
- (void)back:(id)arg1;
- (void)next:(id)arg1;
- (void)setupComplete;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

