//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber;

@interface iTermStatusBarSparklinesModel : NSObject
{
    NSDictionary *_timeSeriesDict;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *timeSeriesDict; // @synthesize timeSeriesDict=_timeSeriesDict;
@property(readonly, nonatomic) NSNumber *maximumValue;
@property(readonly, nonatomic) long long count;
- (id)modelKeepingLast:(long long)arg1;
- (id)initWithDictionary:(id)arg1;

@end

