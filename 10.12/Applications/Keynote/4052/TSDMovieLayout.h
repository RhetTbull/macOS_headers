//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDMediaLayout.h"

@class TSDInfoGeometry;

@interface TSDMovieLayout : TSDMediaLayout
{
    TSDInfoGeometry *mDynamicInfoGeometry;
}

- (void)p_destroyDynamicCopies;
- (void)p_createDynamicCopies;
- (struct CGRect)computeAlignmentFrameInRoot:(BOOL)arg1;
- (id)computeLayoutGeometry;
- (struct CGRect)fullReflectionFrame;
- (struct CGRect)fullReflectionBoundsForRect:(struct CGRect)arg1;
- (void)endDynamicOperation;
- (void)endResize;
- (void)takeSizeFromTracker:(id)arg1;
- (void)beginDynamicOperation;
- (void)takeRotationFromTracker:(id)arg1;
- (id)layoutGeometryFromInfo;
- (BOOL)supportsRotation;
- (id)i_computeWrapPath;
- (void)processChangedProperty:(int)arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end

