//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriter, PBRecordingTimerView;
@protocol PBAudioRecordingAdapter, PBVideoRecordingAdapter;

@interface PBAVRecorder : NSObject
{
    id _delegate;
    PBRecordingTimerView *_timer;
    struct OpaqueFigFilePath *_outputFilePathRef;
    struct OpaqueCMByteStream *_outputByteStreamRef;
    struct OpaqueFigFormatWriter *_outputFormatWriterRef;
    NSObject<PBAudioRecordingAdapter> *_audioAdapter;
    NSObject<PBVideoRecordingAdapter> *_videoAdapter;
    CDStruct_1b6d18a9 _sessionTime;
    AVAssetWriter *_assetWriter;
    BOOL _receivedVideoFrames;
    BOOL _isRecording;
}

@property BOOL isRecording; // @synthesize isRecording=_isRecording;
@property BOOL receivedVideoFrames; // @synthesize receivedVideoFrames=_receivedVideoFrames;
@property(retain) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
- (void).cxx_destruct;
- (void)cancelRecording;
- (void)saveRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startRecording;
- (BOOL)sessionIsReady;
- (void)startSessionWithTime:(CDStruct_1b6d18a9)arg1;
- (void)dealloc;
- (id)initWithFileName:(id)arg1 timer:(id)arg2;

@end

