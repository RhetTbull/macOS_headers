//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSIndexSet, PXLayoutMetrics;

@interface PXLayoutGenerator : NSObject <NSCopying>
{
    PXLayoutMetrics *_metrics;
    unsigned long long _itemCount;
    CDUnknownBlockType _itemLayoutInfoBlock;
}

@property(copy, nonatomic) CDUnknownBlockType itemLayoutInfoBlock; // @synthesize itemLayoutInfoBlock=_itemLayoutInfoBlock;
@property(nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(readonly, copy, nonatomic) PXLayoutMetrics *metrics; // @synthesize metrics=_metrics;
- (void).cxx_destruct;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (unsigned long long)numberOfGeometriesWithKind:(long long)arg1;
@property(readonly, nonatomic) NSIndexSet *geometryKinds;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) struct CGSize estimatedSize;
- (void)invalidate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetrics:(id)arg1;
- (id)init;

@end

