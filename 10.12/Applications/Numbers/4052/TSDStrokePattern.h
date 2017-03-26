//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"
#import "TSDMixing-Protocol.h"

@interface TSDStrokePattern : NSObject <GSSPAutoEncodable, NSCopying, TSDMixing>
{
    double mPattern[6];
    unsigned long long mCount;
    double mPhase;
    int mType;
}

+ (id)strokePatternWithPattern:(const double *)arg1 count:(unsigned long long)arg2 phase:(double)arg3;
+ (id)dashPatternWithSpacing:(double)arg1;
+ (id)roundDashPatternWithSpacing:(double)arg1;
+ (id)roundDashPattern;
+ (id)longDashPattern;
+ (id)mediumDashPattern;
+ (id)shortDashPattern;
+ (id)emptyPattern;
+ (id)solidPattern;
@property(readonly, nonatomic) double phase; // @synthesize phase=mPhase;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=mCount;
@property(readonly, nonatomic) int patternType; // @synthesize patternType=mType;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)p_applyToCAShapeLayer:(id)arg1 lineWidth:(double)arg2;
- (void)applyToCAShapeLayer:(id)arg1;
- (double)p_renderableLengthForUnclippedPatternWithLineWidth:(double)arg1 withinAvailableLength:(double)arg2;
- (void)i_applyToContext:(struct CGContext *)arg1 lineWidth:(double)arg2 capStyle:(unsigned long long *)arg3;
- (void)applyToContext:(struct CGContext *)arg1 lineWidth:(double)arg2;
@property(readonly, nonatomic) BOOL isRoundDash;
@property(readonly, nonatomic) BOOL isDash;
@property(readonly, nonatomic) double *pattern;
- (id)p_typeString;
- (id)p_patternString;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPattern:(const double *)arg1 count:(unsigned long long)arg2 phase:(double)arg3;
- (id)p_initWithType:(int)arg1 pattern:(const double *)arg2 count:(unsigned long long)arg3 phase:(double)arg4;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)populateGSSPStrokePattern:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (void)saveToArchive:(struct StrokePatternArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct StrokePatternArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithQDStrokePattern:(id)arg1;

@end

