//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RestorationAction.h"

__attribute__((visibility("hidden")))
@interface URLRestorationAction : RestorationAction
{
    BOOL _resetUI;
    BOOL _compatibleWithNavigation;
}

@property(nonatomic) BOOL compatibleWithNavigation; // @synthesize compatibleWithNavigation=_compatibleWithNavigation;
@property(nonatomic) BOOL resetUI; // @synthesize resetUI=_resetUI;
- (BOOL)shouldResetUI;
- (BOOL)isCompatibleWithRestorationTask;
- (BOOL)isCompatibleWithNavigation;
- (id)initWithResetUI:(BOOL)arg1 compatibleWithNavigation:(BOOL)arg2;

@end

