//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary;

@interface W5Event : NSObject <NSCopying, NSSecureCoding>
{
    long long _eventID;
    double _timestamp;
    NSDictionary *_info;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long eventID; // @synthesize eventID=_eventID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)description;
- (void)dealloc;

@end

