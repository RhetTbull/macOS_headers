//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Quartz/QCPlugIn.h>

@class NSDictionary, NSMutableArray;

@interface CompositionList : QCPlugIn
{
    NSMutableArray *_effectsArray;
    NSMutableArray *_pageList;
    unsigned long long _pageIndex;
    unsigned long long _previousIndex;
    NSDictionary *_normalDesc;
    BOOL _updateOutput;
}

+ (id)attributes;
+ (int)timeMode;
+ (int)executionMode;
- (BOOL)execute:(id)arg1 atTime:(double)arg2 withArguments:(id)arg3;
- (void)enableExecution:(id)arg1;
- (BOOL)startExecution:(id)arg1;
- (void)_rebuildBankList;
- (void)_loadAllEffects;
- (void)_repositoryUpdated;
- (void)dealloc;
- (id)init;

@end

