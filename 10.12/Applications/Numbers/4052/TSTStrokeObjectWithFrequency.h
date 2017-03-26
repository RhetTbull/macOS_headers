//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSTStrokeObjectWithFrequency : NSObject
{
    id _object;
    long long _frequency;
    unsigned short _row;
    unsigned char _col;
}

@property(nonatomic) unsigned char col; // @synthesize col=_col;
@property(nonatomic) unsigned short row; // @synthesize row=_row;
@property(nonatomic) long long frequency; // @synthesize frequency=_frequency;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)increaseFrequencyBy:(int)arg1;
- (id)initWithObject:(id)arg1 andFrequency:(long long)arg2 atRow:(unsigned short)arg3 andCol:(unsigned char)arg4;

@end

