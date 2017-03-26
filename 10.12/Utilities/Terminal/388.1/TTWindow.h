//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@interface TTWindow : NSWindow
{
    struct CGRect dragFrame;
    double _terminalWindowBlur;
    double _terminalWindowContentAlpha;
}

+ (id)defaultAnimationForKey:(id)arg1;
@property(nonatomic) double terminalWindowContentAlpha; // @synthesize terminalWindowContentAlpha=_terminalWindowContentAlpha;
@property(nonatomic) double terminalWindowBlur; // @synthesize terminalWindowBlur=_terminalWindowBlur;
@property struct CGRect dragFrame; // @synthesize dragFrame;
- (BOOL)_setFrameAutosaveName:(id)arg1 changeFrame:(BOOL)arg2;
- (id)frameAutosaveName;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)_terminalWindowBlurChanged;
- (struct CGRect)defaultFrame;
- (struct CGRect)fullScreenFrame;
- (BOOL)isFullScreen;
- (id)defaultScreen;
- (void)selectFollowingWindow:(id)arg1 goingBackwards:(BOOL)arg2;
- (void)sendEvent:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)eventIsSelectPreviousTabKeyEquivalent:(id)arg1;
- (BOOL)eventIsSelectNextTabKeyEquivalent:(id)arg1;
- (BOOL)_eventIsOldSelectNextPreviousTabKeyEquivalent:(id)arg1 direction:(char *)arg2 ignoreModifierKeys:(BOOL)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)handleDoScriptCommand:(id)arg1;
- (void)setBoundsAsQDRect:(id)arg1;
- (void)setScriptFrame:(id)arg1;
- (id)scriptFrame;
- (void)setScriptSize:(id)arg1;
- (id)scriptSize;
- (void)setScriptOrigin:(id)arg1;
- (id)scriptOrigin;
- (void)setScriptPosition:(id)arg1;
- (id)scriptPosition;
- (void)setScriptFrontmost:(BOOL)arg1;
- (BOOL)scriptFrontmost;
- (void)setSelectedTabController:(id)arg1;
- (id)selectedTabController;
- (id)tabControllers;

@end

