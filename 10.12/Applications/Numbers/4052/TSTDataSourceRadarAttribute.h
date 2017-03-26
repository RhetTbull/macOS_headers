//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface TSTDataSourceRadarAttribute : NSObject <NSCoding>
{
    NSString *_name;
    NSString *_stringValue;
    NSNumber *_numberValue;
    NSDate *_dateValue;
}

@property(retain, nonatomic) NSDate *dateValue; // @synthesize dateValue=_dateValue;
@property(retain, nonatomic) NSNumber *numberValue; // @synthesize numberValue=_numberValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) id value;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

