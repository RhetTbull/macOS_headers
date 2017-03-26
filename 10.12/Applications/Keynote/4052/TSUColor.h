//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"
#import "TSSPreset-Protocol.h"
#import "TSSPresetSource-Protocol.h"
#import "TSSPropertyCommandSerializing-Protocol.h"

@class NSString;

@interface TSUColor : NSObject <GSSPAutoEncodable, TSSPropertyCommandSerializing, TSSPreset, TSSPresetSource, NSCopying>
{
    struct CGColor *mCGColor;
    unsigned long long mColorRGBSpace;
}

+ (id)brownColor;
+ (id)purpleColor;
+ (id)orangeColor;
+ (id)magentaColor;
+ (id)yellowColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)redColor;
+ (id)lightGrayColor;
+ (id)grayColor;
+ (id)whiteColor;
+ (id)blackColor;
+ (id)clearColor;
+ (id)randomColor;
+ (id)colorWithNSColor:(id)arg1;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)stringForColor:(id)arg1;
+ (id)stringForSystemColorID:(int)arg1;
+ (id)colorWithSystemColorID:(int)arg1;
+ (id)colorWithBGR:(unsigned int)arg1;
+ (id)colorWithCalibratedHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 alpha:(int)arg4;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3;
+ (id)colorWithEshColor:(const struct EshColor *)arg1;
+ (id)colorWithCsColour:(const struct CsColour *)arg1;
+ (id)colorWithRGBBytes:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
+ (id)p_defaultPresetColors:(int)arg1;
+ (id)highContrastBackgroundColorForPreset:(id)arg1;
+ (id)colorWithRGBValue:(long long)arg1;
+ (id)colorWithBGRValue:(long long)arg1;
@property(readonly, nonatomic) unsigned long long colorRGBSpace; // @synthesize colorRGBSpace=mColorRGBSpace;
@property(readonly) struct CGColor *CGColor; // @synthesize CGColor=mCGColor;
- (id)hexString;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (BOOL)isNearlyWhite;
- (BOOL)isOpaque;
- (double)luminance;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)invertedColor;
- (id)grayscaleColor;
- (id)NSColor;
- (double)brightnessComponent;
- (double)saturationComponent;
- (double)hueComponent;
- (void)getRGBAComponents:(double *)arg1;
@property(readonly, nonatomic) double alphaComponent;
@property(readonly, nonatomic) double blueComponent;
@property(readonly, nonatomic) double greenComponent;
@property(readonly, nonatomic) double redComponent;
- (double)p_rgbComponentWithIndex:(unsigned char)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualWithTolerance:(id)arg1;
- (BOOL)isAlmostEqualToColor:(id)arg1;
- (BOOL)p_isEqualToColor:(id)arg1 withTolerance:(double)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithNSColor:(id)arg1;
- (id)initWithHexString:(id)arg1;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithCGColor:(struct CGColor *)arg1 colorSpace:(unsigned long long)arg2;
- (void)set;
- (id)colorWithShadeValue:(double)arg1;
- (id)colorWithTintValue:(double)arg1;
- (unsigned int)toBGR;
- (id)solidColoredPngImage;
- (id)newSolidColoredBitmap:(struct CGSize)arg1;
- (CDStruct_a06f635e)ttColor;
- (BOOL)isEquivalentForPreset:(id)arg1;
- (struct EshColor)eshColor;
- (struct CsColour)csColour;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)populateGSSPColor:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (void)getRGBBytes:(char *)arg1 green:(char *)arg2 blue:(char *)arg3;
- (void)saveToPropertyCommandMessage:(struct Message *)arg1 archiver:(id)arg2;
- (id)initFromPropertyCommandMessage:(const struct Message *)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct Color *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Color *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) NSString *presetKind;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)saveToMessage:(struct Color *)arg1;
- (id)initWithMessage:(const struct Color *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

