//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TMACollectionView;

@interface TMACollectionViewLayout : NSObject
{
    TMACollectionView *_collectionView;
}

@property(nonatomic) TMACollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)nextRowIndexPathForIndexPath:(id)arg1;
- (id)previousRowIndexPathForIndexPath:(id)arg1;
- (id)nextColumnIndexPathForIndexPath:(id)arg1;
- (id)previousColumnIndexPathForIndexPath:(id)arg1;
- (id)layoutAttributesForElementAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)invalidateLayout;

@end

