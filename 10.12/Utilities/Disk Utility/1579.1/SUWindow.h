//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class SUSharedActionController, SUToolbarController;

@interface SUWindow : NSWindow
{
    SUToolbarController *_toolbarController;
    SUSharedActionController *_actionController;
}

@property __weak SUSharedActionController *actionController; // @synthesize actionController=_actionController;
@property(retain) SUToolbarController *toolbarController; // @synthesize toolbarController=_toolbarController;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (BOOL)isOpaque;
- (BOOL)isMovableByWindowBackground;
- (void)awakeFromNib;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

