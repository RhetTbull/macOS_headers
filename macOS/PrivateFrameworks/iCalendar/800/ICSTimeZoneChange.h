//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICSTimeZoneChange : NSObject
{
    double _interval;
    long long _tzOffsetTo;
}

- (long long)compare:(id)arg1;
- (id)description;
- (BOOL)isCloseTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (long long)tzOffsetTo;
- (double)interval;
- (id)initWithTimeInterval:(double)arg1 tzOffsetTo:(long long)arg2;

@end

