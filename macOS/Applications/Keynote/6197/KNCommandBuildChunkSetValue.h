//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSKit/TSKCommand.h>

#import "GSSPAutoEncodable-Protocol.h"
#import "KNBuildOrChunkUpdatingCommand-Protocol.h"

@class NSArray, NSString;

@interface KNCommandBuildChunkSetValue : TSKCommand <GSSPAutoEncodable, KNBuildOrChunkUpdatingCommand>
{
    NSArray *_tuplesToUpdate;
    NSArray *_oldTuplesToUpdate;
}

@property(readonly, nonatomic) NSArray *oldTuplesToUpdate; // @synthesize oldTuplesToUpdate=_oldTuplesToUpdate;
@property(readonly, nonatomic) NSArray *tuplesToUpdate; // @synthesize tuplesToUpdate=_tuplesToUpdate;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL commandIsChangingStartProperty;
- (id)p_mainTuple;
- (void)p_registerchangeForTuple:(id)arg1;
- (id)p_changeDetailsForTuple:(id)arg1;
- (BOOL)p_willBecomeAutoWithForTuple:(id)arg1;
@property(readonly, nonatomic) BOOL mayChangeChunkCount;
@property(readonly, nonatomic) BOOL isValid;
- (id)makeInverse;
- (void)rollback;
- (BOOL)supportsCollaboration;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)process;
@property(readonly, copy) NSString *debugDescription;
- (id)actionString;
- (void)didInitFromSOS;
- (id)initWithBuildChunk:(id)arg1 property:(id)arg2 value:(id)arg3;
- (id)initWithBuildAttributeTuple:(id)arg1;
- (id)initWithBuildAttributeTuples:(id)arg1;
- (void)populateGSSPCmdBuildChunkSetValue:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
-     // Error parsing type: v32@0:8^{CommandBuildChunkSetValueArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}^{CommandArchive}}16@24, name: saveToArchive:archiver:
-     // Error parsing type: v32@0:8r^{CommandBuildChunkSetValueArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}^{CommandArchive}}16@24, name: loadFromArchive:unarchiver:

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

