//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GGraph.h"

@class CPColorList, GSystem, NSArray, NSColor, NSEnumerator, NSMutableArray;

@interface GVectorField : GGraph
{
    GSystem *mSystem;
    NSArray *mAxes;
    unsigned long long *mCoord;
    NSMutableArray *mVectors;
    CPColorList *mTempColorList;
    NSColor *mTempColor;
    BOOL mTempUseColorList;
    BOOL mTempProportional;
    double mTempVectorLength;
    double mTempMaxVectorLength;
    NSEnumerator *mTempVectorEnumerator;
}

+ (id)vectorFieldWithView:(id)arg1 definition:(id)arg2 operation:(id)arg3 paramValues:(id)arg4 axes:(id)arg5 attributes:(id)arg6;
+ (id)defaultAttributes;
- (void)encodeStateWithCoder:(id)arg1;
- (void)decodeStateWithCoder:(id)arg1;
- (void)evaluate;
- (void)endDrawingVectorField;
- (BOOL)nextVectorToDrawStart:(double *)arg1 end:(double *)arg2 color:(id *)arg3;
- (void)vectorToDrawWithVector:(id)arg1 start:(double *)arg2 end:(double *)arg3 color:(id *)arg4;
- (void)startDrawingVectorField;
- (double)lengthOfVector:(id)arg1;
- (id)vectorFieldResults;
- (void)updateSelf;
- (void)endVectorField;
- (void)vectorFrom:(double *)arg1 to:(double *)arg2 withLength:(double)arg3;
- (void)startVectorField;
- (void)updateVectorField;
- (double)maxLength;
- (id)currentVector;
- (id)vectorEnumerator;
- (unsigned long long *)coord;
- (id)axes;
- (id)system;
- (void)dealloc;
- (id)initWithView:(id)arg1 definition:(id)arg2 operation:(id)arg3 paramValues:(id)arg4 axes:(id)arg5 attributes:(id)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

