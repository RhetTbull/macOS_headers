//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CAOpenGLLayer.h>

@class NSDictionary;

@interface VisualizerClientOpenGLLayer : CAOpenGLLayer
{
    BOOL _pendingPlaybackStopped;
    BOOL _pendingReshape;
    BOOL _pending_PlayInstruction;
    BOOL _alwaysDisplayTrackInfo;
    struct CGImage *_pendingCoverImage;
    NSDictionary *_pending_TrackInfo;
    NSDictionary *_pending_StreamInfo;
    NSDictionary *_pending_AudioStreamInfo;
    unsigned long long _pending_Volume;
    long long _pending_BitRate;
    struct _CGLPixelFormatObject *_pixelFormatObj;
    double _backingScaleFactor;
    double _thermalPressureScale;
}

@property(nonatomic) double thermalPressureScale; // @synthesize thermalPressureScale=_thermalPressureScale;
@property(nonatomic) double backingScaleFactor; // @synthesize backingScaleFactor=_backingScaleFactor;
@property(nonatomic) struct _CGLPixelFormatObject *pixelFormatObj; // @synthesize pixelFormatObj=_pixelFormatObj;
@property(nonatomic) BOOL alwaysDisplayTrackInfo; // @synthesize alwaysDisplayTrackInfo=_alwaysDisplayTrackInfo;
@property(nonatomic) BOOL pending_PlayInstruction; // @synthesize pending_PlayInstruction=_pending_PlayInstruction;
@property(nonatomic) long long pending_BitRate; // @synthesize pending_BitRate=_pending_BitRate;
@property(nonatomic) unsigned long long pending_Volume; // @synthesize pending_Volume=_pending_Volume;
@property(retain, nonatomic) NSDictionary *pending_AudioStreamInfo; // @synthesize pending_AudioStreamInfo=_pending_AudioStreamInfo;
@property(retain, nonatomic) NSDictionary *pending_StreamInfo; // @synthesize pending_StreamInfo=_pending_StreamInfo;
@property(retain, nonatomic) NSDictionary *pending_TrackInfo; // @synthesize pending_TrackInfo=_pending_TrackInfo;
@property(nonatomic) BOOL pendingReshape; // @synthesize pendingReshape=_pendingReshape;
@property(nonatomic) BOOL pendingPlaybackStopped; // @synthesize pendingPlaybackStopped=_pendingPlaybackStopped;
@property(nonatomic) struct CGImage *pendingCoverImage; // @synthesize pendingCoverImage=_pendingCoverImage;
- (void)stopPlayback;
- (BOOL)startVisualPlaybackWithInfo:(id)arg1 andStreamInfo:(id)arg2 andAudioInfo:(id)arg3 volume:(long long)arg4 bitRate:(unsigned long long)arg5;
- (void)setArtwork:(struct CGImage *)arg1;
- (void)sendThermalPressureNotification:(int)arg1;
- (BOOL)sendTextInput:(struct __CFString *)arg1;
- (void)sizeChangedWithBackingScale:(double)arg1;
- (void)sendArtworkRequestCompleted:(struct __CFData *)arg1 withFormat:(unsigned int)arg2;
- (void)resetTrackChangeTime;
- (void)toggleFrameRateDisplay;
- (void)setTrackInfoToDisplayAlways:(BOOL)arg1;
- (void)sendPlaybackStopped;
- (void)sendVisualData:(struct RenderVisualData *)arg1 withTimeStampID:(unsigned int)arg2 atTime:(unsigned int)arg3;
- (BOOL)handleTextInput:(id)arg1;
- (void)setVisualData:(id)arg1 withTimeStamp:(unsigned long long)arg2 andCurrentTimeInMS:(unsigned long long)arg3;
- (void)releaseCGLPixelFormat:(struct _CGLPixelFormatObject *)arg1;
- (void)releaseCGLContext:(struct _CGLContextObject *)arg1;
- (struct _CGLPixelFormatObject *)copyCGLPixelFormatForDisplayMask:(unsigned int)arg1;
- (BOOL)canDrawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (void)drawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (void)deactivate;
- (void)activate;
- (void)dealloc;

@end

