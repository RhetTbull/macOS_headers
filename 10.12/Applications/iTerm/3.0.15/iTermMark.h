//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "iTermMark-Protocol.h"

@class IntervalTreeEntry, NSString;

@interface iTermMark : NSObject <iTermMark>
{
    IntervalTreeEntry *entry;
}

@property(nonatomic) IntervalTreeEntry *entry; // @synthesize entry;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, copy) NSString *description;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

