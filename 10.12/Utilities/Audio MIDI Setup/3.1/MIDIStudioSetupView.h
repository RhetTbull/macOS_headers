//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MIDIDeviceWidget, MIDIEndpointWidget, MIDISetupManager, NSBezierPath, NSDate, NSMutableArray, NSTimer, SelectableWidget, SelectionManager;

@interface MIDIStudioSetupView : NSView
{
    MIDISetupManager *mMIDISetupManager;
    NSTimer *mViewUpdateTimer;
    BOOL mTestSetupModeIsActive;
    MIDIEndpointWidget *mMIDIOutputTestSourceEndpoint;
    MIDIDeviceWidget *mMIDIOutputTestDestinationDevice;
    NSDate *mMIDIInputDataSoundLastTimestamp;
    BOOL mAboutToInstallNewConfiguration;
    SelectionManager *mSelectionManager;
    NSMutableArray *mDraggingWidgets;
    NSMutableArray *mDraggingOffsets;
    BOOL mIsDraggingSelection;
    struct CGRect mDragSelectionRect;
    MIDIEndpointWidget *mPotentialConnection;
    NSBezierPath *mConnectionDrag;
    float mDoubleClickTimeStamp;
    float mMasterIconSize;
    unsigned int mTimerIncrementsSinceLastMouseMotion;
    SelectableWidget *mCurrentTooltip;
}

+ (void)initialize;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)viewDidMoveToWindow;
- (void)keyDown:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)delete:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDownSelection:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)deselectAll;
- (void)setAboutToInstallNewConfiguration:(BOOL)arg1;
- (void)setSelectedWidgetOrWidgets:(id)arg1 withBehavior:(int)arg2 userInfo:(id)arg3;
- (id)selectedWidgets;
- (id)widgetSelectionManager;
- (void)setTestSetupModeIsActive:(BOOL)arg1;
- (void)setIconSize:(float)arg1;
- (void)setMIDISetupManager:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)privUpdateWidgetViewViaNotification:(id)arg1;
- (void)privMIDIStateWasThrashed:(id)arg1;
- (void)privMIDIStateWillBeThrashed:(id)arg1;
- (void)privDeselectWidgetsViaNotification:(id)arg1;
- (void)privSelectWidgetsViaNotification:(id)arg1;
- (void)privUpdateFrameViaNotification:(id)arg1;
- (void)privPeriodicUpdater;
- (BOOL)privResizeViewIfNecessary;
- (void)privToolTipTimerResponder;

@end

