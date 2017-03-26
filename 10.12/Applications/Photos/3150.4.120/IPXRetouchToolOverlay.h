//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewerZoomOverlay.h"

#import "IPXViewerOverlayViewDelegate-Protocol.h"

@class NSCursor, NSString;

@interface IPXRetouchToolOverlay : IPXViewerZoomOverlay <IPXViewerOverlayViewDelegate>
{
    struct CGPoint _sourcePoint;
    BOOL _sourcePointChosen;
    BOOL _showingSourceAlert;
    NSCursor *_cachedCursor;
    double _cachedCursorRadius;
    BOOL _spaceBarDown;
    BOOL _isObservingUserDefaults;
}

- (void).cxx_destruct;
- (id)cursorForViewerOverlayView:(id)arg1;
- (void)a_clearRetouchSourcePoint:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)cursor;
- (void)flagsChanged:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGPoint)viewPointFromMasterPoint:(struct CGPoint)arg1;
- (struct CGPoint)masterPointFromViewPoint:(struct CGPoint)arg1;
- (id)_descriptionEditController;
- (id)preferredFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (BOOL)visibleDuringViewerRotation;
- (void)overlayWillDeactivate;
- (void)overlayDidActivate;
- (void)_stopObservingUserDefaults;
- (void)_startObservingUserDefaults;
- (BOOL)allowsPanningWhileZoomed;
- (BOOL)forwardsEventsToSiblingOverlays;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

