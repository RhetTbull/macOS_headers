//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MFPhoneBrush.h"

@class TSUColor;

@interface MFPhoneHatchBrush : MFPhoneBrush
{
    TSUColor *m_colour;
    int m_style;
}

+ (id)patternNameForHatchStyle:(int)arg1;
+ (id)hatchBrushWithColour:(id)arg1 in_style:(int)arg2;
- (void)fillPath:(id)arg1 in_path:(id)arg2;
- (void)dealloc;
- (id)initWithColour:(id)arg1 in_style:(int)arg2;

@end

