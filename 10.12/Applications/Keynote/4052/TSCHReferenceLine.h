//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSCHPropertyMapsGeneratedProtocol-Protocol.h"
#import "TSCHStyleOwnerCollaborationSupport-Protocol.h"
#import "TSCHStyleOwning-Protocol.h"
#import "TSCHUnretainedParent-Protocol.h"

@class NSString, NSUUID, TSCHChartAxis, TSCHChartAxisID, TSCHChartModel, TSCHReferenceLineNonStyle, TSCHReferenceLineStyle;

@interface TSCHReferenceLine : NSObject <TSCHStyleOwnerCollaborationSupport, TSCHPropertyMapsGeneratedProtocol, TSCHUnretainedParent, TSCHStyleOwning>
{
    TSCHChartModel *mModel;
    TSCHChartAxisID *mAxisID;
    TSCHReferenceLineStyle *mStyle;
    TSCHReferenceLineNonStyle *mNonStyle;
    NSUUID *mUUID;
    unsigned long long mStyleSwapIndex;
}

+ (id)p_lineLabelForType:(unsigned long long)arg1;
+ (id)defaultNonStyleWithContext:(id)arg1 referenceLineType:(unsigned long long)arg2 axis:(id)arg3;
+ (unsigned long long)styleSwapOrStyleOwnerIndexFromAxisID:(id)arg1 refLineIndex:(unsigned long long)arg2;
+ (unsigned long long)refLineIndexFromStyleSwapOrStyleOwnerIndex:(unsigned long long)arg1;
+ (id)axisIDFromStyleSwapOrStyleOwnerIndex:(unsigned long long)arg1;
+ (unsigned long long)maxNumberOfReferenceLinesOfType:(unsigned long long)arg1;
+ (unsigned long long)maxNumberOfReferenceLines;
+ (unsigned char)styleOwnerPathType;
@property(readonly, copy, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID=mAxisID;
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=mUUID;
- (void)setStyle:(id)arg1 nonStyle:(id)arg2;
- (id)nonstyle;
- (id)style;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2;
@property(readonly, nonatomic) unsigned long long styleSwapIndex;
@property(readonly, nonatomic) TSCHChartAxis *axis;
- (id)model;
- (id)context;
- (id)drawableInfo;
- (id)chartInfo;
- (id)valueForProperty:(int)arg1;
- (id)objectValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (BOOL)hasObjectValueForProperty:(int)arg1 value:(id *)arg2;
- (BOOL)hasFloatValueForProperty:(int)arg1 value:(float *)arg2;
- (BOOL)hasIntValueForProperty:(int)arg1 value:(int *)arg2;
- (int)defaultPropertyForGeneric:(int)arg1;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)operationPropertyNameFromGenericProperty:(int)arg1;
- (id)defaultProperties;
- (id)p_genericToDefaultPropertyMap;
- (void)clearParent;
@property(readonly, nonatomic) unsigned long long refLineType; // @dynamic refLineType;
@property(readonly, nonatomic) BOOL valueLabelShowing; // @dynamic valueLabelShowing;
@property(readonly, nonatomic) BOOL labelShowing; // @dynamic labelShowing;
@property(readonly, nonatomic) BOOL lineShowing; // @dynamic lineShowing;
- (id)localizedTypeName;
- (double)referenceLineAxisValueWithEditor:(id)arg1;
- (double)referenceLineAxisValue;
- (void)dealloc;
- (id)initWithModel:(id)arg1 axisID:(id)arg2 index:(unsigned long long)arg3 uuid:(id)arg4;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (id)g_genericToDefaultPropertyMap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

