//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EBGraphic : NSObject
{
}

+ (void)writeGraphicsInSheet:(id)arg1 state:(id)arg2;
+ (id)readMainChartWithState:(id)arg1;
+ (void)readGraphicsInChart:(id)arg1 state:(id)arg2;
+ (void)readGraphicsWithState:(id)arg1;
+ (void)writeChartFromDrawable:(id)arg1 state:(id)arg2;
+ (int)objectTypeForShape:(id)arg1;
+ (void)writeGraphicsInfoForDrawable:(id)arg1 drawableCount:(unsigned int *)arg2 xlNoteTable:(struct XlNoteTable *)arg3 state:(id)arg4;
+ (void)writeGraphicsInGroup:(id)arg1 drawableCount:(unsigned int *)arg2 xlNoteTable:(struct XlNoteTable *)arg3 state:(id)arg4;
+ (void)readNotesWithDictionary:(id)arg1 state:(id)arg2;
+ (void)readImage:(id)arg1 xlGraphicsInfo:(struct XlGraphicsInfo *)arg2 state:(id)arg3;
+ (void)readChart:(id)arg1 chartIndex:(short)arg2 state:(id)arg3;
+ (void)readOle:(id)arg1 xlGraphicsInfo:(struct XlGraphicsInfo *)arg2 state:(id)arg3;
+ (id)readGraphicWithDictionary:(id)arg1 state:(id)arg2;

@end

