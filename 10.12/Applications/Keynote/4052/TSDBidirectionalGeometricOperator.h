//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TSDBidirectionalGeometricOperator : NSObject
{
    NSMutableDictionary *mStandardValues;
    NSMutableDictionary *mSwappedValues;
}

- (id)valueForKey:(id)arg1 swapped:(BOOL)arg2;
- (void)executeBidirectionalOperation:(CDUnknownBlockType)arg1;
- (void)setOrientationDependentValueForKey:(id)arg1 withStandardValue:(id)arg2 andSwappedValue:(id)arg3;
- (void)dealloc;
- (id)init;

@end

