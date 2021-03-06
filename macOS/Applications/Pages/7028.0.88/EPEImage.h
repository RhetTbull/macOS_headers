//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EPEImage : NSObject
{
}

+ (id)resampleImageData:(id)arg1 scaleFactorBlock:(CDUnknownBlockType)arg2 resampleConditionBlock:(CDUnknownBlockType)arg3;
+ (void)mapNonPartitionedFixedDrawableLayout:(id)arg1 containedIn:(struct CGSize)arg2 toTextContainer:(id)arg3 textContainerTransformInRoot:(struct CGAffineTransform)arg4 state:(id)arg5;
+ (void)loadExportInfoForFixedDrawableMappedAsImageInto:(id)arg1 state:(id)arg2;
+ (struct CGRect)frameForCullingInRootForLayout:(id)arg1;
+ (void)mapStrokeOfFixedMovieLayoutInto:(id)arg1;
+ (id)pngDataByDrawingLayout:(id)arg1 intoCanvasOfSize:(struct CGSize)arg2 drawingBlock:(CDUnknownBlockType)arg3;
+ (void)mapReflowableGroupLeavesAsIndividualObjects:(id)arg1 toTextContainer:(id)arg2 textDirection:(int)arg3 state:(id)arg4;
+ (void)mapReflowableLeafDrawable:(id)arg1 toTextContainer:(id)arg2 geometryAdjustBlock:(CDUnknownBlockType)arg3 textDirection:(int)arg4 state:(id)arg5;
+ (struct CGRect)contentBoundsOfGroup:(id)arg1;
+ (struct CGRect)boundsForChildrenOfGroupLayout:(id)arg1 parentTransform:(struct CGAffineTransform)arg2;
+ (void)mapReflowableConnectionGroupAsOneImage:(id)arg1 toTextContainer:(id)arg2 textDirection:(int)arg3 state:(id)arg4;
+ (void)mapReflowableDrawableAsOneObject:(id)arg1 toTextContainer:(id)arg2 textDirection:(int)arg3 state:(id)arg4;
+ (double)maxReflowableDrawableLineWidthWithState:(id)arg1;
+ (void)mapReflowableDrawable:(id)arg1 toTextContainer:(id)arg2 geometryAdjustBlock:(CDUnknownBlockType)arg3 textDirection:(int)arg4 state:(id)arg5;
+ (void)writeDrawableExportInfo:(id)arg1 toTextContainer:(id)arg2 containedIn:(struct CGSize)arg3 textDirection:(int)arg4 state:(id)arg5;
+ (void)setMaxLineWidthForDrawableProperties:(id)arg1 orientation:(CDStruct_d3e445cc)arg2;
+ (void)loadExportInfoForReflowableDrawableInto:(id)arg1;
+ (void)tryToLoadExportInfoForImageInto:(id)arg1;
+ (void)mapTextShape:(id)arg1 charIndex:(unsigned long long)arg2 toTextContainer:(id)arg3 textContainerTransformInRoot:(struct CGAffineTransform)arg4 fitWidthToParentContainer:(BOOL)arg5 state:(id)arg6;
+ (id)mapHorizontalAlignmentOfDrawable:(id)arg1 charIndexInParentStorage:(unsigned long long)arg2 state:(id)arg3;
+ (id)stringForPolygon:(id)arg1 relativeToBounds:(struct CGRect)arg2;
+ (id)leftAndRightWrapPathsForPath:(id)arg1;
+ (id)sidePathWithChunks:(const vector_74617388 *)arg1 pathBounds:(struct CGRect)arg2 maximizeX:(BOOL)arg3;
+ (void)setUpTextWrap:(id)arg1;
+ (id)widthPropertiesForBlockWithWidth:(double)arg1 drawable:(id)arg2 state:(id)arg3;
+ (BOOL)maskOfImageLiesWithinImageBounds:(id)arg1;
+ (void)tryToLoadExportInfoForMovieInto:(id)arg1 layout:(id)arg2;
+ (struct CGRect)frameForMovieExportForFreehand:(id)arg1;
+ (BOOL)drawableHasShadowOrReflection:(id)arg1;
+ (BOOL)drawableHasReflection:(id)arg1;
+ (BOOL)drawableHasShadow:(id)arg1;
+ (id)propertiesForReflowableDrawable:(id)arg1 state:(id)arg2;
+ (id)propertiesForGeometry:(id)arg1 containedIn:(struct CGSize)arg2 orientation:(CDStruct_d3e445cc)arg3 state:(id)arg4;
+ (id)propertiesForPosition:(CDStruct_abcf4bc4)arg1 measureFromRight:(BOOL)arg2 positionAsMargins:(BOOL)arg3 cssPosition:(id)arg4 state:(id)arg5;
+ (id)propertiesForPosition:(CDStruct_abcf4bc4)arg1 measureFromRight:(BOOL)arg2 cssPosition:(id)arg3 state:(id)arg4;
+ (id)propertiesForPosition:(CDStruct_abcf4bc4)arg1 measureFromRight:(BOOL)arg2 state:(id)arg3;
+ (void)addPositionComponent:(double)arg1 withName:(id)arg2 relativeTo:(double)arg3 isMargin:(BOOL)arg4 toDictionary:(id)arg5 state:(id)arg6;
+ (id)propertiesForSize:(CDStruct_62efd7ad)arg1 orientation:(CDStruct_d3e445cc)arg2 state:(id)arg3;
+ (void)addSizeComponent:(double)arg1 withName:(id)arg2 relativeTo:(double)arg3 toDictionary:(id)arg4 state:(id)arg5;
+ (id)lengthAsStringProperty:(double)arg1 state:(id)arg2;
+ (id)lengthAsStringProperty:(double)arg1 relativeTo:(double)arg2 state:(id)arg3;
+ (void)mapFill:(id)arg1 rect:(CDStruct_0e76b425)arg2 toTextContainer:(id)arg3 state:(id)arg4;
+ (void)mapStroke:(id)arg1 rect:(CDStruct_0e76b425)arg2 toTextContainer:(id)arg3 state:(id)arg4;
+ (void)addImage:(id)arg1 withRect:(CDStruct_0e76b425)arg2 toTextContainer:(id)arg3 state:(id)arg4;
+ (id)imageDataForStroke:(id)arg1 rect:(CDStruct_0e76b425)arg2 returnClipRect:(CDStruct_0e76b425 *)arg3 state:(id)arg4;
+ (id)imageDataForFill:(id)arg1 size:(struct CGSize)arg2 state:(id)arg3;
+ (id)imageDataWithSize:(struct CGSize)arg1 drawInContextUsingBlock:(CDUnknownBlockType)arg2;
+ (void)loadExportInfoForReflowableDrawableMappedAsImageInto:(id)arg1;
+ (void)loadExportInfoForReflowableDrawableArrayMappedAsOneImageInto:(id)arg1;
+ (void)populateDrawableExportInfo:(id)arg1 fromImagedDrawableArrayExportInfo:(id)arg2;
+ (void)convertPdftoPngWithImagedDrawableArrayExportInfo:(id)arg1;
+ (id)pngDataWithPdfData:(id)arg1 naturalCropBounds:(struct CGRect)arg2 renderedSize:(struct CGSize)arg3 state:(id)arg4;
+ (void)createPdfDataWithImagedDrawableArrayExportInfo:(id)arg1;
+ (void)handleOneDrawableCaseWithImagedDrawableArrayExportInfo:(id)arg1;
+ (void)reportExportIssuesWithDrawableInfo:(id)arg1 state:(id)arg2;
+ (void)reportWarningForObjectsImagedInsideTitleOrCaption:(id)arg1 state:(id)arg2;
+ (id)validatedDrawableForRendering:(id)arg1 extraObjects:(id)arg2 state:(id)arg3;
+ (id)mapGifMovie:(id)arg1 state:(id)arg2;
+ (id)ensureAnimatedGifFrameSize:(id)arg1;
+ (id)mapSimpleImage:(id)arg1 state:(id)arg2;
+ (id)providerForImage:(id)arg1;
+ (struct CGRect)cropBoundsOfSimpleImage:(id)arg1;
+ (BOOL)imageIsSimple:(id)arg1;
+ (id)mapBoxStyleAndFloatDirection:(int *)arg1 fromDrawable:(id)arg2 state:(id)arg3;
+ (int)translateTextWrapAutomatic:(id)arg1 documentRoot:(id)arg2;
+ (struct CGRect)boundsForDrawable:(id)arg1 state:(id)arg2;
+ (BOOL)needOwnParagraphForDrawable:(id)arg1 returnAlignment:(int *)arg2 state:(id)arg3;
+ (id)mapImageBinary:(id)arg1 naturalCropBounds:(struct CGRect)arg2 imageSize:(struct CGSize)arg3 tintColor:(id)arg4 state:(id)arg5;
+ (id)dataUtiTypeOfBitmapImageProvider:(id)arg1;
+ (id)TSUImageFromCGPDFDocument:(struct CGPDFDocument *)arg1 scaleX:(float)arg2 scaleY:(float)arg3 naturalCropBounds:(struct CGRect)arg4 angle:(float)arg5 tintColor:(id)arg6;
+ (float)calculateMaxScaleFactor:(struct CGSize)arg1 withDesiredFactor:(float)arg2;
+ (BOOL)drawableContainsLeavesThatMapAsIndividualObjects:(id)arg1 state:(id)arg2;
+ (BOOL)leafDrawableMapsAsIndividualObject:(id)arg1 state:(id)arg2;
+ (BOOL)drawableContainsLeavesThatMapAsBlocks:(id)arg1 state:(id)arg2;
+ (BOOL)leafDrawableMapsAsBlock:(id)arg1 state:(id)arg2;
+ (BOOL)shapeContainsDrawablesThatMapAsIndividualObjectsRecursively:(id)arg1 state:(id)arg2;
+ (id)leafDrawablesForDrawable:(id)arg1;
+ (id)groupByCastingDrawable:(id)arg1;

@end

