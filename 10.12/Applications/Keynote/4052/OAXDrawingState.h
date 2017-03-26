//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OCXReadState.h"

@class CXNamespace, NSMutableArray, NSMutableDictionary, OADBlipCollection, OADColorMap, OADColorScheme, OADFontScheme, OADStyleMatrix, OAVReadState, OAXClient, OAXTableStyleCache, OCPPackagePart;

@interface OAXDrawingState : OCXReadState
{
    OAXClient *mClient;
    OCPPackagePart *mPackagePart;
    OADStyleMatrix *mStyleMatrix;
    OAXTableStyleCache *mTableStyleCache;
    NSMutableDictionary *mShapeIdMap;
    NSMutableDictionary *mDrawableIdToVmlShapeIdMap;
    id mDocumentState;
    OADBlipCollection *mTgtBlipCollection;
    NSMutableDictionary *mSrcURLToTgtBlipIndexMap;
    NSMutableArray *mTgtBulletBlips;
    NSMutableDictionary *mSrcURLToTgtBulletBlipIndexMap;
    OAVReadState *mOavState;
    OADColorScheme *mColorScheme;
    OADColorMap *mColorMap;
    OADFontScheme *mFontScheme;
    NSMutableArray *mGroupStack;
    CXNamespace *mOAXMainNamespace;
    CXNamespace *mOAXChartNamespace;
    CXNamespace *mOAXChartDrawingNamespace;
    CXNamespace *mOAXCompatNamespace;
    CXNamespace *mOAXLockedCanvasNamespace;
    CXNamespace *mOAXPictureNamespace;
    CXNamespace *mOAXTableNamespace;
    CXNamespace *mOAXWordProcessingMLNamespace;
    CXNamespace *mOAXDrawing2010Namespace;
    CXNamespace *mOAXChart2012Namespace;
    CDUnknownBlockType _clientChartGraphicPropertyDefaultsBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clientChartGraphicPropertyDefaultsBlock; // @synthesize clientChartGraphicPropertyDefaultsBlock=_clientChartGraphicPropertyDefaultsBlock;
@property(retain, nonatomic) NSMutableDictionary *sourceURLToTargetBulletBlipIndexMap; // @synthesize sourceURLToTargetBulletBlipIndexMap=mSrcURLToTgtBulletBlipIndexMap;
@property(retain, nonatomic) NSMutableDictionary *sourceURLToTargetBlipIndexMap; // @synthesize sourceURLToTargetBlipIndexMap=mSrcURLToTgtBlipIndexMap;
@property(retain, nonatomic) CXNamespace *OAXChart2012Namespace; // @synthesize OAXChart2012Namespace=mOAXChart2012Namespace;
@property(retain, nonatomic) CXNamespace *OAXDrawing2010Namespace; // @synthesize OAXDrawing2010Namespace=mOAXDrawing2010Namespace;
@property(retain, nonatomic) CXNamespace *OAXWordProcessingMLNamespace; // @synthesize OAXWordProcessingMLNamespace=mOAXWordProcessingMLNamespace;
@property(retain, nonatomic) CXNamespace *OAXTableNamespace; // @synthesize OAXTableNamespace=mOAXTableNamespace;
@property(retain, nonatomic) CXNamespace *OAXPictureNamespace; // @synthesize OAXPictureNamespace=mOAXPictureNamespace;
@property(retain, nonatomic) CXNamespace *OAXLockedCanvasNamespace; // @synthesize OAXLockedCanvasNamespace=mOAXLockedCanvasNamespace;
@property(retain, nonatomic) CXNamespace *OAXCompatNamespace; // @synthesize OAXCompatNamespace=mOAXCompatNamespace;
@property(retain, nonatomic) CXNamespace *OAXChartDrawingNamespace; // @synthesize OAXChartDrawingNamespace=mOAXChartDrawingNamespace;
@property(retain, nonatomic) CXNamespace *OAXChartNamespace; // @synthesize OAXChartNamespace=mOAXChartNamespace;
@property(retain, nonatomic) CXNamespace *OAXMainNamespace; // @synthesize OAXMainNamespace=mOAXMainNamespace;
- (void)setupNSForXMLFormat:(int)arg1;
- (void)replaceGroupStack:(id)arg1;
- (BOOL)isInsideGroup;
- (id)peekGroup;
- (id)popGroup;
- (void)pushGroup:(id)arg1;
- (id)bulletBlipRefForURL:(id)arg1;
- (id)blipRefForURL:(id)arg1;
- (id)blipRefWithURL:(id)arg1 blipArray:(id)arg2 blipURLtoIndexMap:(id)arg3;
- (void)setTargetBulletBlipArray:(id)arg1;
- (void)setTargetBlipCollection:(id)arg1;
- (void)clearTargetBlipCollection;
- (id)targetBlipCollection;
- (void)setFontScheme:(id)arg1;
- (id)fontScheme;
- (void)setColorMap:(id)arg1;
- (id)colorMap;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (void)setOavState:(id)arg1;
- (id)oavState;
- (void)setDocumentState:(id)arg1;
- (id)documentState;
- (void)resetForNewDrawing;
- (void)setVmlShapeId:(id)arg1 forDrawableId:(unsigned int)arg2;
- (id)vmlShapeIdForDrawableId:(unsigned int)arg1;
- (void)setDrawable:(id)arg1 forShapeId:(unsigned int)arg2;
- (id)drawableForShapeId:(unsigned int)arg1;
- (void)setTableStyleCache:(id)arg1;
- (id)tableStyleCache;
- (void)setStyleMatrix:(id)arg1;
- (id)styleMatrix;
- (id)appVersion;
- (void)setPackagePart:(id)arg1;
- (id)packagePart;
- (id)client;
- (void)dealloc;
- (id)init;
- (id)initWithClient:(id)arg1;

@end

