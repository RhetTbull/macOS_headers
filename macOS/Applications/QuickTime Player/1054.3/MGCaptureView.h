//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/AVCaptureView.h>

@class NSTrackingArea;

@interface MGCaptureView : AVCaptureView
{
    NSTrackingArea *_titleBarTrackingArea;
}

- (void).cxx_destruct;
- (struct CGRect)_titleBarFrame;
- (void)_reevaluateCanHideControls;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;

@end

