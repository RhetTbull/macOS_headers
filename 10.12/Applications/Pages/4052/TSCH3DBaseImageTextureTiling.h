//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DTextureTiling.h"

#import "GSSPAutoEncodable-Protocol.h"

@class TSCH3DVector;

@interface TSCH3DBaseImageTextureTiling : TSCH3DTextureTiling <GSSPAutoEncodable>
{
    TSCH3DVector *_scale;
    float _rotation;
}

+ (id)instanceWithArchive:(const struct Chart3DBaseImageTextureTilingArchive *)arg1 unarchiver:(id)arg2;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
- (void)didInitFromSOS;
@property(nonatomic) tvec2_84d5962d scale;
- (void)restoreDefault;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)saveToArchive:(struct Chart3DBaseImageTextureTilingArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Chart3DBaseImageTextureTilingArchive *)arg1 unarchiver:(id)arg2;
- (void)populateGSSPChart3dBaseImageTextureTiling:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

