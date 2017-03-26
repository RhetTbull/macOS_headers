//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage;

@interface BorderMaker : NSObject
{
    NSImage *m_leftRagged;
    NSImage *m_rightRagged;
}

- (void)dealloc;
- (id)init;
- (id)borderedImage:(id)arg1;
- (void)setClippingForRect:(struct CGRect)arg1 leftEdgeType:(int)arg2 rightEdgeType:(int)arg3;
- (id)clippingForRect:(struct CGRect)arg1 leftEdgeType:(int)arg2 rightEdgeType:(int)arg3;
- (void)drawEdgeForRect:(struct CGRect)arg1 leftEdgeType:(int)arg2 rightEdgeType:(int)arg3 inView:(id)arg4;
- (struct CGRect)borderRectForRect:(struct CGRect)arg1;
- (struct CGRect)borderRectForRect:(struct CGRect)arg1 leftEdgeType:(int)arg2 rightEdgeType:(int)arg3;
- (void)barColorTop:(id *)arg1 bottom:(id *)arg2;
- (void)getCachesLeftCap:(id *)arg1 center:(id *)arg2 rightCap:(id *)arg3 leftCrease:(id *)arg4 rightCrease:(id *)arg5;
- (int)endWidth;
- (int)rightOffset;
- (int)leftOffset;
- (int)bottomOffset;
- (int)topOffset;

@end

