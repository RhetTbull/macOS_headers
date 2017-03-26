//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MicroButton, NSTextField;

@interface StickiesDragBar : NSView
{
    NSTextField *mTitleHolder;
    MicroButton *mCloseControl;
    MicroButton *mZoomControl;
    MicroButton *mUnshadeControl;
}

- (void)unshade;
- (void)shade;
- (void)showTitle;
- (void)hideTitle;
- (void)setTitle:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_windowDidResignMainNotification:(id)arg1;
- (void)_windowDidBecomeMainNotification:(id)arg1;
- (id)_stickiesWindow;

@end

