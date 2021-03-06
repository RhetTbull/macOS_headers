//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface LoadingIndicatorController : NSObject
{
    NSHashTable *_loadingTokens;
    BOOL _updateScheduled;
    BOOL _showing;
    BOOL _suppressed;
}

+ (void)setAsSharedInstanceClass;
+ (id)sharedController;
- (void).cxx_destruct;
@property(nonatomic, getter=isSuppressed) BOOL suppressed; // @synthesize suppressed=_suppressed;
@property(readonly, nonatomic, getter=isShowing) BOOL showing; // @synthesize showing=_showing;
- (void)_didInvalidateLoadingToken;
- (id)beginShowingLoadingIndicator;
- (BOOL)_isLoading;
- (void)showingDidChange;
- (void)_updateLoadingIndicator;
- (id)_allLoadingTokens;

@end

