//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableSet;

@interface SGHistorySharedData : NSObject
{
    NSMutableSet *confirmedEventHashes;
    NSMutableSet *rejectedEventHashes;
    NSMutableSet *confirmedReminderHashes;
    NSMutableSet *rejectedReminderHashes;
    NSMutableSet *contactHashes;
    NSMutableSet *confirmedEventFieldHashes;
    NSMutableSet *storageDetailHashes;
    NSMutableSet *dontUpdate;
    NSArray *resetInfo;
    NSMutableArray *observers;
}

- (void).cxx_destruct;

@end

