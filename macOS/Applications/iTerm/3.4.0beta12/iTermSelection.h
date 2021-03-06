//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMutableArray;

@interface iTermSelection : NSObject <NSCopying>
{
    CDStruct_c5b70272 _absRange;
    CDStruct_c5b70272 _initialAbsRange;
    BOOL _live;
    BOOL _extend;
    NSMutableArray *_subSelections;
    BOOL _resumable;
    BOOL _appending;
    BOOL _haveClearedColumnWindow;
    id <iTermSelectionDelegate> _delegate;
    long long _selectionMode;
}

+ (id)nameForMode:(long long)arg1;
@property(readonly, nonatomic) BOOL haveClearedColumnWindow; // @synthesize haveClearedColumnWindow=_haveClearedColumnWindow;
@property(nonatomic) BOOL appending; // @synthesize appending=_appending;
@property(nonatomic) BOOL resumable; // @synthesize resumable=_resumable;
@property(readonly, nonatomic) BOOL live; // @synthesize live=_live;
@property(nonatomic) long long selectionMode; // @synthesize selectionMode=_selectionMode;
@property(nonatomic) id <iTermSelectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setFromDictionaryValue:(id)arg1 width:(int)arg2 totalScrollbackOverflow:(long long)arg3;
- (id)dictionaryValueWithYOffset:(int)arg1 totalScrollbackOverflow:(long long)arg2;
- (void)enumerateSelectedAbsoluteRanges:(CDUnknownBlockType)arg1;
- (id)selectedIndexesIncludingTabFillersInAbsoluteLine:(long long)arg1;
- (id)selectedIndexesOnAbsoluteLine:(long long)arg1;
- (struct _NSRange)rangeOfIndexesInAbsRange:(CDStruct_c5b70272)arg1 onAbsoluteLine:(long long)arg2 mode:(long long)arg3;
- (void)removeWindowsWithWidth:(int)arg1;
- (void)addSubSelections:(id)arg1;
- (void)addSubSelection:(id)arg1;
- (void)setLastAbsRange:(CDStruct_c5b70272)arg1 mode:(long long)arg2;
- (void)setFirstAbsRange:(CDStruct_c5b70272)arg1 mode:(long long)arg2;
@property(readonly, nonatomic) CDStruct_c5b70272 firstAbsRange;
@property(readonly, nonatomic) CDStruct_c5b70272 lastAbsRange;
@property(readonly, nonatomic) CDStruct_7ab14d82 spanningAbsRange;
@property(readonly, nonatomic) NSArray *allSubSelections;
- (void)extendPastNulls;
- (CDStruct_c5b70272)absRangeByExtendingRangePastNulls:(CDStruct_c5b70272)arg1;
- (CDStruct_c5b70272)unflippedAbsRangeForAbsRange:(CDStruct_c5b70272)arg1 mode:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setSelectedAbsRange:(CDStruct_c5b70272)arg1;
@property(readonly, nonatomic) long long length;
- (int)width;
- (BOOL)containsAbsCoord:(CDStruct_dc106ac8)arg1;
@property(readonly, nonatomic) BOOL liveRangeIsFlipped;
- (BOOL)absRangeIsFlipped:(CDStruct_c5b70272)arg1;
- (void)scrollbackOverflowDidChange;
@property(readonly, nonatomic) BOOL hasSelection;
- (void)moveSelectionEndpointToAbsRange:(CDStruct_c5b70272)arg1;
- (BOOL)moveSelectionEndpointTo:(CDStruct_dc106ac8)arg1;
- (BOOL)absCoord:(CDStruct_dc106ac8)arg1 isEqualToAbsCoord:(CDStruct_dc106ac8)arg2;
- (BOOL)absCoord:(CDStruct_dc106ac8)arg1 isAfterAbsCoord:(CDStruct_dc106ac8)arg2;
- (BOOL)absCoord:(CDStruct_dc106ac8)arg1 isBeforeAbsCoord:(CDStruct_dc106ac8)arg2;
- (BOOL)absCoord:(CDStruct_dc106ac8)arg1 isInAbsRange:(CDStruct_c5b70272)arg2;
@property(readonly, nonatomic) CDStruct_c5b70272 liveRange;
- (void)clearSelection;
@property(readonly, nonatomic) BOOL extending;
- (BOOL)haveLiveSelection;
- (void)clearColumnWindowForLiveSelection;
- (void)endLiveSelection;
- (void)beginSelectionAtAbsCoord:(CDStruct_dc106ac8)arg1 mode:(long long)arg2 resume:(BOOL)arg3 append:(BOOL)arg4;
- (CDStruct_c5b70272)absRangeForCurrentModeAtAbsCoord:(CDStruct_dc106ac8)arg1 includeParentheticals:(BOOL)arg2 needAccurateWindow:(BOOL)arg3;
- (void)beginExtendingSelectionAt:(CDStruct_dc106ac8)arg1;
- (CDStruct_c5b70272)unflippedLiveAbsRange;
- (void)flip;
- (id)description;
- (void)dealloc;
- (id)init;

@end

