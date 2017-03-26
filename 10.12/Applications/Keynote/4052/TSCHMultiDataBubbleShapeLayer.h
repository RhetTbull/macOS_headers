//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CATransformLayer.h>

#import "TSCHMultiDataElementShapeLayer-Protocol.h"

@class CALayer, CAShapeLayer, TSDFill;

@interface TSCHMultiDataBubbleShapeLayer : CATransformLayer <TSCHMultiDataElementShapeLayer>
{
    TSDFill *mFill;
    double mViewScale;
    CAShapeLayer *mMaskLayer;
    CAShapeLayer *mStrokeLayer;
    CALayer *mImageLayer;
    double _viewScale;
}

@property(nonatomic) double viewScale; // @synthesize viewScale=_viewScale;
@property(retain, nonatomic) TSDFill *fill; // @synthesize fill=mFill;
- (void)setContentsScale:(double)arg1;
- (void)setDelegate:(id)arg1;
- (id)currentValueLayer;
- (BOOL)aboveIntercept;
- (void)updateElementFrame:(struct CGRect)arg1 forSeries:(id)arg2 addingAnimationsToAnimationInfo:(id)arg3;
- (void)updateElementFrameToNullForSeries:(id)arg1 addingAnimationsToAnimationInfo:(id)arg2;
- (struct CGAffineTransform)p_renderingSymbolElementTransform;
- (id)p_bubbleElementsRenderer;
- (void)p_addAnimationsForUpdatingPath:(struct CGPath *)arg1 position:(struct CGPoint)arg2 toAnimationInfo:(id)arg3 onLayer:(id)arg4;
- (void)p_addLayerAnimationsForUpdatingImage:(struct CGImage *)arg1 bounds:(struct CGRect)arg2 position:(struct CGPoint)arg3 toAnimationInfo:(id)arg4;
- (void)setFill:(id)arg1 stroke:(id)arg2 withViewScale:(double)arg3;
- (id)chartRep;
- (void)dealloc;
- (id)init;

@end

