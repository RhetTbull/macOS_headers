//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSUKeyValueProxy.h"

#import "TSDDynamicChangeStandIn-Protocol.h"
#import "TSUDependentKeyValueProxyParent-Protocol.h"

@class NSArray, NSSet, NSString, TSDLayoutGeometryProxy, TSTLayout, TSTLayoutDynamicResizeInfoAccordion, TSTMasterLayout, TSTTableEditor;

@interface TSTLayoutGeometryDynamicSizeChangeStandIn : TSUKeyValueProxy <TSUDependentKeyValueProxyParent, TSDDynamicChangeStandIn>
{
    TSTLayout *mTableLayout;
    TSTMasterLayout *mMasterLayout;
    struct TSUCellRect mEntireTable;
    TSTTableEditor *mTableEditor;
    long long mDirection;
    TSTLayoutDynamicResizeInfoAccordion *mDynamicResizeInfo;
    TSDLayoutGeometryProxy *mLayoutGeometryProxy;
}

@property(readonly, nonatomic) long long direction; // @synthesize direction=mDirection;
- (BOOL)setChildValue:(id)arg1 forKeyPath:(id)arg2;
- (id)newProxyForValue:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSArray *resizeValues;
- (id)inspectorGeometry;
- (id)pureGeometry;
- (void)interactiveCanvasControllerDidLayout:(id)arg1;
- (void)endDynamicChange;
- (void)beginDynamicChange;
@property(readonly, nonatomic) NSSet *dynamicChangeKeys;
- (void)dealloc;
- (id)init;
- (id)initWithKeyPath:(id)arg1 tableLayout:(id)arg2 tableEditor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

