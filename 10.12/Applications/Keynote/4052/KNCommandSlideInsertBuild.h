//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "KNBuildOrChunkUpdatingCommand-Protocol.h"

@class KNAbstractSlide, KNBuild, KNBuildChunkIdentifier, KNInsertBuildDescription, NSArray, NSString;

@interface KNCommandSlideInsertBuild : TSKCommand <GSSPAutoEncodable, KNBuildOrChunkUpdatingCommand>
{
    KNInsertBuildDescription *_insertBuildDescription;
    BOOL _shouldCreateChunks;
    KNBuildChunkIdentifier *_identifierForChunkToInsertAfter;
    NSArray *_oldTuplesToUpdate;
    BOOL _wasInitializedOverTheWire;
    BOOL _hasBeenCommitted;
    NSArray *_tuplesToUpdate;
}

@property(readonly, nonatomic) NSArray *oldTuplesToUpdate; // @synthesize oldTuplesToUpdate=_oldTuplesToUpdate;
@property(readonly, nonatomic) NSArray *tuplesToUpdate; // @synthesize tuplesToUpdate=_tuplesToUpdate;
@property(readonly, nonatomic) KNBuildChunkIdentifier *identifierForChunkToInsertAfter; // @synthesize identifierForChunkToInsertAfter=_identifierForChunkToInsertAfter;
@property(nonatomic) BOOL wasInitializedOverTheWire; // @synthesize wasInitializedOverTheWire=_wasInitializedOverTheWire;
@property(readonly, nonatomic) BOOL mayChangeChunkCount;
- (BOOL)p_identifier:(id)arg1 isContainedInIdentifiersForChunks:(id)arg2;
@property(readonly, nonatomic) BOOL isValid;
- (id)p_makeInverseBuildDescriptionRemovingChunkIdentifiers:(BOOL)arg1;
- (id)makeInverseBuildDescription;
- (id)p_makeInverseRemovingChunkIdentifiers:(BOOL)arg1;
- (id)makeInverse;
- (void)rollback;
- (BOOL)supportsCollaboration;
- (void)redo;
- (void)undo;
- (BOOL)p_identifiersToInsertAfterResolveToValidChunksForChunksToInsert:(id)arg1;
- (BOOL)p_identifierToInsertAfterResolvesToValidChunk;
- (id)p_findFallbackChunkIdentifierToInsertAfterForChunkIdentifier:(id)arg1;
- (id)p_insertBuildChunks:(id)arg1 identifiersChunksWereInsertedAfter:(id *)arg2;
- (void)p_insertBuild;
- (id)p_createChunksToInsert;
- (void)p_fixBuildToDrawablePointer;
- (id)p_oldTuplesToUpdateByUpdatingChunkCount;
- (void)commit;
- (BOOL)process;
@property(readonly, nonatomic) KNAbstractSlide *slide;
@property(readonly, nonatomic) KNBuild *buildToInsert;
- (id)actionString;
- (void)dealloc;
- (void)didInitFromSOS;
- (id)initWithSlide:(id)arg1 buildToInsert:(id)arg2 chunksToInsert:(id)arg3 afterChunksWithIdentifiers:(id)arg4;
- (id)initWithSlide:(id)arg1 buildToInsert:(id)arg2 chunksToInsert:(id)arg3 afterChunkWithIdentifier:(id)arg4;
- (id)initWithSlide:(id)arg1 buildToInsert:(id)arg2 createChunksAfterChunkWithIdentifier:(id)arg3;
- (id)initWithInsertBuildDescription:(id)arg1 shouldCreateChunks:(BOOL)arg2 afterChunkWithIdentifier:(id)arg3;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct CommandSlideInsertBuildArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct CommandSlideInsertBuildArchive *)arg1 unarchiver:(id)arg2;
- (void)deallocSOS;
- (void)populateGSSPCmdSlideInsertBuild:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

