//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OTPGenerator.h"

@interface TOTPGenerator : OTPGenerator
{
    double period_;
}

+ (double)defaultPeriod;
@property(nonatomic) double period; // @synthesize period=period_;
- (id)generateOTPForDate:(id)arg1;
- (id)generateOTP;
- (id)initWithSecret:(id)arg1 algorithm:(id)arg2 digits:(unsigned long long)arg3 period:(double)arg4;

@end

