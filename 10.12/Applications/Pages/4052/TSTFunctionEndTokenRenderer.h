//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTFunctionTokenRenderer.h"

@interface TSTFunctionEndTokenRenderer : TSTFunctionTokenRenderer
{
}

+ (double)minimumTextWidth;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedEndTokenRenderer;
+ (id)_singletonAlloc;
- (void)drawAttachment:(id)arg1 inContext:(struct CGContext *)arg2 selection:(id)arg3;
- (void)drawText:(id)arg1 atPoint:(struct CGPoint)arg2 size:(struct CGSize)arg3 inContext:(struct CGContext *)arg4 forAttachment:(id)arg5;
- (struct CGPath *)newTokenStrokePathForAttachment:(id)arg1 inRect:(struct CGRect)arg2;
- (struct CGPath *)newTokenClippingPathForAttachment:(id)arg1 inRect:(struct CGRect)arg2;
- (double)leftTapSlopForAttachment:(id)arg1;
- (struct CGRect)tokenRectForAttachment:(id)arg1 textSize:(struct CGSize)arg2;
- (struct TSTTokenMargin)tokenPaddingForAttachment:(id)arg1;
- (struct TSTTokenMargin)tokenMarginForAttachment:(id)arg1;
- (struct CGSize)attachmentSize:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

