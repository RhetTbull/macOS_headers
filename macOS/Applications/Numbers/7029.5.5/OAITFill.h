//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OAITFill : NSObject
{
}

+ (id)mapFill:(id)arg1 fillMode:(int)arg2 isEscher:(BOOL)arg3 size:(struct CGSize)arg4 drawingState:(id)arg5;
+ (id)mapGradientFill:(id)arg1 drawingState:(id)arg2;
+ (id)mapSolidFillColor:(id)arg1 drawingState:(id)arg2;
+ (id)nullFill;
+ (id)mapShadeOfFill:(id)arg1 fillMode:(int)arg2 isEscher:(BOOL)arg3 drawingState:(id)arg4;
+ (id)shadeWithBase:(id)arg1 fillMode:(int)arg2;
+ (BOOL)effectsContainFillOverlay:(id)arg1;
+ (id)averageColorOfFill:(id)arg1 state:(id)arg2;
+ (void)relevantColorsForAverageColorOfFill:(id)arg1 state:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)dominantColorOfFill:(id)arg1 state:(id)arg2;

@end

