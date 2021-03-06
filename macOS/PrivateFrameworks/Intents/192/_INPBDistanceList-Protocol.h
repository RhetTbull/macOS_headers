//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _INPBCondition, _INPBDistance;

@protocol _INPBDistanceList <NSObject>
+ (Class)distanceType;
@property(readonly, nonatomic) unsigned long long distancesCount;
@property(copy, nonatomic) NSArray *distances;
@property(readonly, nonatomic) BOOL hasCondition;
@property(retain, nonatomic) _INPBCondition *condition;
- (_INPBDistance *)distanceAtIndex:(unsigned long long)arg1;
- (void)addDistance:(_INPBDistance *)arg1;
- (void)clearDistances;
@end

