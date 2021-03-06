//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVTouchBarCaptureInputSourceItem, NSArray, NSNumber;

@protocol AVTouchBarRecordingControlsControlling <NSObject>
@property(readonly) BOOL canStopRecording;
@property(readonly) BOOL canResumeRecording;
@property(readonly) BOOL canPauseRecording;
@property(readonly) BOOL canStartRecording;
@property(readonly, getter=isPaused) BOOL paused;
@property(readonly, getter=isRecording) BOOL recording;
@property(readonly) NSNumber *recordedFileSize;
@property(readonly) double recordedTime;
- (void)stopRecording;
- (void)resumeRecording;
- (void)pauseRecording;
- (void)startRecording;

@optional
@property(readonly) AVTouchBarCaptureInputSourceItem *selectedScreenTouchBarInputSourceItem;
@property(readonly) NSArray *screenTouchBarInputSourceItems;
@property(readonly) AVTouchBarCaptureInputSourceItem *selectedAudioTouchBarInputSourceItem;
@property(readonly) NSArray *audioTouchBarInputSourceItems;
@property(readonly) AVTouchBarCaptureInputSourceItem *selectedVideoTouchBarInputSourceItem;
@property(readonly) NSArray *videoTouchBarInputSourceItems;
- (void)selectTouchBarInputSourceItem:(AVTouchBarCaptureInputSourceItem *)arg1;
@end

