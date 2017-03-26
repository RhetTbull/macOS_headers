//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OADShadowEffect.h"

@interface OADOuterShadowEffect : OADShadowEffect
{
    float mXScale;
    float mYScale;
    float mXSkew;
    float mYSkew;
    int mAlignment;
    BOOL mRotateWithShape;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setRotateWithShape:(BOOL)arg1;
- (BOOL)rotateWithShape;
- (void)setAlignment:(int)arg1;
- (int)alignment;
- (void)setYSkew:(float)arg1;
- (float)ySkew;
- (void)setXSkew:(float)arg1;
- (float)xSkew;
- (void)setYScale:(float)arg1;
- (float)yScale;
- (void)setXScale:(float)arg1;
- (float)xScale;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

