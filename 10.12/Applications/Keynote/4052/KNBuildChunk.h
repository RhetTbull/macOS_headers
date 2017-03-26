//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "KNInspectableAnimation-Protocol.h"
#import "NSCopying-Protocol.h"
#import "TSDKeyValueProxyVending-Protocol.h"
#import "TSKModel-Protocol.h"

@class KNBuild, KNBuildChunkIdentifier, KNSlide, NSArray, NSSet, NSString, NSUUID, TSPLazyReference;

@interface KNBuildChunk : TSPObject <TSDKeyValueProxyVending, GSSPAutoEncodable, KNInspectableAnimation, NSCopying, TSKModel>
{
    NSUUID *_buildId;
    KNBuildChunkIdentifier *_buildChunkIdentifier;
    double _delay;
    double _duration;
    BOOL _automatic;
    unsigned long long _referent;
    unsigned long long _cachedIndexOnSlide;
    unsigned long long _cachedActiveIndexOnSlide;
    unsigned long long _cachedIndexInBuild;
    TSPLazyReference *_buildReference;
    BOOL _needsAutomaticFromBuildAttributes;
    BOOL _needsReferentFromBuildAttributes;
    BOOL _needsDelayFromBuildAttributes;
    BOOL _needsDurationFromBuildAttributes;
}

+ (BOOL)needsObjectUUID;
+ (void)i_validateBuildReferencesForChunks:(id)arg1;
+ (void)i_repairChunkToBuildReferencesFromUUIDsForChunks:(id)arg1 builds:(id)arg2 context:(id)arg3;
+ (id)commandsToSetValueFromBuildAttributeTuples:(id)arg1;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) KNBuildChunkIdentifier *chunkIdentifier; // @synthesize chunkIdentifier=_buildChunkIdentifier;
@property(readonly, nonatomic) BOOL canEditAnimations;
@property(readonly, nonatomic) NSSet *inspectableAttributes;
@property(readonly, nonatomic) NSString *title;
- (id)p_stringRepresentationWithNotAvailableForIndex:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)p_stringForReferent:(unsigned long long)arg1;
- (BOOL)isComplementOfBuildChunk:(id)arg1;
@property(readonly, nonatomic) BOOL hasComplement;
@property(readonly, nonatomic) unsigned long long activeIndexOnSlide;
@property(readonly, nonatomic, getter=isActive) BOOL active;
@property(readonly, nonatomic) BOOL isFirstInDeliveryGroup;
@property(readonly, nonatomic) BOOL isFirstOnSlide;
@property(readonly, nonatomic) BOOL isFirstInBuild;
@property(readonly, nonatomic) unsigned long long deliveryGroupIndex;
@property(readonly, nonatomic) unsigned long long indexOnSlide;
@property(readonly, nonatomic) unsigned long long indexInBuild;
@property(readonly, nonatomic) KNSlide *slide;
@property(readonly, nonatomic) unsigned long long eventTrigger;
@property(readonly, nonatomic) NSArray *availableEventTriggers;
- (id)nextChunkOnSlide;
- (id)p_previousActiveChunkOnSlide;
- (id)previousChunkOnSlide;
@property(readonly, nonatomic, getter=isAutomaticWithPreviousChunkOnSameDrawable) BOOL automaticWithPreviousChunkOnSameDrawable;
@property(readonly, nonatomic, getter=isAutomaticWithPreviousChunk) BOOL automaticWithPreviousChunk;
@property(readonly, nonatomic) BOOL supportsWithStart;
- (id)p_chunksBuildingWithThisChunk;
- (BOOL)p_chunksBuildingWithThisChunkCanBuildWithChunk:(id)arg1;
- (BOOL)p_canBuildWithChunk:(id)arg1 checkOtherChunksBuildingWithThisChunk:(BOOL)arg2;
- (BOOL)canBuildWithChunk:(id)arg1;
@property(nonatomic) unsigned long long referent;
@property(nonatomic, getter=isAutomatic) BOOL automatic;
@property(readonly, nonatomic) KNBuild *build;
- (void)dealloc;
- (void)didInitFromSOS;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBuild:(id)arg1 referent:(unsigned long long)arg2 copyingRemainingAttributesFromChunk:(id)arg3;
- (id)initWithBuild:(id)arg1 copyingAttributesFromChunk:(id)arg2;
- (id)initWithBuild:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct BuildChunkArchive *)arg1 archiver:(id)arg2;
- (void)p_setDurationFromBuildAttributes:(id)arg1;
- (void)p_setDelayFromBuildAttributes:(id)arg1 withReferent:(unsigned long long)arg2 automatic:(BOOL)arg3;
- (void)i_didLoadBuild:(id)arg1;
- (void)loadFromArchive:(const struct BuildChunkArchive *)arg1 unarchiver:(id)arg2;
- (id)newProxyWithEditor:(id)arg1 documentRoot:(id)arg2;
- (void)i_updateChunkUUIDReferencesToBuild:(id)arg1;
- (void)i_clearChunkIdentifier;
- (void)i_setChunkIdentifier:(id)arg1;
- (void)i_setBuildId:(id)arg1;
@property(readonly, nonatomic) NSUUID *i_buildId;
@property(readonly, nonatomic) KNBuild *i_buildFromReference;
- (void)i_setBuildPointer:(id)arg1 forUnarchive:(BOOL)arg2;
- (void)i_invalidateCaches;
- (void)deallocSOS;
- (void)populateGSSPBuildChunk:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (id)commandToSetReferentAndAutomaticFromEventTrigger:(unsigned long long)arg1;
- (id)commandToSetDuration:(double)arg1;
- (id)commandToSetDelay:(double)arg1;
- (id)commandToSetReferent:(unsigned long long)arg1;
- (id)commandToSetAutomatic:(BOOL)arg1;
@property(readonly, nonatomic) BOOL shouldChangeReferent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

