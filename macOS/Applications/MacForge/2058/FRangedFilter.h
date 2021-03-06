//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FNodeFilter.h"

@class FNamedNode, NSString;

@interface FRangedFilter : NSObject <FNodeFilter>
{
    FNamedNode *_startPost;
    FNamedNode *_endPost;
    id <FNodeFilter> _indexedFilter;
    id <FIndex> _index;
}

+ (id)endPostFromQueryParams:(id)arg1;
+ (id)startPostFromQueryParams:(id)arg1;
@property(retain, nonatomic) id <FIndex> index; // @synthesize index=_index;
@property(retain, nonatomic) id <FNodeFilter> indexedFilter; // @synthesize indexedFilter=_indexedFilter;
@property(retain, nonatomic) FNamedNode *endPost; // @synthesize endPost=_endPost;
@property(retain, nonatomic) FNamedNode *startPost; // @synthesize startPost=_startPost;
- (void).cxx_destruct;
- (BOOL)filtersNodes;
- (id)updatePriority:(id)arg1 forNode:(id)arg2;
- (id)updateFullNode:(id)arg1 withNewNode:(id)arg2 accumulator:(id)arg3;
- (id)updateChildIn:(id)arg1 forChildKey:(id)arg2 newChild:(id)arg3 affectedPath:(id)arg4 fromSource:(id)arg5 accumulator:(id)arg6;
- (BOOL)matchesKey:(id)arg1 andNode:(id)arg2;
- (id)initWithQueryParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

