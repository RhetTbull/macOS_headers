//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class Gesture, NSButton, OSAScriptController, OSAScriptView;

__attribute__((visibility("hidden")))
@interface BTTAppleScriptEditorWC : NSWindowController
{
    Gesture *_gesture;
    OSAScriptView *_scriptView;
    OSAScriptController *_scriptController;
    NSButton *_runScriptButton;
}

@property __weak NSButton *runScriptButton; // @synthesize runScriptButton=_runScriptButton;
@property(retain) OSAScriptController *scriptController; // @synthesize scriptController=_scriptController;
@property OSAScriptView *scriptView; // @synthesize scriptView=_scriptView;
@property(retain) Gesture *gesture; // @synthesize gesture=_gesture;
- (void).cxx_destruct;
- (void)save:(id)arg1;
- (void)cancel:(id)arg1;
- (id)initWithGesture:(id)arg1;
- (void)runScript:(id)arg1;
- (void)checkScriptState;
- (void)windowDidLoad;

@end

