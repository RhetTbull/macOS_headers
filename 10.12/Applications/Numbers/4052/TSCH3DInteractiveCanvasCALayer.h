//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DCALayer.h"

@class TSCH3DFBOResource;

@interface TSCH3DInteractiveCanvasCALayer : TSCH3DCALayer
{
    TSCH3DFBOResource *mLayerFBOResource;
}

- (Class)layerDelegateClass;
- (void)presentLayerWithPresenterInfo:(const struct PresenterInfo *)arg1;
- (id)layerFBOResource;
- (void)willDestroyFramebuffer:(id)arg1 session:(id)arg2;
- (void)dealloc;

@end

