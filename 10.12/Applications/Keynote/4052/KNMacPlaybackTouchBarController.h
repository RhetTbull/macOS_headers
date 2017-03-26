//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KNMacPlaybackPresentationController, KNMacPlaybackTouchBarItemProvider, KNRecordingSessionController, NSButton, NSTouchBar;

@interface KNMacPlaybackTouchBarController : NSObject
{
    KNMacPlaybackPresentationController *_playbackPresentationController;
    BOOL _controlsEnabled;
    BOOL _showsSwapButton;
    KNRecordingSessionController *_recordingSessionController;
    NSTouchBar *_touchBar;
    KNMacPlaybackTouchBarItemProvider *_touchBarItemProvider;
    NSButton *_stopPresentationButton;
}

@property(retain, nonatomic) NSButton *stopPresentationButton; // @synthesize stopPresentationButton=_stopPresentationButton;
@property(retain, nonatomic) KNMacPlaybackTouchBarItemProvider *touchBarItemProvider; // @synthesize touchBarItemProvider=_touchBarItemProvider;
@property(retain, nonatomic) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
@property(retain, nonatomic) KNRecordingSessionController *recordingSessionController; // @synthesize recordingSessionController=_recordingSessionController;
@property(nonatomic) BOOL showsSwapButton; // @synthesize showsSwapButton=_showsSwapButton;
@property(nonatomic) BOOL controlsEnabled; // @synthesize controlsEnabled=_controlsEnabled;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_updateEscapeKeyReplacementItem;
- (void)p_updateItemIdentifiers;
- (void)endPresentation;
- (void)beginPresentationWithPlaybackController:(id)arg1 clockController:(id)arg2 timerController:(id)arg3 recordingSessionController:(id)arg4 playbackWindowManager:(id)arg5;
- (id)initWithPlaybackPresentationController:(id)arg1;

@end

