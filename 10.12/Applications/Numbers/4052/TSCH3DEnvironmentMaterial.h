//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DTexturesMaterial.h"

#import "GSSPAutoEncodable-Protocol.h"

@interface TSCH3DEnvironmentMaterial : TSCH3DTexturesMaterial <GSSPAutoEncodable>
{
    BOOL _decalMode;
}

+ (id)instanceWithArchive:(const struct Chart3DEnvironmentMaterialArchive *)arg1 unarchiver:(id)arg2;
@property(nonatomic) BOOL decalMode; // @synthesize decalMode=_decalMode;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct MaterialShaderVariables)defaultShaderVariables;
- (void)saveToArchive:(struct Chart3DEnvironmentMaterialArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Chart3DEnvironmentMaterialArchive *)arg1 unarchiver:(id)arg2;
- (void)populateGSSPChart3dEnvironmentMaterial:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

