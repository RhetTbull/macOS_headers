//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSCH3DSageLightingPackageData-Protocol.h"

@class NSArray, NSDictionary;

@interface TSCH3DSageLightingPackageData : NSObject <TSCH3DSageLightingPackageData>
{
    NSDictionary *mPackage;
    NSArray *mLights;
}

+ (id)dataWithDictionary:(id)arg1;
- (float)dropOffRateAtIndex:(unsigned long long)arg1;
- (float)cutOffAngleAtIndex:(unsigned long long)arg1;
- (struct Vector3)directionAtIndex:(unsigned long long)arg1;
- (struct Vector3)positionAtIndex:(unsigned long long)arg1;
- (BOOL)enabledAtIndex:(unsigned long long)arg1;
- (int)coordinateSpaceAtIndex:(unsigned long long)arg1;
- (struct Vector3)attenuationAtIndex:(unsigned long long)arg1;
- (float)intensityAtIndex:(unsigned long long)arg1;
- (Color_1703f521)specularColorAtIndex:(unsigned long long)arg1;
- (Color_1703f521)diffuseColorAtIndex:(unsigned long long)arg1;
- (Color_1703f521)ambientColorAtIndex:(unsigned long long)arg1;
- (Color_1703f521)colorAtIndex:(unsigned long long)arg1 redKey:(id)arg2 greenKey:(id)arg3 blueKey:(id)arg4;
- (int)typeAtIndex:(unsigned long long)arg1;
- (id)nameAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)packageName;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

