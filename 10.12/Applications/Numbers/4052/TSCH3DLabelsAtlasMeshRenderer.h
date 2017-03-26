//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DLabelsMeshRenderer.h"

@class TSCH3DTextureAtlas, TSUNoCopyDictionary;

@interface TSCH3DLabelsAtlasMeshRenderer : TSCH3DLabelsMeshRenderer
{
    TSCH3DTextureAtlas *mAtlas;
    TSUNoCopyDictionary *mExternalAttributeVariables;
}

- (void)renderWithMeshRenderLabelInfo:(const struct LabelsMeshRendererLabelInfo *)arg1;
- (void)flushCache;
- (void)submitResourcesWithProcessor:(id)arg1;
- (void)p_submitExternalAttributesForIndex:(unsigned long long)arg1 processor:(id)arg2;
- (id)p_resourceForExternalLabelAttribute:(const struct ExternalLabelAttribute *)arg1 index:(unsigned long long)arg2 createIfAbsent:(BOOL)arg3;
- (unsigned long long)p_indexForExternalAttribute:(const struct ExternalLabelAttribute *)arg1;
- (id)p_texcoordResourceAtIndex:(unsigned long long)arg1 createIfAbsent:(BOOL)arg2;
- (id)p_vertexResourceAtIndex:(unsigned long long)arg1 createIfAbsent:(BOOL)arg2;
- (unsigned long long)p_resourceCount;
- (id)p_resourceAtIndex:(unsigned long long)arg1 childIndex:(unsigned long long)arg2 dimension:(unsigned long long)arg3 createIfAbsent:(BOOL)arg4;
- (void)beginResources:(id)arg1 samples:(float)arg2;
- (void)allocateDynamicResourcesIntoArray:(id)arg1;
- (void)dealloc;
- (id)init;

@end

