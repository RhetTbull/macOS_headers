//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol PXCuratedLibraryRowBasedLayout
@property(readonly, nonatomic) double buildingRowSpacing;
@property(readonly, nonatomic) double buildingRowContentHeight;
- (void)enumerateRowsWithOptions:(unsigned long long)arg1 usingBlock:(void (^)(struct CGRect, char *))arg2;
@end

