//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableSubSelectionTransformerBase.h"

@interface TSTRowColumnSelectionTransformer : TSTTableSubSelectionTransformerBase
{
    vector_dadc1b26 _rowColUIDArray;
    long long _selectionType;
}

@property(readonly, nonatomic) long long selectionType; // @synthesize selectionType=_selectionType;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)nextSelectionTransformerForSelection:(id)arg1;
- (void)transformWithOperationTransformer:(id)arg1;
- (BOOL)isShadowedByTransform;
- (id)transformedSelection;
- (id)initWithContext:(id)arg1 tableInfoIdPath:(id)arg2;
- (id)initWithTableInfo:(id)arg1 cellSelection:(id)arg2;

@end

