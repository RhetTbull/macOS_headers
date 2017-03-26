//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDNoDefaultImplicitActionLayer.h"

@class CALayer, TSUImage;

@interface KNMacInspectorSlideThumbnailLayer : TSDNoDefaultImplicitActionLayer
{
    CALayer *mImageLayer;
    double mAspectRatio;
    TSUImage *mThumbnailImage;
}

@property(retain, nonatomic) TSUImage *thumbnailImage; // @synthesize thumbnailImage=mThumbnailImage;
- (struct CGRect)p_thumbnailFrameForBounds:(struct CGRect)arg1 aspectRatio:(double)arg2;
- (void)layoutSublayers;
- (void)dealloc;
- (id)init;

@end

