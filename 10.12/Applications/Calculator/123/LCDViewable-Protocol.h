//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSDecimalNumber, NSNumber, NSString;

@protocol LCDViewable
- (void)setCalcModeText:(NSString *)arg1;
- (void)blink;
- (void)setLeftLCDMode:(unsigned long long)arg1;
- (void)setErrorCondition:(unsigned long long)arg1;
- (void)setLCDStringValue:(NSString *)arg1 input:(BOOL)arg2;
- (void)setLCDDoubleValue:(double)arg1 input:(BOOL)arg2;
- (void)message:(int)arg1;
- (void)changeDisplayedNumber:(NSDecimalNumber *)arg1;
- (NSString *)stringValue;
- (double)doubleValue;
- (NSString *)actualValueWithThousandsSeparators;
- (NSString *)actualValue;
- (unsigned long long)precision;
- (void)setOperandText:(NSString *)arg1;
- (void)setExponent:(NSNumber *)arg1;
- (void)showMemoryIndicator:(BOOL)arg1;
- (void)showParenIndicator:(BOOL)arg1;
- (void)clearParenError;
- (void)showParenError;
- (void)clear;
@end

