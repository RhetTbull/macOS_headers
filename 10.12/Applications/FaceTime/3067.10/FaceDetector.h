//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureSession, CIDetector, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface FaceDetector : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    unsigned long long _numberOfFaces;
    NSObject<OS_dispatch_queue> *_captureQueue;
    CIDetector *_detector;
    NSMutableDictionary *_trackingIDToLastFeature;
    AVCaptureSession *_captureSession;
    unsigned long long _frameCount;
    struct CGSize _aspectRatio;
}

@property(nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(retain, nonatomic) NSMutableDictionary *trackingIDToLastFeature; // @synthesize trackingIDToLastFeature=_trackingIDToLastFeature;
@property(retain, nonatomic) CIDetector *detector; // @synthesize detector=_detector;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *captureQueue; // @synthesize captureQueue=_captureQueue;
@property(nonatomic) struct CGSize aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) unsigned long long numberOfFaces; // @synthesize numberOfFaces=_numberOfFaces;
- (void).cxx_destruct;
- (void)stopRunning;
- (void)startRunning;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

