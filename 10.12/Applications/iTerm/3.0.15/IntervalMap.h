//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IntervalMap : NSObject
{
    NSMutableArray *elements_;
}

- (id)description;
- (id)allValues;
- (void)incrementNumbersBy:(int)arg1 inRange:(id)arg2;
- (id)ranges:(id)arg1 bySubtractingRange:(id)arg2;
- (void)setObject:(id)arg1 forRange:(id)arg2;
- (void)insertElement:(id)arg1;
- (id)elementsInRange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

