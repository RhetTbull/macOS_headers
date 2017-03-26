//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TSULocale;
@protocol TSCHChartGridValue, TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject;

@protocol TSCHDataFormatter <NSObject>
- (long long)numberOfDecimalPlaces;
- (id <TSCHDataFormatterSupportedClientFormatObject>)convertToSupportedClientFormatObjectWithLocale:(TSULocale *)arg1;
- (id <TSCHDataFormatterPersistableStyleObject>)convertToPersistableStyleObject;
- (BOOL)isCompatibleWithDataFormatter:(id <TSCHDataFormatter>)arg1;
- (NSString *)chartFormattedInspectorStringForValue:(id <TSCHChartGridValue>)arg1 locale:(TSULocale *)arg2;
- (NSString *)chartFormattedStringForValue:(id <TSCHChartGridValue>)arg1 locale:(TSULocale *)arg2;
@end

