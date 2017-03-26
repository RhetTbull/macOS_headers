//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNKPFAnimation.h"

@class KNKPFPath, NSArray;

@interface KNKPFKeyframeAnimation : KNKPFAnimation
{
    NSArray *_values;
    NSArray *_keyTimes;
    NSArray *_timingFunctions;
    KNKPFPath *_path;
}

@property(retain, nonatomic) KNKPFPath *path; // @synthesize path=_path;
@property(copy, nonatomic) NSArray *timingFunctions; // @synthesize timingFunctions=_timingFunctions;
@property(copy, nonatomic) NSArray *keyTimes; // @synthesize keyTimes=_keyTimes;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (BOOL)readFromKPFDictionary:(id)arg1 error:(out id *)arg2;
- (void)dealloc;

@end

