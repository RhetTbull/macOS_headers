//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface LoggingContextSet : NSObject
{
    int lock;
    NSMutableSet *set;
}

- (void).cxx_destruct;
- (BOOL)isInSet:(int)arg1;
- (id)currentSet;
- (void)removeFromSet:(int)arg1;
- (void)addToSet:(int)arg1;
- (id)init;

@end

