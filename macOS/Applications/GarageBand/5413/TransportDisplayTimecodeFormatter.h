//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LGMAKitTimecodeFormatter.h"

@interface TransportDisplayTimecodeFormatter : LGMAKitTimecodeFormatter
{
    long long _segmentCount;
}

@property long long segmentCount; // @synthesize segmentCount=_segmentCount;
- (id)stringForObjectValue:(id)arg1;
- (unsigned long long)leadingZerosForSegmentWithTag:(long long)arg1 inObjectValue:(id)arg2;
- (long long)segmentCountInObjectValue:(id)arg1;
- (id)init;

@end

