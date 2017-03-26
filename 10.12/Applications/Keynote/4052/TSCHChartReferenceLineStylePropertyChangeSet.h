//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSSStylePropertyChangeSet.h"

#import "GSSPAutoEncodable-Protocol.h"

@class TSDSpecShadow, TSDSpecStroke, TSSSpecInteger;

@interface TSCHChartReferenceLineStylePropertyChangeSet : TSSStylePropertyChangeSet <GSSPAutoEncodable>
{
    TSSSpecInteger *_defaultLabelParagraphStyleIndex;
    TSDSpecShadow *_defaultShadow;
    TSDSpecStroke *_defaultStroke;
    TSSSpecInteger *_defaultValueLabelParagraphStyleIndex;
    BOOL _definedDefaultLabelParagraphStyleIndex;
    BOOL _definedDefaultShadow;
    BOOL _definedDefaultStroke;
    BOOL _definedDefaultValueLabelParagraphStyleIndex;
}

+ (id)newFromArchive:(const struct ChartReferenceLineStylePropertyChangeSetArchive *)arg1 unarchiver:(id)arg2;
+ (void)saveObject:(id)arg1 toArchive:(struct ChartReferenceLineStylePropertyChangeSetArchive *)arg2 archiver:(id)arg3;
- (void)enumerateDefinedPropertiesWithBlock:(CDUnknownBlockType)arg1;
- (void)setUnsetSpecForProperty:(int)arg1;
- (void)setSpec:(id)arg1 forProperty:(int)arg2;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)deallocSOS;
- (void)populateGSSPChartReferenceLineStylePropertyChangeSet:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (id)initChartReferenceLineStylePropertyChangeSetWithArchive:(const struct ChartReferenceLineStylePropertyChangeSetArchive *)arg1 unarchiver:(id)arg2;
- (void)saveChartReferenceLineStylePropertyChangeSetToArchive:(struct ChartReferenceLineStylePropertyChangeSetArchive *)arg1 archiver:(id)arg2;

@end

