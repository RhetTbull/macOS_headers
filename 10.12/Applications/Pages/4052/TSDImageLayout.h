//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDMediaLayout.h"

#import "TSDShapeControlLayout-Protocol.h"

@class TSDImageAdjustments, TSDInfoGeometry, TSDLayoutGeometry, TSDMaskLayout, TSDPathSource, TSUBezierPath;
@protocol TSDSmartPathSource;

@interface TSDImageLayout : TSDMediaLayout <TSDShapeControlLayout>
{
    TSDLayoutGeometry *mImageGeometry;
    TSDMaskLayout *mMaskLayout;
    struct CGPath *mPathToStroke;
    struct CGAffineTransform mLayoutToImageTransform;
    struct CGAffineTransform mLayoutToMaskTransform;
    BOOL mMaskIntersectsImage;
    TSUBezierPath *mTracedPath;
    int mHasAlpha;
    TSDLayoutGeometry *mBaseImageLayoutGeometry;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDInfoGeometry *mBaseInfoGeometry;
    int mMaskEditMode;
    BOOL mScalingInMaskMode;
    BOOL mInInstantAlphaMode;
    BOOL mIsUpdatingImageAdjustments;
    TSDImageAdjustments *mDynamicImageAdjustments;
}

@property(readonly, nonatomic, getter=isInInstantAlphaMode) BOOL inInstantAlphaMode; // @synthesize inInstantAlphaMode=mInInstantAlphaMode;
@property(readonly, nonatomic, getter=isInMaskScaleMode) BOOL inMaskScaleMode; // @synthesize inMaskScaleMode=mScalingInMaskMode;
@property(readonly, nonatomic) int maskEditMode; // @synthesize maskEditMode=mMaskEditMode;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)arg1;
- (void)p_createDynamicCopies;
- (BOOL)supportsRotation;
- (id)i_computeWrapPath;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (void)dynamicImageAdjustmentsChangeDidEnd;
- (void)dynamicImageAdjustmentsUpdateToValue:(id)arg1;
- (void)dynamicImageAdjustmentsChangeDidBegin;
- (BOOL)isDynamicallyChangingImageAdjustments;
- (id)imageAdjustments;
- (id)maskLayout;
- (struct CGAffineTransform)imageDataToVisualSizeTransform;
- (struct CGAffineTransform)layoutToMaskTransform;
- (struct CGAffineTransform)layoutToImageTransform;
- (struct CGSize)sizeOfFrameRectIncludingCoverage;
- (struct CGPath *)pathToStroke;
- (BOOL)hasMaskingPath;
- (id)inspectorGeometry;
- (id)imageGeometryInRoot;
- (id)originalImageGeometry;
- (id)imageGeometry;
- (id)imageInfo;
- (void)endInstantAlphaMode;
- (void)beginInstantAlphaMode;
- (void)maskModeScaleDidEnd;
- (void)maskModeScaleDidBegin;
@property(readonly, nonatomic) int maskEditModeForLayoutState;
@property(readonly, nonatomic) int maskEditModeForResizing;
@property(readonly, nonatomic) int maskEditModeForRotating;
@property(readonly, nonatomic) int maskEditModeForDragging;
@property(readonly, nonatomic) BOOL isResizingInMaskEditMode;
@property(readonly, nonatomic) BOOL isRotatingInMaskEditMode;
@property(readonly, nonatomic) BOOL isDraggingInMaskEditMode;
@property(readonly, nonatomic, getter=isInMaskEditMode) BOOL inMaskEditMode;
- (void)endMaskEditMode;
- (void)beginEditingMaskInMaskEditMode;
- (void)beginEditingImageInMaskEditMode;
- (void)maskWasApplied;
- (void)maskWasReset;
- (struct CGRect)pathBoundsWithoutStroke;
@property(readonly, nonatomic) TSDPathSource<TSDSmartPathSource> *smartPathSource;
- (id)commandToClampModelToLayoutSize;
- (void)takeScaledImageGeometry:(id)arg1 maskGeometry:(id)arg2;
- (void)takeSizeFromTracker:(id)arg1;
- (void)resizeWithTransform:(struct CGAffineTransform)arg1 asChild:(BOOL)arg2;
- (BOOL)shouldSnapWhileResizing;
- (BOOL)resizeMayChangeAspectRatio;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (struct CGPoint)centerForConnecting;
- (struct CGPoint)centerForRotationInMaskMode;
- (struct CGPoint)centerForRotation;
- (void)takeRotationFromTracker:(id)arg1;
- (struct CGAffineTransform)layoutTransformInInfoSpace:(struct CGAffineTransform)arg1;
- (void)endDrag;
- (void)dragBy:(struct CGPoint)arg1;
- (void)beginDrag;
- (id)commandToResetToSize:(struct CGSize)arg1;
- (void)beginResize;
- (void)endDynamicOperation;
- (void)beginDynamicOperation;
- (BOOL)maskIntersectsImage;
- (BOOL)shouldRenderFrameStroke;
- (BOOL)shouldDisplayGuides;
- (BOOL)isInvisible;
- (BOOL)hasAlpha;
- (void)offsetGeometryBy:(struct CGPoint)arg1;
- (struct CGRect)alignmentFrameForProvidingGuidesInRoot;
- (struct CGRect)computeAlignmentFrameInRoot:(BOOL)arg1;
- (void)updateChildrenFromInfo;
- (void)processChangedProperty:(int)arg1;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (id)currentInfoGeometry;
- (id)visibleGeometries;
- (id)geometryForTransforming;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (id)newProxyWithEditor:(id)arg1 documentRoot:(id)arg2;

@end

