//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXGItemsLayoutDelegate-Protocol.h>

@class PXGGeneratedLayout;
@protocol PXLayoutItemInput;

@protocol PXGGeneratedLayoutDelegate <PXGItemsLayoutDelegate>
- (id)generatedLayout:(PXGGeneratedLayout *)arg1 objectReferenceAtIndex:(unsigned int)arg2;
- (struct CGRect)generatedLayout:(PXGGeneratedLayout *)arg1 bestCropRectForInputItemAtIndex:(unsigned int)arg2 withAspectRatio:(double)arg3;
- (id <PXLayoutItemInput>)generatedLayout:(PXGGeneratedLayout *)arg1 inputItemAtIndex:(unsigned int)arg2;
@end

