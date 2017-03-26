//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DLens.h"

@interface TSCH3DPerspectiveLens : TSCH3DLens
{
    float mFOV;
    float mAspect;
}

@property(nonatomic) float aspect; // @synthesize aspect=mAspect;
@property(nonatomic) float fov; // @synthesize fov=mFOV;
- (void)calculateCullingPlanes:(vector_a9ee3a08 *)arg1;
- (id)shiftedByPercentage:(tvec2_84d5962d *)arg1;
- (id)narrowedByNormalizedBounds:(box_80622335 *)arg1;
- (id)asFrustumLens;
- (tmat4x4_3074befe)matrix;
- (struct FrustumRect)frustumRectAtDistance:(float)arg1;
- (struct FrustumRect)frustumRect;
@property(readonly, nonatomic) float height;
@property(readonly, nonatomic) float width;
- (id)matrixDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

