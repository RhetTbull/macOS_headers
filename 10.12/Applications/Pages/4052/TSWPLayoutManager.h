//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSWPStorageObserver-Protocol.h"

@class NSString, TSWPCTTypesetterCache, TSWPStorage;
@protocol TSWPLayoutOwner;

@interface TSWPLayoutManager : NSObject <TSWPStorageObserver>
{
    TSWPStorage *_storage;
    BOOL _isObservingStorage;
    BOOL _useLigatures;
    struct TSWPDirtyRangeVector _dirtyRanges;
    TSWPCTTypesetterCache *_typesetterCache;
    struct TSWPTopicNumberHints _cachedTopicNumbers;
    id <TSWPLayoutOwner> _owner;
}

+ (void)fixColumnBoundsForTarget:(id)arg1 storage:(id)arg2 charIndex:(unsigned long long)arg3 firstColumnIndex:(unsigned long long)arg4 precedingHeight:(double)arg5 height:(double)arg6 alreadyHasMargins:(BOOL)arg7 styleProvider:(id)arg8 vertical:(BOOL)arg9;
@property(readonly, nonatomic) id <TSWPLayoutOwner> owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) const struct TSWPDirtyRangeVector *dirtyRanges; // @synthesize dirtyRanges=_dirtyRanges;
@property(readonly, retain, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)p_layoutConfigFlagsForTarget:(id)arg1;
@property(readonly, retain, nonatomic) TSWPCTTypesetterCache *typesetterCache;
- (void)destroyLayoutState:(void *)arg1;
- (void)inflateTarget:(id)arg1 fromHints:(const vector_7a2e319d *)arg2 childHint:(id)arg3 anchoredDrawablePositions:(id)arg4 topicNumbers:(const struct TSWPTopicNumberHints *)arg5;
- (void)deflateTarget:(id)arg1 intoHints:(vector_7a2e319d *)arg2 childHints:(inout id)arg3 anchoredDrawablePositions:(id *)arg4 startingPartitionedAttachments:(out id *)arg5 topicNumbers:(struct TSWPTopicNumberHints *)arg6 layoutState:(void *)arg7;
- (void *)layoutStateForLayoutAfterHint:(const struct TSWPTargetHint *)arg1 childHint:(id)arg2 topicNumbers:(const struct TSWPTopicNumberHints *)arg3 textIsVertical:(BOOL)arg4;
- (void *)layoutIntoTarget:(id)arg1 withLayoutState:(void *)arg2 outSync:(char *)arg3;
- (BOOL)needsLayoutInColumn:(id)arg1;
- (id)layoutMetricsCache;
- (void)willRemoveAttachmentLayout:(id)arg1;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (void)resetDirtyRange;
- (void)clearTypesetterCache;
- (void)clearOwner;
- (id)styleProvider;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 owner:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

