//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EPEImage : NSObject
{
}

+ (BOOL)mapDrawable:(id)arg1 toTextContainer:(id)arg2 properties:(id)arg3 state:(id)arg4;
+ (BOOL)mapDrawable:(id)arg1 toTextContainer:(id)arg2 style:(id)arg3 state:(id)arg4;
+ (BOOL)mapDrawable:(id)arg1 toTextContainer:(id)arg2 style:(id)arg3 properties:(id)arg4 state:(id)arg5;
+ (void)mapImageBinary:(id)arg1 textContainer:(id)arg2 alternateText:(id)arg3 floatSide:(int)arg4 box:(id)arg5 renderedSize:(struct CGSize)arg6 style:(id)arg7 properties:(id)arg8 state:(id)arg9;
+ (id)mapDrawablesAsImage:(id)arg1 renderedSize:(struct CGSize *)arg2 state:(id)arg3;
+ (id)validateDrawablesForRendering:(id)arg1;
+ (id)mapDrawableAsImage:(id)arg1 renderedSize:(struct CGSize *)arg2 state:(id)arg3;
+ (id)mapGifImage:(id)arg1 renderedSize:(struct CGSize *)arg2 state:(id)arg3;
+ (id)mapImage:(id)arg1 renderedSize:(struct CGSize *)arg2 state:(id)arg3;
+ (id)mapBoxStyleAndFloatDirection:(int *)arg1 fromDrawable:(id)arg2 state:(id)arg3;
+ (int)translateTextWrapAutomatic:(id)arg1 documentRoot:(id)arg2;
+ (struct CGRect)boundsForDrawable:(id)arg1 state:(id)arg2;
+ (BOOL)needOwnParagraphForDrawable:(id)arg1 returnAlignment:(int *)arg2 state:(id)arg3;
+ (id)mapImageBinary:(id)arg1 naturalCropBounds:(struct CGRect)arg2 imageSize:(struct CGSize)arg3 tintColor:(id)arg4 state:(id)arg5;
+ (id)TSUImageFromCGPDFDocument:(struct CGPDFDocument *)arg1 scaleX:(float)arg2 scaleY:(float)arg3 naturalCropBounds:(struct CGRect)arg4;
+ (float)calculateMaxScaleFactor:(struct CGSize)arg1 withDesiredFactor:(float)arg2;

@end

