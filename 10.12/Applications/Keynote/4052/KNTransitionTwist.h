//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNAnimationEffect.h"

#import "KNAnimationPluginArchiving-Protocol.h"
#import "KNFrameAnimator-Protocol.h"

@class NSArray, NSString, TSDGLDataBuffer, TSDGLMotionBlurEffect, TSDGLShader;

@interface KNTransitionTwist : KNAnimationEffect <KNFrameAnimator, KNAnimationPluginArchiving>
{
    TSDGLMotionBlurEffect *_motionBlurEffect;
    TSDGLShader *_shader;
    TSDGLDataBuffer *_dataBuffer;
    NSArray *_bufferAttributes;
    unsigned long long _positionAttributeIndex;
    unsigned long long _texCoordAttributeIndex;
    unsigned long long _normalAttributeIndex;
    unsigned long long _prevPositionAttributeIndex;
    long long _numPoints;
    double _twistyness;
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(long long)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(long long)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (id)thumbnailImageNameForType:(long long)arg1;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(long long)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(long long)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)p_drawTwistWithPercent:(double)arg1 texture:(id)arg2 oldTexture:(id)arg3;
- (void)update:(id)arg1 withContext:(id)arg2;
- (double)fx:(double)arg1 withPercent:(double)arg2;
- (void)drawGrid:(id)arg1;
- (void)createArrays:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (void)p_teardown;
- (id)initWithAnimationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

