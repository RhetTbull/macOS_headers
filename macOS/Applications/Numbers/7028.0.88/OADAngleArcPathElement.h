//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OADPathElement.h"

@interface OADAngleArcPathElement : OADPathElement
{
    struct OADAdjustPoint mCenter;
    struct OADAdjustPoint mSemiaxes;
    struct OADAdjustCoord mStartAngle;
    struct OADAdjustCoord mAngleLength;
    BOOL mConnectedToPrevious;
}

- (BOOL)connectedToPrevious;
- (struct OADAdjustCoord)angleLength;
- (struct OADAdjustCoord)startAngle;
- (struct OADAdjustPoint)semiaxes;
- (struct OADAdjustPoint)center;
- (id)initWithCenter:(struct OADAdjustPoint)arg1 semiaxes:(struct OADAdjustPoint)arg2 startAngle:(struct OADAdjustCoord)arg3 angleLength:(struct OADAdjustCoord)arg4 connectedToPrevious:(BOOL)arg5;

@end

