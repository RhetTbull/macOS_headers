//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDEditorProxy.h"

#import "TSKChangeSourceObserver-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSSet, NSString, TSUNoCopyDictionary;

@interface TSDDrawableEditorProxy : TSDEditorProxy <TSKChangeSourceObserver>
{
    TSUNoCopyDictionary *mLayoutProxiesByLayout;
    NSMutableDictionary *mLayoutProxiesByKey;
    NSMutableDictionary *mKeyValueCache;
    NSSet *mSelectedInfos;
    NSMutableArray *mInvalidLayoutProxyKeys;
}

+ (id)keyPathsForValuesAffectingSelectedObjectsSupportingCalloutAttributes;
+ (id)keyPathsForValuesAffectingSelectedObjectsSupportingConnectionLineAttributes;
+ (id)keyPathsForValuesAffectingSelectedLayoutsSupportingInspectorPositioning;
+ (id)keyPathsForValuesAffectingSelectedObjectsSupportingResize;
+ (id)keyPathsForValuesAffectingSelectedLayoutsSupportingFlipping;
+ (id)keyPathsForValuesAffectingSelectedLayoutsSupportingRotation;
- (BOOL)automaticallyTearsDownProxiesForKey:(id)arg1;
@property(readonly) NSSet *layoutProxyKeys;
- (id)selectedObjectsSupportingCalloutAttributes;
- (id)selectedObjectsSupportingConnectionLineAttributes;
- (id)selectedLayoutsSupportingInspectorPositioning;
- (id)selectedObjectsSupportingResize;
- (id)selectedLayoutsSupportingFlipping;
- (id)selectedLayoutsSupportingRotation;
- (void)p_selectionPathDidChange:(id)arg1;
- (void)p_updateInfoChangeObservers;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)processChangedProperty:(int)arg1;
- (void)preprocessChanges:(id)arg1 forChangeSource:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)p_layoutProxiesForLayouts:(id)arg1;
- (id)layoutProxiesForKey:(id)arg1;
- (void)p_emptyKeyValueCache;
- (void)p_emptyKeyValueCacheWithKeys:(id)arg1;
- (void)p_updateLayoutProxies;
- (void)p_teardownLayoutProxy:(id)arg1;
- (id)layouts;
- (void)layoutsDidChange;
- (void)canvasDidLayout;
- (void)p_updateLayoutKeys;
- (void)invalidateCachedLayoutProxiesForKeyPaths:(id)arg1;
- (void)invalidateCachedValuesForKeyPaths:(id)arg1;
- (id)p_target;
- (void)teardown;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 documentRoot:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

