//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSMutableSet, TSDSwappableAxesGeometry;

@interface TSDSpacing : NSObject
{
    NSMutableSet *mSpacingRects;
    NSMutableSet *mAssociatedFrames;
    CALayer *mLayer;
    BOOL mHasBeenDrawn;
    TSDSwappableAxesGeometry *mHorizontalGeom;
}

@property(readonly, nonatomic) NSMutableSet *associatedFrames; // @synthesize associatedFrames=mAssociatedFrames;
- (id)description;
- (void)updateSpacingUIWithICC:(id)arg1;
- (id)spacingRectsLayerForGuideRect:(struct CGRect)arg1 withICC:(id)arg2;
- (void)needsRedraw;
- (BOOL)containsNonIntersectingSpacingRectsWithRect:(struct CGRect)arg1 forEdge:(int)arg2;
- (BOOL)needsGuideForEdge:(int)arg1 ofRect:(struct CGRect)arg2;
- (void)addSpacingRect:(struct CGRect)arg1 forFrame:(struct CGRect)arg2 andFrame:(struct CGRect)arg3;
- (long long)compare:(id)arg1;
- (int)guideType;
- (double)exactOffset;
- (int)integerOffset;
- (void)dealloc;
- (id)initWithGuideType:(int)arg1 withSpacingRect:(struct CGRect)arg2 forFrame:(struct CGRect)arg3 andFrame:(struct CGRect)arg4;

@end

