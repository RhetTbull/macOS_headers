//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PVMediaElementBase.h"

@interface PVBlankMediaElement : PVMediaElementBase
{
}

- (void)discardLayer;
- (id)layerForView:(id)arg1 scaleFactor:(double)arg2 zoomCenter:(struct CGPoint)arg3;
- (id)cachedLayer;
- (BOOL)canRenderToLayer;
- (id)thumbnailSubtitle;
- (id)thumbnailTitle;
- (id)thumbnailOfSize:(struct CGSize)arg1;
- (double)thumbnailAspect;
- (void)removeAnnotationAtIndex:(unsigned long long)arg1;
- (void)insertAnnotation:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)annotations;
- (BOOL)isEdited;
- (id)initWithParentContainer:(id)arg1;

@end

