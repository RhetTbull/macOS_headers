//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSDMacMeanFilter : NSObject
{
    double mSamples[5];
    unsigned long long mSampleCount;
}

@property(readonly, nonatomic) double mean; // @dynamic mean;
- (void)reset;
- (void)addSample:(double)arg1;

@end

