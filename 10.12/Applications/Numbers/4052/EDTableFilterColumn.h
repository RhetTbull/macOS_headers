//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface EDTableFilterColumn : NSObject
{
    unsigned long long mColumnIndex;
    NSMutableArray *mFilters;
    int mFiltersRelation;
}

- (id)description;
- (void)setFiltersRelation:(int)arg1;
- (int)filtersRelation;
- (void)setColumnIndex:(unsigned long long)arg1;
- (unsigned long long)columnIndex;
- (void)addFilter:(id)arg1;
- (id)filterAtIndex:(unsigned long long)arg1;
- (unsigned long long)filterCount;
- (void)dealloc;
- (id)init;

@end

