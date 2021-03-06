//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

@class DXNameWindow, DXSettings, NSLayoutConstraint, NSTrackingArea;

@interface DXDropTargetView : NSImageView
{
    BOOL _isDragging;
    BOOL _isTracking;
    int _toolbarStyle;
    DXSettings *_settings;
    NSTrackingArea *_trackingArea;
    DXNameWindow *_nameWindow;
    NSLayoutConstraint *_iconWidth;
}

- (void).cxx_destruct;
@property __weak NSLayoutConstraint *iconWidth; // @synthesize iconWidth=_iconWidth;
@property int toolbarStyle; // @synthesize toolbarStyle=_toolbarStyle;
@property(retain) DXNameWindow *nameWindow; // @synthesize nameWindow=_nameWindow;
@property(retain) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property BOOL isTracking; // @synthesize isTracking=_isTracking;
@property BOOL isDragging; // @synthesize isDragging=_isDragging;
@property __weak DXSettings *settings; // @synthesize settings=_settings;
- (id)finderSelection;
- (id)styledImageWithHighlight:(BOOL)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)preferredDragOperationForMask:(unsigned long long)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)dealloc;
- (void)updateTrackingAreas;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)awakeFromNib;

@end

