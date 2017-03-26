//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDPathSource, TSDShapeRep;

@interface TSDAdjustablePathController : NSObject
{
    TSDShapeRep *mRep;
}

@property(readonly, nonatomic) TSDShapeRep *rep; // @synthesize rep=mRep;
@property(readonly, nonatomic) TSDPathSource *pathSource;
- (void)setGeometry:(id)arg1 previousGeometry:(id)arg2;
- (void)moveControlKnob:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;
- (struct CGPoint)positionOfKnob:(unsigned long long)arg1 transformed:(BOOL)arg2;
- (void)drawBorder;
@property(readonly, nonatomic) unsigned long long enabledKnobs;
- (unsigned long long)knobUnderPoint:(struct CGPoint)arg1;
- (id)initWithRep:(id)arg1;

@end

