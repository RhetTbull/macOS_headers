//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DRetargetRenderProcessor.h"

@class NSArray;

@interface TSCH3DChartVertexShadowsRenderProcessor : TSCH3DRetargetRenderProcessor
{
    NSArray *mShadowsEffects;
}

- (void)submit:(const struct PrimitiveInfo *)arg1;
- (long long)texture:(id)arg1 attributes:(const struct TextureAttributes *)arg2;
- (long long)attribute:(id)arg1 resource:(id)arg2 specs:(const struct AttributeSpecs *)arg3;
- (void)dealloc;
- (id)init;
- (id)p_effects;

@end

