//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "EQOrnament.h"

@interface EQDot : EQOrnament
{
    unsigned long long mNumber;
}

+ (void)addDotToChar:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)appendTextToString:(id)arg1;
- (void)appendSuffixToString:(id)arg1 info:(id)arg2;
- (void)appendPrefixToString:(id)arg1 info:(id)arg2;
- (void)drawAtPoint:(struct CGPoint)arg1 size:(struct CGSize)arg2 origin:(struct CGPoint)arg3;
- (void)updateSize:(struct CGSize *)arg1 origin:(struct CGPoint *)arg2;
- (id)initWithNumber:(unsigned long long)arg1;
- (double)spacing;
- (double)radius;
- (id)LaTeXExpressionWithString:(id)arg1;

@end

