//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKRouteLineObserverProtocol.h"

@class VKRouteLine;

__attribute__((visibility("hidden")))
@interface VKRouteLineObserver : NSObject <VKRouteLineObserverProtocol>
{
    struct LabelTransitSupport *_transitSupport;
    VKRouteLine *_routeLine;
}

- (void)routeLineDidUpdateSections:(id)arg1;
- (void)dealloc;
- (id)initWithTransitSupport:(struct LabelTransitSupport *)arg1 andRouteLine:(id)arg2;

@end

