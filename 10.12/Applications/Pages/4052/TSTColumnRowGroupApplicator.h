//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TSTColumnRowGroupApplicator : NSObject
{
    struct map<int, AnchorHash, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, AnchorHash>>> _anchoredInsertionMap;
    vector_8804bab3 _unanchoredInsertionList;
    vector_dadc1b26 _addedUIDs;
    BOOL _row;
    BOOL _unsetFilterHidingAction;
    unsigned short _oldTotal;
    unsigned short _oldHeader;
    unsigned short _oldFooter;
    unsigned short _maxTotal;
    unsigned short _maxHeader;
    unsigned short _maxFooter;
    unsigned short _newTotal;
    unsigned short _newHeader;
    unsigned short _newFooter;
    unsigned short _firstBodyIndex;
    unsigned short _lastBodyIndex;
    NSArray *_headerGroupList;
}

@property(nonatomic) unsigned short lastBodyIndex; // @synthesize lastBodyIndex=_lastBodyIndex;
@property(nonatomic) unsigned short firstBodyIndex; // @synthesize firstBodyIndex=_firstBodyIndex;
@property(nonatomic) unsigned short newFooter; // @synthesize newFooter=_newFooter;
@property(nonatomic) unsigned short newHeader; // @synthesize newHeader=_newHeader;
@property(nonatomic) unsigned short newTotal; // @synthesize newTotal=_newTotal;
@property(nonatomic) unsigned short maxFooter; // @synthesize maxFooter=_maxFooter;
@property(nonatomic) unsigned short maxHeader; // @synthesize maxHeader=_maxHeader;
@property(nonatomic) unsigned short maxTotal; // @synthesize maxTotal=_maxTotal;
@property(nonatomic) unsigned short oldFooter; // @synthesize oldFooter=_oldFooter;
@property(nonatomic) unsigned short oldHeader; // @synthesize oldHeader=_oldHeader;
@property(nonatomic) unsigned short oldTotal; // @synthesize oldTotal=_oldTotal;
@property(nonatomic) BOOL unsetFilterHidingAction; // @synthesize unsetFilterHidingAction=_unsetFilterHidingAction;
@property(nonatomic, getter=isRow) BOOL row; // @synthesize row=_row;
@property(retain, nonatomic) NSArray *headerGroupList; // @synthesize headerGroupList=_headerGroupList;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_commitInsertion:(id)arg1 acceptHash:(struct AcceptHash *)arg2 anchorIdx:(int)arg3 isHeadAnchor:(_Bool)arg4 committedIdList:(vector_dadc1b26 *)arg5 failedHeaderList:(vector_8804bab3 *)arg6 failedFooterList:(vector_8804bab3 *)arg7;
- (void)p_acceptInsertion:(const vector_dadc1b26 *)arg1 headerInfoList:(id)arg2 fromPos:(int)arg3 toPos:(int)arg4 anchorId:(const UUIDData_5fbc143e *)arg5 anchorIdx:(int)arg6 isHeadAnchor:(_Bool)arg7 regionDisplacement:(int)arg8;
- (const vector_dadc1b26 *)addedUIDs;
- (BOOL)applyToTable:(id)arg1;
- (void)dealloc;
- (id)initWithHeaderGroupList:(id)arg1 forRows:(BOOL)arg2 unsetFilterHidingAction:(BOOL)arg3;

@end

