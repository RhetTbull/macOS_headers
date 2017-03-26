//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "TSKSelectionTransformer-Protocol.h"

@class NSString, TSKSelection;

@interface TNDocumentSelectionTransformer : TSPObject <TSKSelectionTransformer>
{
    TSKSelection *_transformedSelection;
}

@property(readonly, nonatomic) TSKSelection *transformedSelection; // @synthesize transformedSelection=_transformedSelection;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)nextSelectionTransformerForSelection:(id)arg1;
- (void)transformWithOperationTransformer:(id)arg1;
@property(readonly, nonatomic, getter=isShadowedByTransform) BOOL shadowedByTransform;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithDocumentSelection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

