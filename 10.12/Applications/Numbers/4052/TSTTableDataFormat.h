//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableDataObject.h"

@interface TSTTableDataFormat : TSTTableDataObject
{
    CDStruct_28403e59 mFormat;
}

@property(readonly, nonatomic) CDStruct_28403e59 format; // @synthesize format=mFormat;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initObjectWithFormat:(CDStruct_28403e59)arg1 refCount:(unsigned int)arg2;

@end

