//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CHDAxis.h"

@interface CHDDateAxis : CHDAxis
{
    _Bool mAutomatic;
    double mMajorUnitValue;
    double mMinorUnitValue;
    int mMinorTimeUnit;
    int mMajorTimeUnit;
    int mBaseTimeUnit;
}

- (void)setBaseTimeUnit:(int)arg1;
- (int)baseTimeUnit;
- (void)setMinorTimeUnit:(int)arg1;
- (int)minorTimeUnit;
- (void)setMajorTimeUnit:(int)arg1;
- (int)majorTimeUnit;
- (void)setMinorUnitValue:(double)arg1;
- (double)minorUnitValue;
- (void)setMajorUnitValue:(double)arg1;
- (double)majorUnitValue;
- (void)setAutomatic:(_Bool)arg1;
- (_Bool)isAutomatic;
- (_Bool)isDate;
- (id)initWithResources:(id)arg1;

@end

