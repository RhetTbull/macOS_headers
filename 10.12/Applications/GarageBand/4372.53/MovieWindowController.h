//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SmallScreensetDialogController.h"

#import "LgMoviePositioningControlDelegate-Protocol.h"
#import "MAMovieViewDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class LgMovieHUDPanel, MAMovieView, NSString, NSWindow;

@interface MovieWindowController : SmallScreensetDialogController <NSWindowDelegate, LgMoviePositioningControlDelegate, MAMovieViewDelegate>
{
    BOOL _windowClosing;
    NSWindow *_fullScreenWindow;
    struct CGRect _normalMovieViewFrame;
}

+ (void)setNaturalContentSize:(struct CGSize)arg1 forWindow:(id)arg2;
+ (struct CGRect)resizedMovieWindowFrameForWindow:(id)arg1 usingMovieAspectRatio:(double)arg2 targetFrame:(struct CGRect)arg3;
+ (struct CGRect)resizedMovieWindowFrameForWindow:(id)arg1 usingMovieAspectRatio:(double)arg2;
+ (struct CGSize)resize:(struct CGSize)arg1 accordingToAspectRatio:(double)arg2 acceptWidth:(BOOL)arg3;
+ (void)ReOpenExternalMovieDisplay:(id)arg1;
+ (void)ReOpenExternalMovieDisplaySetMark:(id)arg1;
+ (BOOL)shouldUseTrueFullScreenMode;
+ (id)nibwID;
+ (void)load;
@property(retain) NSWindow *fullScreenWindow; // @synthesize fullScreenWindow=_fullScreenWindow;
@property struct CGRect normalMovieViewFrame; // @synthesize normalMovieViewFrame=_normalMovieViewFrame;
@property(getter=isWindowClosing) BOOL windowClosing; // @synthesize windowClosing=_windowClosing;
- (void)positionControl:(id)arg1 draggedToPosition:(double)arg2;
- (void)positionControl:(id)arg1 mouseUpOnPosition:(double)arg2;
- (void)positionControl:(id)arg1 mouseDownOnPosition:(double)arg2;
- (void)positionControl:(id)arg1 position:(double *)arg2 sliderMin:(double *)arg3 sliderMax:(double *)arg4 leftLabel:(id *)arg5 rightLabel:(id *)arg6;
- (id)menuForEvent:(id)arg1;
- (void)windowDidChangeScreen:(id)arg1;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (struct CGRect)convertRectFromMovieViewCoordinatesToScreenCoordinates:(struct CGRect)arg1;
- (void)sizeWindowWithFactor:(float)arg1;
- (double)movieViewScalingFactor;
- (id)generateContextMenu;
- (void)storeWindowLayout;
@property(readonly) BOOL movieIsInFullScreen;
- (void)setWindowFloating:(BOOL)arg1;
- (void)showWindow:(id)arg1;
- (void)handleUM_CLOCK:(id)arg1;
- (id)nibwUserData;
- (void)setNibwUserData:(id)arg1;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (id)windowTitle;
- (id)windowRightTitle;
@property(readonly) MAMovieView *movieView;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1;
@property(readonly, nonatomic) LgMovieHUDPanel *movieWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

