//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet, TSTTableInfo;

@interface TSTSmartPasteTableRemapper : NSObject
{
    BOOL _dropHeaders;
    BOOL _columnRemappingAllowed;
    TSTTableInfo *_tableInfo;
    NSMutableIndexSet *_validColumns;
}

@property(nonatomic) BOOL columnRemappingAllowed; // @synthesize columnRemappingAllowed=_columnRemappingAllowed;
@property(retain, nonatomic) NSMutableIndexSet *validColumns; // @synthesize validColumns=_validColumns;
@property(nonatomic) BOOL dropHeaders; // @synthesize dropHeaders=_dropHeaders;
@property(retain, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (BOOL)p_columnRemappingAllowed:(id)arg1 columnThreshold:(unsigned short)arg2;
- (void)p_remapSourceColumn:(unsigned char)arg1 srcTableModel:(id)arg2 ontoDestination:(id)arg3 atRemappedColumn:(unsigned char)arg4;
- (id)validColumnIndicies;
- (BOOL)remappingWasSuccessful;
- (id)remapOntoDestination:(id)arg1 destSelection:(id)arg2 columnThreshold:(unsigned short)arg3 viaDragDrop:(BOOL)arg4;
- (void)dealloc;
- (id)initWithTableToRemap:(id)arg1 dropHeaders:(BOOL)arg2;

@end

