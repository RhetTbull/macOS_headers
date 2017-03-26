//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "TSKSelectionTransformer-Protocol.h"

@class NSString, TSKSelection;

@interface TSDPathSelectionTransformer : TSPObject <TSKSelectionTransformer>
{
}

- (void)saveToArchive:(struct PathSelectionTransformerArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct PathSelectionTransformerArchive *)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)nextSelectionTransformerForSelection:(id)arg1;
@property(readonly, nonatomic, getter=isShadowedByTransform) BOOL shadowedByTransform;
@property(readonly, nonatomic) TSKSelection *transformedSelection;
- (void)transformWithOperationTransformer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

