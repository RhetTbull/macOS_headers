//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDDecorator-Protocol.h"

@class KNInteractiveCanvasController, NSString, TSUNoCopyDictionary;
@protocol KNBadgeDecoratorDelegate;

@interface KNBadgeDecorator : NSObject <TSDDecorator>
{
    KNInteractiveCanvasController *mInteractiveCanvasController;
    id <KNBadgeDecoratorDelegate> mDelegate;
    TSUNoCopyDictionary *mDecoratorLayersByInfo;
    BOOL mDecoratorLayersHidden;
    BOOL mWillBeginScrollingOperationCalled;
}

@property(nonatomic) id <KNBadgeDecoratorDelegate> delegate; // @synthesize delegate=mDelegate;
@property(nonatomic) KNInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=mInteractiveCanvasController;
- (void)p_setDecoratorLayersHidden:(BOOL)arg1;
- (void)didEndScrollingOperation;
- (void)willBeginScrollingOperation;
- (void)didEndZoomingOperation;
- (void)willBeginZoomingOperation;
- (void)didEndDynamicOperation;
- (void)willBeginDynamicOperation;
- (BOOL)hidesBadgesDuringDynamicOperations;
- (void)p_layoutDecoratorLayer:(id)arg1 forRep:(id)arg2;
- (id)decoratorOverlayLayers;
- (id)repForDecoratorAtBoundsPoint:(struct CGPoint)arg1;
- (void)invalidateBadges;
- (struct NSEdgeInsets)badgeMarginsForRep:(id)arg1;
- (struct CGPoint)badgePositionForRep:(id)arg1;
- (id)badgeImageForInfo:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

