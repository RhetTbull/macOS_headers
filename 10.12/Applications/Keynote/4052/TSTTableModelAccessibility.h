//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TSTTableModelAccessibility_super.h"

@interface TSTTableModelAccessibility : __TSTTableModelAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
- (BOOL)tsaxCellIDIsHidden:(struct TSUCellCoord)arg1;
- (BOOL)tsaxIsColumnHidden:(unsigned short)arg1;
- (BOOL)tsaxIsRowHidden:(unsigned short)arg1;
- (BOOL)tsaxHasCommentAtCellID:(struct TSUCellCoord)arg1;
- (id)tsaxRowNameForCellID:(struct TSUCellCoord)arg1 cellRangeContainingName:(struct TSUCellRect *)arg2 restrictToBodyRange:(BOOL)arg3;
- (id)tsaxColumnNameForCellID:(struct TSUCellCoord)arg1 cellRangeContainingName:(struct TSUCellRect *)arg2 restrictToBodyRange:(BOOL)arg3;
@property(readonly, nonatomic) BOOL tsaxTableNameEnabled;
@property(readonly, nonatomic) unsigned short tsaxNumberOfHeaderRows;
@property(readonly, nonatomic) unsigned short tsaxNumberOfHeaderColumns;
@property(readonly, nonatomic) unsigned short tsaxNumberOfColumns;
@property(readonly, nonatomic) unsigned short tsaxNumberOfFooterRows;
@property(readonly, nonatomic) unsigned short tsaxNumberOfRows;

@end

