//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "MKMapViewDelegate-Protocol.h"

@class MIKMLWindowController, MILocationSimulator, MKCircle, MKGeodesicPolyline, MKMapView, NSString, NSWindow, NVContinuityDebugWindowController, NVKMLAnnotationProvider, NVMainWindowController, NVSearchManager, NVSteppingDebugWindowController, VKDebugSettings, VKMapView;

__attribute__((visibility("hidden")))
@interface NVDebugWindowController : NSWindowController <MKMapViewDelegate>
{
    MKCircle *_parisOverlayCircle;
    MKGeodesicPolyline *_polyline;
    NVSearchManager *_searchManager;
    NVSteppingDebugWindowController *_steppingViewController;
    NVContinuityDebugWindowController *_continuityWindowController;
    VKDebugSettings *_vkDebugSettings;
    NSWindow *_MapsDebugWindow;
    NSWindow *_NavigationDebugWindow;
    NSWindow *_MapDisplayDebugWindow;
    NSWindow *_LoggingDebugWindow;
    NSWindow *_ServerConfigDebugWindow;
    BOOL _showMacsInPushToDevice;
    MILocationSimulator *_locationSimulator;
    MIKMLWindowController *_kmlWindowController;
    NVKMLAnnotationProvider *_kmlAnnotationProvider;
}

+ (id)keyPathsForValuesAffectingVkMapView;
+ (id)keyPathsForValuesAffectingMapView;
+ (id)keyPathsForValuesAffectingMainWindowController;
@property(retain, nonatomic) NVKMLAnnotationProvider *kmlAnnotationProvider; // @synthesize kmlAnnotationProvider=_kmlAnnotationProvider;
@property(retain, nonatomic) MIKMLWindowController *kmlWindowController; // @synthesize kmlWindowController=_kmlWindowController;
@property(retain, nonatomic) MILocationSimulator *locationSimulator; // @synthesize locationSimulator=_locationSimulator;
@property BOOL showMacsInPushToDevice; // @synthesize showMacsInPushToDevice=_showMacsInPushToDevice;
- (void).cxx_destruct;
- (void)loadKML:(id)arg1;
- (void)rapDisplayPushDetails:(id)arg1;
- (void)rapPresentFakeResolution:(id)arg1;
- (void)showBookmarksMenu:(id)arg1;
- (void)showDebugWindow:(id)arg1;
- (void)logTileState:(id)arg1;
- (void)searchQueryTest:(id)arg1;
- (void)routeTest:(id)arg1;
- (void)testScroll:(id)arg1;
- (void)testRotate:(id)arg1;
- (void)stopSimulateUserLocation:(id)arg1;
- (id)droppedPinFromMapView:(id)arg1;
- (void)startSimulateUserLocationAsPingLocation:(id)arg1;
- (void)testPinch:(id)arg1;
- (void)travel5TimesBetweenCupertinoAndSanFrancisco:(id)arg1;
- (void)travelOnceBetweenCupertinoAndSanFranciscoInMapView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)goToCupertino:(id)arg1;
- (void)goToSanFrancisco:(id)arg1;
- (void)goToLosAngeles:(id)arg1;
- (void)goToNewYork:(id)arg1;
- (void)goToParis:(id)arg1;
- (void)testMapSnapshotCreator:(id)arg1;
- (void)testMapitemURL:(id)arg1;
@property(readonly) VKDebugSettings *vkDebugSettings;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)addAnnotation:(id)arg1;
@property BOOL showFakeiPadInPushToDevice;
@property BOOL showFakeiPhoneInPushToDevice;
- (void)_setBool:(BOOL)arg1 toPrefWithSelector:(SEL)arg2;
- (BOOL)_boolFromPrefWithSelector:(SEL)arg1;
- (void)runPerformanceTest:(id)arg1;
- (id)getGPUs;
- (void)removeAllOverlays:(id)arg1;
- (void)toggleLineFromCupertinoToParis:(id)arg1;
- (void)removeOverlayForParis:(id)arg1;
- (void)addOverlayForParis:(id)arg1;
- (void)addOverlayForCurrentRegion:(id)arg1;
- (void)showContinuityWindow:(id)arg1;
- (void)showSteppingWindow:(id)arg1;
@property(readonly) VKMapView *vkMapView;
@property(readonly) MKMapView *mapView;
@property(readonly) NVMainWindowController *mainWindowController;
- (id)sharedMapsDelegate;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

