//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorTextFieldNumberFormatter.h"

@interface TMAInspectorTextFieldAngleFormatter : TMAInspectorTextFieldNumberFormatter
{
    BOOL _normalizesAngle;
}

@property(nonatomic) BOOL normalizesAngle; // @synthesize normalizesAngle=_normalizesAngle;
- (id)p_clampNumber:(id)arg1 toMinimum:(id)arg2 andMaximum:(id)arg3 wasNumberClamped:(char *)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringForObjectValue:(id)arg1 originalValue:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)p_commonInitAngleFormatter;

@end

