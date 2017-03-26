//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "TSDMixing-Protocol.h"

@interface TSDReflection : NSObject <GSSPAutoEncodable, TSDMixing, NSCopying, NSMutableCopying>
{
    double mOpacity;
    double mFadeAcceleration;
}

+ (BOOL)canMixWithNilObjects;
+ (id)reflection;
+ (id)instanceWithArchive:(const struct ReflectionArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) double fadeAcceleration; // @synthesize fadeAcceleration=mFadeAcceleration;
@property(readonly, nonatomic) double opacity; // @synthesize opacity=mOpacity;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)description;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithOpacity:(double)arg1;
- (id)initWithOpacity:(double)arg1 fadeAcceleration:(double)arg2;
- (id)init;
- (void)saveToArchive:(struct ReflectionArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct ReflectionArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)populateGSSPReflection:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithQDReflection:(id)arg1;
- (id)initWithGQDRCIFilterInfo:(id)arg1;

@end

