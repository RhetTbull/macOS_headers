//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDSpecShadow.h"

#import "GSSPAutoEncodable-Protocol.h"

@interface TSDSpecShadowSetRadius : TSDSpecShadow <GSSPAutoEncodable>
{
    int _radius;
}

+ (id)newFromArchive:(const struct SpecShadowSetRadiusArchive *)arg1 unarchiver:(id)arg2;
+ (void)saveObject:(id)arg1 toArchive:(struct SpecShadowSetRadiusArchive *)arg2 archiver:(id)arg3;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)operationPropertyName;
- (id)apply:(id)arg1;
- (BOOL)canApplyOnObject:(id)arg1;
- (id)shadowModifiedFromShadow:(id)arg1;
- (id)initWithCurrentProperty:(id)arg1;
- (id)initSpecShadowSetRadiusWithArchive:(const struct SpecShadowSetRadiusArchive *)arg1 unarchiver:(id)arg2;
- (void)saveSpecShadowSetRadiusToArchive:(struct SpecShadowSetRadiusArchive *)arg1 archiver:(id)arg2;
- (void)deallocSOS;
- (void)populateGSSPSpecShadowSetRadius:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

