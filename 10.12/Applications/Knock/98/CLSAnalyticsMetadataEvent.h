//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CLSEventLogEvent.h"

@class NSDictionary;

@interface CLSAnalyticsMetadataEvent : CLSEventLogEvent
{
    NSDictionary *_metadataJSONData;
}

@property(readonly, copy, nonatomic) NSDictionary *metadataJSONData; // @synthesize metadataJSONData=_metadataJSONData;
- (id)initWithPriority:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 key:(id)arg3 payload:(id)arg4;
- (id)initWithPriority:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 metadataJSONData:(id)arg3;

@end

