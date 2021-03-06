//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoPrintProduct/NSCopying-Protocol.h>

@class NSArray, NSDateComponents, NSString;

@interface PIECalendarSliceParams : NSObject <NSCopying>
{
    NSDateComponents *_sliceDateComponents;
    long long _targetHoleCount;
    NSArray *_addressBookBirthdayInfos;
    NSArray *_nationalHolidayInfos;
    NSString *_calendarSliceDateString;
}

@property(retain, nonatomic) NSArray *nationalHolidayInfos; // @synthesize nationalHolidayInfos=_nationalHolidayInfos;
@property(retain, nonatomic) NSArray *addressBookBirthdayInfos; // @synthesize addressBookBirthdayInfos=_addressBookBirthdayInfos;
@property(nonatomic) long long targetHoleCount; // @synthesize targetHoleCount=_targetHoleCount;
@property(readonly, nonatomic) NSDateComponents *sliceDateComponents; // @synthesize sliceDateComponents=_sliceDateComponents;
@property(readonly, nonatomic) NSString *calendarSliceDateString; // @synthesize calendarSliceDateString=_calendarSliceDateString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDateComponents:(id)arg1;
- (void)dealloc;

@end

