//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OAETTable : NSObject
{
}

+ (void)mapTableStylesFromTheme:(id)arg1 documentStylesheet:(id)arg2 state:(id)arg3;
+ (id)mapTableStyleNetwork:(id)arg1 state:(id)arg2;
+ (void)mapCellStyle:(id)arg1 paragraphStyle:(id)arg2 toPart:(int)arg3 ofStyle:(id)arg4 state:(id)arg5;
+ (void)mapBorderFromCellStyle:(id)arg1 property:(int)arg2 toBorderStyle:(id)arg3 border:(int)arg4 state:(id)arg5;
+ (id)ensureExistenceOfPart:(int)arg1 inTableStyle:(id)arg2;
+ (id)resolvedCellFillInTableModel:(id)arg1 rowIndex:(unsigned short)arg2 columnIndex:(unsigned short)arg3;
+ (id)mapTable:(id)arg1 state:(id)arg2;
+ (float)fixedTableHeightWithSourceTableInfo:(id)arg1 targetTable:(id)arg2;
+ (id)mapCellStroke:(id)arg1 tableOpacity:(float)arg2 state:(id)arg3;

@end

