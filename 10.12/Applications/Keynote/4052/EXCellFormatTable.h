//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EXCellFormatTable : NSObject
{
}

+ (void)writeCellStylesElementsWithState:(id)arg1;
+ (void)writeCellStyleXfsElementsWithState:(id)arg1;
+ (void)writeCellXfsElementsWithState:(id)arg1;
+ (void)setDefaultWithState:(id)arg1;
+ (void)readFromCellStylesElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readFromCellStyleXfsElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readFromCellXfsElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readCellFormatsFrom:(struct _xmlNode *)arg1 isStyle:(_Bool)arg2 state:(id)arg3;

@end

