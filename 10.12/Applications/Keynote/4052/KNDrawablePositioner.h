//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSADrawablePositioner.h"

@class TSUNoCopyDictionary;

@interface KNDrawablePositioner : TSADrawablePositioner
{
    TSUNoCopyDictionary *mFittedDrawables;
    BOOL mAvoidOffCanvasPositions;
    BOOL mOffsetInsertedDrawables;
}

@property(nonatomic) BOOL offsetInsertedDrawables; // @synthesize offsetInsertedDrawables=mOffsetInsertedDrawables;
@property(nonatomic) BOOL adjustOffCanvasPositions; // @synthesize adjustOffCanvasPositions=mAvoidOffCanvasPositions;
- (void)positionDrawables:(id)arg1;
- (void)positionDrawablesWithValidGeometries:(id)arg1;
- (void)p_positionDrawablesWithValidGeometries:(id)arg1 existingDrawables:(id)arg2;
- (struct CGRect)boundsForPasting;
- (struct CGRect)rectEnclosingDrawables:(id)arg1;
- (BOOL)drawables:(id)arg1 collideWithRect:(struct CGRect)arg2 orPoint:(struct CGPoint)arg3 orTargetCenter:(struct CGPoint)arg4 ignoreTargetCenter:(BOOL)arg5;
- (struct CGRect)boundsByFittingDrawable:(id)arg1;
- (struct CGRect)boundsByLayingOutDrawable:(id)arg1;
- (void)dealloc;
- (id)init;

@end

