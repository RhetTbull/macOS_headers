//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "InfiniteSwipeControllerGestureDelegate-Protocol.h"

@class NSStepper, NSString, NSTextField, NSWindow;

@interface CalUISwipingPrefController : NSObject <InfiniteSwipeControllerGestureDelegate>
{
    NSWindow *_window;
    NSStepper *_horizontalThreshold;
    NSTextField *_horizontalThresholdText;
    NSStepper *_verticalThreshold;
    NSTextField *_verticalThresholdText;
    NSTextField *_gestureSpeed;
    NSTextField *_gestureType;
}

@property(retain) NSTextField *gestureType; // @synthesize gestureType=_gestureType;
@property(retain) NSTextField *gestureSpeed; // @synthesize gestureSpeed=_gestureSpeed;
@property(retain) NSTextField *verticalThresholdText; // @synthesize verticalThresholdText=_verticalThresholdText;
@property(retain) NSStepper *verticalThreshold; // @synthesize verticalThreshold=_verticalThreshold;
@property(retain) NSTextField *horizontalThresholdText; // @synthesize horizontalThresholdText=_horizontalThresholdText;
@property(retain) NSStepper *horizontalThreshold; // @synthesize horizontalThreshold=_horizontalThreshold;
@property(retain) NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)infiniteSwipeController:(id)arg1 didProcessGestureWithSpeed:(double)arg2 type:(id)arg3;
- (void)_setVerticalThreshold:(id)arg1;
- (void)_setHorizontalThreshold:(id)arg1;
- (void)show;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

