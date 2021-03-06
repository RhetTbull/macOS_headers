//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface KNPresenterDisplayTimerConfiguration : NSObject <NSCopying>
{
    long long _timerMode;
    double _initialTimeRemaining;
}

+ (id)configurationWithPropertyListRepresentation:(id)arg1;
@property(readonly, nonatomic) double initialTimeRemaining; // @synthesize initialTimeRemaining=_initialTimeRemaining;
@property(readonly, nonatomic) long long timerMode; // @synthesize timerMode=_timerMode;
@property(readonly, nonatomic) id propertyListRepresentation;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTimerMode:(long long)arg1 initialTimeRemaining:(double)arg2;

@end

