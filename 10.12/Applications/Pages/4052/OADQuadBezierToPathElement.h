//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OADPathElement.h"

@interface OADQuadBezierToPathElement : OADPathElement
{
    struct OADAdjustPoint mControlPoint;
    struct OADAdjustPoint mToPoint;
}

- (struct OADAdjustPoint)toPoint;
- (struct OADAdjustPoint)controlPoint;
- (id)initWithControlPoint:(struct OADAdjustPoint)arg1 toPoint:(struct OADAdjustPoint)arg2;

@end

