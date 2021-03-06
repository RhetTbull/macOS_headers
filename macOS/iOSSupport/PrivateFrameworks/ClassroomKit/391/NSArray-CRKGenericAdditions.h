//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <ClassroomKit/CRKJSONRepresentable-Protocol.h>

@interface NSArray (CRKGenericAdditions) <CRKJSONRepresentable>
- (BOOL)crk_startsWith:(id)arg1;
- (id)crk_partitionUsingKeyGenerator:(CDUnknownBlockType)arg1 valueGenerator:(CDUnknownBlockType)arg2;
- (id)crk_sortedSubarrayWithRange:(struct _NSRange)arg1 comparator:(CDUnknownBlockType)arg2;
- (id)crk_dictionaryUsingKeyGenerator:(CDUnknownBlockType)arg1 valueGenerator:(CDUnknownBlockType)arg2;
- (id)crk_sortedArrayForRange:(struct _NSRange)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (BOOL)crk_isSortedByComparator:(CDUnknownBlockType)arg1;
- (id)crk_arrayByRemovingObject:(id)arg1;
- (id)crk_mapUsingBlock:(CDUnknownBlockType)arg1;
- (id)crk_filterUsingBlock:(CDUnknownBlockType)arg1;
- (id)crk_JSONRepresentationWithPrettyPrinting:(BOOL)arg1 sortKeys:(BOOL)arg2;
@end

