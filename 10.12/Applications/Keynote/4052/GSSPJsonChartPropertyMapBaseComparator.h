//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPJsonObjectClassComparator.h"

@interface GSSPJsonChartPropertyMapBaseComparator : GSSPJsonObjectClassComparator
{
}

- (int)p_compareServerObject:(id)arg1 againstClientObject:(id)arg2;
- (void)p_prepareServerObject:(id)arg1 clientObject:(id)arg2;
- (void)p_copyValuesFromDefaultValueMap:(id)arg1 to:(id)arg2 forKeys:(id)arg3;
- (void)p_postProcessPropertyMapObjectsWithServerObject:(id)arg1 andClientObject:(id)arg2;
- (void)p_updateParagraphStyleWithPropertyMap:(id)arg1 forServer:(BOOL)arg2;
- (id)p_getDefaultValueMap;
- (id)p_styleSosType;

@end

