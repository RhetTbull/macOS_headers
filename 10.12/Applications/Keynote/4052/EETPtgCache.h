//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSUPointerKeyDictionary;

@interface EETPtgCache : NSObject
{
    unsigned int mDurationCacheCount;
    TSUPointerKeyDictionary *mDurationRangeEntityCache;
}

- (void)setDurationCellResult:(int)arg1 row1:(unsigned short)arg2 col1:(unsigned short)arg3 row2:(unsigned short)arg4 col2:(unsigned short)arg5 entity:(id)arg6;
- (int)durationCellResultForRow1:(unsigned short)arg1 col1:(unsigned short)arg2 row2:(unsigned short)arg3 col2:(unsigned short)arg4 entity:(id)arg5;
- (void)dealloc;
- (id)init;
- (_Bool)cacheRow1:(unsigned short)arg1 col1:(unsigned short)arg2 row2:(unsigned short)arg3 col2:(unsigned short)arg4;
- (void)clearCache;

@end

