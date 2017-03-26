//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDChangeSourceCommandPushingProxy.h"

#import "TSCHChartStyleOwnerProxy-Protocol.h"

@class NSNumber, NSString, TSCHChartAxis, TSCHChartEditor;

@interface TSCHReferenceLineProxy : TSDChangeSourceCommandPushingProxy <TSCHChartStyleOwnerProxy>
{
    TSCHChartEditor *mChartEditor;
    struct __CFDictionary *mPriorValues;
}

+ (id)keyPathsForValuesAffectingAxis;
+ (id)p_dynamicChangeKeys;
+ (id)keyPathsForValuesAffectingP_refLine;
@property(readonly, nonatomic) NSNumber *referenceLineValue;
@property(readonly, nonatomic) TSCHChartAxis *axis;
- (void)willSetValue:(id)arg1 forKeyPath:(id)arg2;
- (void)notifyChartRepsForChanges:(id)arg1;
- (id)newDynamicChangeStandInForKeyPath:(id)arg1;
- (void)p_cachePriorValue:(id)arg1 forKey:(id)arg2;
- (id)styleOwner;
- (id)chartDrawableInfo;
- (BOOL)enqueueCommandToChangeOldValue:(id)arg1 toNewValue:(id)arg2 forKeyPath:(id)arg3;
- (BOOL)validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)commandToChangeOldValue:(id)arg1 toNewValue:(id)arg2 forKeyPath:(id)arg3;
- (id)valueForUndefinedKey:(id)arg1;
- (id)chartEditor;
- (id)p_refLine;
- (void)dealloc;
- (id)initWithChartEditor:(id)arg1 forReferenceLine:(id)arg2;
- (id)initWithTarget:(id)arg1 changeSource:(id)arg2 documentRoot:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

