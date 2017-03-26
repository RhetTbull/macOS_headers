//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KNAnimatedBuild, KNAnimationRandomGenerator, NSArray, NSDictionary, TSDGLState;

@protocol KNAnimationPluginContext <NSObject>
@property(readonly, nonatomic) BOOL isWarmingUp;
@property(readonly, nonatomic) TSDGLState *GLState;
@property(readonly, nonatomic) BOOL isPreview;
@property(readonly, nonatomic) BOOL isFrameRenderer;
@property(readonly, nonatomic) BOOL isMagicMove;
@property(readonly, nonatomic) BOOL isTransition;
@property(readonly, nonatomic) BOOL isBuild;
@property(readonly, nonatomic) NSArray *magicMoveMatches;
@property(readonly, nonatomic) NSDictionary *transitionAttributes;
@property(readonly, nonatomic) KNAnimatedBuild *animatedBuild;
@property(nonatomic) struct CGRect boundingRect;
@property(readonly, nonatomic) struct CGRect boundingRectOnCanvas;
@property(readonly, nonatomic) KNAnimationRandomGenerator *randomGenerator;
@property(readonly, nonatomic) BOOL isMotionBlurred;
@property(readonly, nonatomic) double percent;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) unsigned long long direction;
@property(readonly, nonatomic) NSArray *textures;
@end

