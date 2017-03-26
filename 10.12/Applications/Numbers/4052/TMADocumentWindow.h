//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@protocol TSKMacChildEditorWindow;

@interface TMADocumentWindow : NSWindow
{
    BOOL _registeredForNotifications;
    BOOL _isInMakeFirstResponder;
    BOOL _firstResponderChanged;
    NSWindow<TSKMacChildEditorWindow> *_childEditorWindow;
}

@property(retain, nonatomic) NSWindow<TSKMacChildEditorWindow> *childEditorWindow; // @synthesize childEditorWindow=_childEditorWindow;
@property(readonly, nonatomic) BOOL firstResponderChangedOnCurrentEvent; // @synthesize firstResponderChangedOnCurrentEvent=_firstResponderChanged;
- (id)p_controller;
- (BOOL)hasKeyAppearanceIncludingSheets:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)makeFirstResponder:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)close;
- (void)orderWindow:(long long)arg1 relativeTo:(long long)arg2;
- (void)orderFront:(id)arg1;
- (void)p_maybeMakeChildEditorWindowTakeBackKeyWindowStatusForNotification:(id)arg1;
- (void)p_unregisterForNotifications;
- (void)p_registerForNotifications;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

