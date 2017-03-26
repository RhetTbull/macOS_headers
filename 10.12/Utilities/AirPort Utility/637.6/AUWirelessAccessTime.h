//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDate, NSString;

@interface AUWirelessAccessTime : NSObject <NSCopying>
{
    unsigned long long daySelection;
    NSArray *daySelectionValues;
    long long coarseTimeSelection;
    NSArray *coarseTimeSelectionValues;
    NSDate *beginTime;
    NSDate *endTime;
    NSString *accessTimeSeperator;
    long long firstWeekday;
    NSString *daySelectionDescription;
}

@property(retain, nonatomic) NSString *daySelectionDescription; // @synthesize daySelectionDescription;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime;
@property(retain, nonatomic) NSString *accessTimeSeperator; // @synthesize accessTimeSeperator;
@property(retain, nonatomic) NSDate *beginTime; // @synthesize beginTime;
@property(retain, nonatomic) NSArray *coarseTimeSelectionValues; // @synthesize coarseTimeSelectionValues;
@property(nonatomic) long long coarseTimeSelection; // @synthesize coarseTimeSelection;
@property(retain, nonatomic) NSArray *daySelectionValues; // @synthesize daySelectionValues;
@property(nonatomic) unsigned long long daySelection; // @synthesize daySelection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)parseString:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (unsigned int)daySetForSelectionIndex:(long long)arg1;
- (id)dateWithDailyHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 second:(unsigned long long)arg3;
- (id)defaultEndTime;
- (id)defaultStartTime;

@end

