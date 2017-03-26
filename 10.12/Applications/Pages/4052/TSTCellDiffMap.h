//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray, TSTCellUIDList;

@interface TSTCellDiffMap : TSPObject <GSSPAutoEncodable, NSCopying>
{
    vector_13f93596 _cellIDs;
    BOOL _uidBased;
    TSTCellUIDList *_cellUIDList;
    NSMutableArray *_mutableDiffList;
}

+ (id)cellDiffMapWithContext:(id)arg1;
@property(nonatomic, getter=isUIDBased) BOOL uidBased; // @synthesize uidBased=_uidBased;
@property(retain, nonatomic) NSMutableArray *mutableDiffList; // @synthesize mutableDiffList=_mutableDiffList;
@property(retain, nonatomic) TSTCellUIDList *cellUIDList; // @synthesize cellUIDList=_cellUIDList;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)p_copyAndAddCellDiff:(id)arg1 andCellUID:(struct TSTCellUID)arg2;
- (void)enumerateCellIDElementsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateElementsUsingBlock:(CDUnknownBlockType)arg1;
- (id)cellDiffMapByRemovingColumns:(const vector_dadc1b26 *)arg1;
- (id)cellDiffMapByRemovingRows:(const vector_dadc1b26 *)arg1;
- (id)cellDiffMapByIntersectingUIDs:(const vector_dadc1b26 *)arg1 inRows:(BOOL)arg2;
- (const vector_13f93596 *)cellIDs;
- (void)p_resolveCellIDsToUUIDsByTableInfo:(id)arg1;
- (id)uuidBasedCellDiffMapByTableInfo:(id)arg1;
- (id)prunedCellDiffMapAgainstTable:(id)arg1 allowMergeFragment:(BOOL)arg2 addingPrunedIndicesToIndexSet:(id)arg3;
- (void)addCellDiff:(id)arg1 andCellID:(struct TSUCellCoord)arg2;
- (void)addCellDiff:(id)arg1 andCellUID:(struct TSTCellUID)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (void)dealloc;
- (id)initWithContext:(id)arg1 cellDiffArray:(id)arg2 cellUIDList:(id)arg3 uidBased:(BOOL)arg4;
- (id)initWithContext:(id)arg1 cellDiff:(id)arg2 cellUIDList:(id)arg3;
- (id)initWithContext:(id)arg1;
- (void)populateGSSPCellDiffMap:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

