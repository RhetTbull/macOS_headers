//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FullScreenModalCapableWindow.h"

@interface TypeAheadWindow : FullScreenModalCapableWindow
{
    BOOL _sendsMouseDownNotifications;
    BOOL _shouldFlushTypeAheadEvents;
}

+ (BOOL)handleEvent:(id)arg1;
@property(nonatomic) BOOL shouldFlushTypeAheadEvents; // @synthesize shouldFlushTypeAheadEvents=_shouldFlushTypeAheadEvents;
@property(nonatomic) BOOL sendsMouseDownNotifications; // @synthesize sendsMouseDownNotifications=_sendsMouseDownNotifications;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)performTextFinderAction:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)close;
- (void)_flushTypeAheadEvents;
- (void)becomeKeyWindow;
- (void)flushTypeAheadEventsWhenAppropriate;
- (void)startRecordingTypeAheadEvents;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

