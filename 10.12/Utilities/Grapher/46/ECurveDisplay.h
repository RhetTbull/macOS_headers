//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "EDisplayView.h"

@interface ECurveDisplay : EDisplayView
{
    id mPosition;
    id mTangent;
    id mPerpendicular;
    id mOsculatingCircle;
    id mPositionColor;
    id mTangentColor;
    id mPerpendicularColor;
    id mOsculatingCircleColor;
}

- (void)update;
- (void)updateStates;
- (void)center:(double *)arg1 ofCircleBy:(double *)arg2 and:(double *)arg3 and:(double *)arg4;

@end

