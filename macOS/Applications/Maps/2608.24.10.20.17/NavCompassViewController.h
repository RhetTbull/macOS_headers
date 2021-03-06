//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MapViewResponderHandling-Protocol.h"
#import "MapViewZoomControllerDelegate-Protocol.h"
#import "NavigationDisplayCameraDelegate-Protocol.h"
#import "NavigationDisplayMapViewCompassDelegate-Protocol.h"

@class MKCompassView, NSString, NSTimer;
@protocol NavActionCoordination;

__attribute__((visibility("hidden")))
@interface NavCompassViewController : UIViewController <NavigationDisplayMapViewCompassDelegate, MapViewResponderHandling, NavigationDisplayCameraDelegate, MapViewZoomControllerDelegate>
{
    NSTimer *_hideCompassTimer;
    id <NavActionCoordination> _coordinator;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NavActionCoordination> coordinator; // @synthesize coordinator=_coordinator;
- (void)_invalidate;
- (void)_revertCompassVisibility:(id)arg1;
- (void)_scheduleRevertCompassVisibilityToValue:(double)arg1;
- (void)_makeCompassVisible:(BOOL)arg1 animated:(BOOL)arg2 revertAfterTimeout:(BOOL)arg3;
- (void)_compassTapped:(id)arg1;
- (BOOL)_shouldShowCompass;
- (void)_updateCompassVisibilityAnimated:(BOOL)arg1;
- (void)mapViewNavigationCameraHasStoppedPanning:(id)arg1;
- (void)mapViewNavigationCameraHasStartedPanning:(id)arg1;
- (void)mapViewZoomController:(id)arg1 didChangeMapViewZoom:(unsigned long long)arg2;
- (void)didTapMapView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)mapView:(id)arg1 didUpdateYaw:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
@property(readonly, nonatomic) MKCompassView *compassView;
- (void)loadView;
- (BOOL)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

