//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AKAnnotation, AKController, AKPageModelController, CALayer, NSArray, NSCursor, NSData, NSIndexSet, NSUndoManager, NSView, NSViewController;

@protocol AKControllerDelegateProtocol <NSObject>
- (NSViewController *)popoverPresentingViewControllerForAnnotationController:(AKController *)arg1;
- (NSUndoManager *)undoManagerForAnnotationController:(AKController *)arg1;
- (NSData *)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(AKController *)arg5;
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(AKController *)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;

@optional
- (NSIndexSet *)characterIndexesForQuadPoints:(NSArray *)arg1 onPageAtIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (NSArray *)quadPointsForCharacterIndexes:(NSIndexSet *)arg1 onPageAtIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (void)setAllowsNativeRenderingOfHighlightableSelection:(BOOL)arg1 forAnnotationController:(AKController *)arg2;
- (void)clearHighlightableSelectionForAnnotationController:(AKController *)arg1;
- (NSIndexSet *)highlightableSelectionCharacterIndexesOnPageAtIndex:(unsigned long long)arg1 forAnnotationController:(AKController *)arg2;
- (BOOL)hasHighlightableSelectionForAnnotationController:(AKController *)arg1;
- (NSArray *)controller:(AKController *)arg1 willSetToolbarItems:(NSArray *)arg2;
- (void)controllerWillDismissSignatureManagerView:(AKController *)arg1;
- (void)controllerWillShowSignatureManagerView:(AKController *)arg1;
- (void)controllerWillDismissSignatureCaptureView:(AKController *)arg1;
- (void)controllerWillShowSignatureCaptureView:(AKController *)arg1;
- (CALayer *)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(AKController *)arg2;
- (BOOL)shouldPlaceProposedFormElementAtRect:(struct CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (BOOL)shouldPlaceFormElementAtPoint:(struct CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(AKController *)arg3;
- (BOOL)controllerShouldDetectFormElements:(AKController *)arg1;
- (struct CGRect)postioningRectForCandidatePicker;
- (void)positionSketchOverlay:(NSView *)arg1 forAnnotationController:(AKController *)arg2;
- (void)removeAuxiliaryView:(NSView *)arg1 forAnnotationController:(AKController *)arg2;
- (void)placeAuxiliaryView:(NSView *)arg1 forAnnotationController:(AKController *)arg2;
- (void)controllerDidExitToolMode:(AKController *)arg1;
- (void)controllerWillExitToolMode:(AKController *)arg1;
- (void)controllerDidEnterToolMode:(AKController *)arg1;
- (void)controllerWillEnterToolMode:(AKController *)arg1;
- (void)controller:(AKController *)arg1 didPlaceSingleShotAnnotation:(AKAnnotation *)arg2 onPageModelController:(AKPageModelController *)arg3;
- (void)controller:(AKController *)arg1 willPlaceSingleShotAnnotation:(AKAnnotation *)arg2 onProposedPageModelController:(id *)arg3;
- (void)setPreferredCursor:(NSCursor *)arg1 forAnnotationController:(AKController *)arg2;
- (void)penStrokeCompletedForAnnotationController:(AKController *)arg1;
- (void)editDetectedForAnnotationController:(AKController *)arg1;
- (void)editCheckpointReachedForAnnotationController:(AKController *)arg1;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(AKController *)arg2;
@end

