//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GPointSet.h"

@class GPolygon3D;

@interface GPointSet3D : GPointSet
{
    GPolygon3D *mPolygon;
    id mGLObject;
}

+ (id)defaultAttributes;
- (void)addItemsToContextualMenu:(id)arg1;
- (void)frameLowerLimitCoord:(double *)arg1 kind:(int *)arg2 upperLimitCoord:(double *)arg3 kind:(int *)arg4;
- (void)glDrawContent:(BOOL)arg1;
- (void)updateSelf;
- (void)updateAttributeSelf;
- (void)finishUpdatePointSet;
- (void)updateGLObject;
- (void)lineTo:(double *)arg1;
- (void)startUpdatePointSet;
- (unsigned long long)dimension;
- (void)dealloc;
- (void)encodeStateWithCoder:(id)arg1;
- (void)decodeStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

