//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EETRow : NSObject
{
}

+ (void)mapBlankCellsForSourceRowNumber:(int)arg1 firstSourceColumnNumber:(int)arg2 lastSourceColumnNumber:(int)arg3 edRowInfo:(struct EDRowInfo **)arg4 state:(id)arg5;
+ (void)mapCurrentCellInIterator:(id)arg1 edRowInfo:(struct EDRowInfo **)arg2 state:(id)arg3;
+ (void)updateRowInfoIfNeeded:(struct EDRowInfo **)arg1 sourceRowNumber:(int)arg2 cellCountHint:(unsigned int)arg3 state:(id)arg4;
+ (id)rowStyleForRowNumber:(int)arg1 state:(id)arg2;
+ (void)mapRowInfo:(struct EDRowInfo *)arg1 sourceRowNumber:(int)arg2 state:(id)arg3;
+ (void)mapEmptyCellAtSourceRowNumber:(int)arg1 sourceColumnNumber:(int)arg2 edRowInfo:(struct EDRowInfo **)arg3 state:(id)arg4;
+ (void)mapCurrentCellInIteratorWithUpdatedRowInfo:(id)arg1 edRowInfo:(struct EDRowInfo **)arg2 state:(id)arg3;

@end

