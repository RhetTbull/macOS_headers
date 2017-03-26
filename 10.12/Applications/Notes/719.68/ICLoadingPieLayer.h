//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CAShapeLayer, NSObservation, NSProgress;

@interface ICLoadingPieLayer : CALayer
{
    BOOL _removeOnCompletion;
    double _progress;
    NSProgress *_observedProgress;
    CAShapeLayer *_pieLayer;
    CAShapeLayer *_backgroundLayer;
    NSObservation *_progressObservation;
}

@property(retain, nonatomic) NSObservation *progressObservation; // @synthesize progressObservation=_progressObservation;
@property(retain, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) CAShapeLayer *pieLayer; // @synthesize pieLayer=_pieLayer;
@property(nonatomic) BOOL removeOnCompletion; // @synthesize removeOnCompletion=_removeOnCompletion;
@property(retain, nonatomic) NSProgress *observedProgress; // @synthesize observedProgress=_observedProgress;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1;
- (struct CGPath *)newPathForProgress:(double)arg1;
- (id)init;

@end

