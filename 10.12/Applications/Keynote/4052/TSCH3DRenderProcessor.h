//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSCH3DRenderProcessor : NSObject
{
}

+ (id)processor;
+ (void)initialize;
- (void)setRenderHints:(const struct RenderHints *)arg1;
- (struct RenderHints)renderHints;
- (void)popRenderState;
- (void)pushRenderState;
- (void)setRenderState:(const struct RenderState *)arg1;
- (struct RenderState)renderState;
- (void)updateRenderState;
- (void)popState;
- (void)pushState;
- (id)effects;
- (long long)texture:(id)arg1;
- (void)texcoords:(id)arg1;
- (void)normals:(id)arg1;
- (void)geometry:(id)arg1;
- (BOOL)canRenderPrefilteredLines;

@end

