//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class TSSPropertySet;

@protocol TSSPropertyValueValidator
+ (BOOL)validateObjectValue:(id *)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
+ (BOOL)validateDoubleValue:(double *)arg1 forProperty:(int)arg2;
+ (BOOL)validateFloatValue:(float *)arg1 forProperty:(int)arg2;
+ (BOOL)validateIntValueAsBool:(int *)arg1 forProperty:(int)arg2;
+ (BOOL)validateIntValue:(int *)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
+ (BOOL)validateIntValue:(int *)arg1 forProperty:(int)arg2;
+ (TSSPropertySet *)propertiesAllowingNSNull;
- (BOOL)validateObjectValue:(id *)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
- (BOOL)validateDoubleValue:(double *)arg1 forProperty:(int)arg2;
- (BOOL)validateFloatValue:(float *)arg1 forProperty:(int)arg2;
- (BOOL)validateIntValueAsBool:(int *)arg1 forProperty:(int)arg2;
- (BOOL)validateIntValue:(int *)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
- (BOOL)validateIntValue:(int *)arg1 forProperty:(int)arg2;
@end

