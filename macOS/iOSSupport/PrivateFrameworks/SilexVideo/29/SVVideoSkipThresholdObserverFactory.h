//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoSkipThresholdObserverFactory-Protocol.h>

@class NSString;
@protocol SVVideoLoadingStateObserverFactory, SVVideoSkipThresholdProviding;

@interface SVVideoSkipThresholdObserverFactory : NSObject <SVVideoSkipThresholdObserverFactory>
{
    id <SVVideoSkipThresholdProviding> _skipThresholdProvider;
    id <SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SVVideoLoadingStateObserverFactory> loadingStateObserverFactory; // @synthesize loadingStateObserverFactory=_loadingStateObserverFactory;
@property(readonly, nonatomic) id <SVVideoSkipThresholdProviding> skipThresholdProvider; // @synthesize skipThresholdProvider=_skipThresholdProvider;
- (id)createThresholdObserverForVideo:(id)arg1;
- (id)initWithSkipThresholdProvider:(id)arg1 loadingStateObserverFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

