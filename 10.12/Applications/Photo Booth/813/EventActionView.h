//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer;

@interface EventActionView : NSView
{
    CALayer *_lastLayer;
    CALayer *_lastDragLayer;
}

- (void).cxx_destruct;
- (void)scrollWheel:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)sendEvent:(id)arg1 name:(id)arg2 toLayer:(id)arg3;
- (id)_layerForEvent:(id)arg1;
- (id)layerForEvent:(id)arg1;
- (id)_eventDict:(id)arg1 layer:(id)arg2;
- (struct CGPoint)_cgPointInLayer:(id)arg1 withPoint:(struct CGPoint)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (BOOL)acceptsFirstResponder;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (int)cameraDummyProperty;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)layerForDrag:(id)arg1;

@end

