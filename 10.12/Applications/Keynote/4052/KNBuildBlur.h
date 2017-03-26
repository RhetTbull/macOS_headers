//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNAnimationEffect.h"

#import "KNAnimationPluginArchiving-Protocol.h"
#import "KNFrameBuildAnimator-Protocol.h"

@class KNAnimParameterGroup, NSMapTable, NSString, TSDGLShader;

@interface KNBuildBlur : KNAnimationEffect <KNFrameBuildAnimator, KNAnimationPluginArchiving>
{
    KNAnimParameterGroup *_parameterGroup;
    TSDGLShader *_shader;
    NSMapTable *_blurTextures;
    NSMapTable *_dataBuffers;
    struct CATransform3D _projectionMatrix;
    struct CGRect _drawableFrame;
    struct CGRect _animationRect;
}

+ (void)addBlurTexturesToMapTable:(id)arg1 andDataBuffersToMapTable:(id)arg2 withTextures:(id)arg3 blurSteps:(unsigned long long)arg4 maxBlurRadius:(double)arg5 stepsToDecreaseRadius:(double)arg6 capabilities:(id)arg7;
+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(long long)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(long long)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (id)thumbnailImageNameForType:(long long)arg1;
+ (BOOL)requiresSingleTexturePerStage;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(long long)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(long long)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (void)animationDidEndWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)p_setupShadersWithContext:(id)arg1;
- (void)p_setupMVPMatricesWithContext:(id)arg1;
- (void)p_setupBlurTexturesWithContext:(id)arg1;
- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (void)dealloc;
- (void)teardown;
- (id)initWithAnimationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

