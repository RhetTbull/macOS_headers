//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OpenGLLayerView.h"

@class VCLayoutController, VideoChatController;

@interface VideoConferenceLayerView : OpenGLLayerView
{
    VideoChatController *_videoChatController;
    VCLayoutController *_layoutController;
}

- (void)layer:(id)arg1 videoSizeChangedFrom:(struct CGSize)arg2 to:(struct CGSize)arg3;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)_vcPartyIDForDrag:(id)arg1;
- (BOOL)_isOneWayTo:(id *)arg1;
- (unsigned long long)draggingSourceOperationMask;
- (id)layoutController;
- (void)viewDidEndLiveResize;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)resetCursorRects;
- (id)videoChatController;
- (void)setLayerModel:(id)arg1;
- (void)dealloc;
- (void)cleanup;
- (id)initWithFrame:(struct CGRect)arg1 videoChatController:(id)arg2;

@end

