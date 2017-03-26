//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDShapeInfo.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSUUID, TSDDrawableInfo;

@interface TSDConnectionLineInfo : TSDShapeInfo <GSSPAutoEncodable>
{
    NSUUID *mConnectedFromID;
    NSUUID *mConnectedToID;
    TSDDrawableInfo *mConnectedToInfo;
    TSDDrawableInfo *mConnectedFromInfo;
    struct {
        unsigned int connectedFrom:1;
        unsigned int connectedTo:1;
    } mInvalidFlags;
}

+ (id)commandActionStringForConnectingFrom:(id)arg1 oldConnectedFrom:(id)arg2 newConnectedTo:(id)arg3 oldConnectedTo:(id)arg4;
+ (id)cleanupInfos:(id)arg1 duringCommand:(id)arg2 updateGeometries:(BOOL)arg3;
@property(retain, nonatomic) TSDDrawableInfo *connectedFromInfo; // @synthesize connectedFromInfo=mConnectedFromInfo;
@property(retain, nonatomic) TSDDrawableInfo *connectedToInfo; // @synthesize connectedToInfo=mConnectedToInfo;
@property(retain, nonatomic) NSUUID *connectedToID; // @synthesize connectedToID=mConnectedToID;
@property(retain, nonatomic) NSUUID *connectedFromID; // @synthesize connectedFromID=mConnectedFromID;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)acceptVisitor:(id)arg1;
- (id)localizedChunkNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3;
- (void)performBlockWithTemporaryLayout:(CDUnknownBlockType)arg1;
- (id)commandToConnectInfos:(id)arg1;
- (void)didCopy;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (BOOL)canAnchor;
- (struct CGAffineTransform)computeLayoutFullTransform;
- (void)computeLayoutInfoGeometry:(id *)arg1 andPathSource:(id *)arg2;
- (id)computeLayoutInfoGeometry;
@property(nonatomic) TSDDrawableInfo *connectedFrom;
@property(nonatomic) TSDDrawableInfo *connectedTo;
- (BOOL)isLine;
- (id)presetKind;
- (Class)editorClass;
- (Class)repClass;
- (Class)layoutClass;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 qdShape:(id)arg2 state:(id)arg3;
- (id)checkIsValidForInsert;
- (void)saveGeometryToArchive:(struct GeometryArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ConnectionLineArchive *)arg1 archiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ConnectionLineArchive *)arg1 unarchiver:(id)arg2;
- (void)populateGSSPConnectionLineInfo:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

@end

