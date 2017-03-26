//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class CalUIInspectorHeaderView, NSPopoverFrame;

@interface CalUIInspectorWindow : NSPanel
{
    CalUIInspectorHeaderView *_titleBarView;
    NSPopoverFrame *_backgroundView;
}

+ (unsigned long long)_validateStyleMask:(unsigned long long)arg1;
@property(retain) NSPopoverFrame *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) CalUIInspectorHeaderView *titleBarView; // @synthesize titleBarView=_titleBarView;
- (void).cxx_destruct;
- (BOOL)hasKeyAppearance;
- (BOOL)canBecomeKeyWindow;
- (BOOL)isMovableByWindowBackground;
- (unsigned long long)transparentBorderSize;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)performClose:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)initWithEventViewController:(id)arg1;

@end

