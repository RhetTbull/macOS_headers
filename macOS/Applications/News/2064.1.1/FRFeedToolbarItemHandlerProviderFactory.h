//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCSubscriptionController, UINavigationController;

@interface FRFeedToolbarItemHandlerProviderFactory : NSObject
{
    FCSubscriptionController *_subscriptionController;
    UINavigationController *_navigationController;
}

@property(readonly, nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) FCSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
- (void).cxx_destruct;
- (id)createToolbarItemHandlerProviderForFeed:(id)arg1;
- (id)initWithContext:(id)arg1 navigationController:(id)arg2;

@end

