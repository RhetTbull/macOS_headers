//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface IPXProgressArcLayer : CALayer
{
    double _radius;
    double _startAngle;
    double _endAngle;
    double _lineWidth;
}

@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double endAngle; // @synthesize endAngle=_endAngle;
@property(nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)init;

@end

