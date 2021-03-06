//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iTermBaseMinimapView.h"

@class NSMutableDictionary;

@interface iTermIncrementalMinimapView : iTermBaseMinimapView
{
    NSMutableDictionary *_sets;
    struct _NSRange _visibleLines;
    CDStruct_9d0a8532 *_series;
    long long _numberOfSeries;
}

- (void).cxx_destruct;
- (struct _NSRange)rangeOfVisibleLines;
- (CDStruct_9d0a8532)seriesAtIndex:(long long)arg1;
- (long long)numberOfSeries;
- (void)setLines:(id)arg1 forType:(long long)arg2;
- (void)removeAllObjects;
- (void)setFirstVisibleLine:(long long)arg1 numberOfVisibleLines:(long long)arg2;
- (void)removeObjectOfType:(long long)arg1 fromLine:(long long)arg2;
- (void)addObjectOfType:(long long)arg1 onLine:(long long)arg2;
- (void)performInvalidate;
- (void)updateHidden;
- (void)dealloc;
- (id)initWithColors:(id)arg1;

@end

