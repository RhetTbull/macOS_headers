//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GQDTReference.h"

#import "GQDNameMappable-Protocol.h"

@class NSString;

@interface GQDTLocalRangeReference : GQDTReference <GQDNameMappable>
{
    struct GQDTCellRange mRange;
}

+ (const struct StateSpec *)stateForReading;
@property(readonly, nonatomic) struct GQDTCellRange cellRange; // @synthesize cellRange=mRange;
@property(readonly, copy) NSString *description;
- (int)readCellRangeFromReader:(struct _xmlTextReader *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

