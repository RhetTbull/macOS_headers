//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalEventOccurrence.h>

#import "OccurrenceLike-Protocol.h"

@class NSString;

@interface CalEventOccurrence (CalTranslationProtocol) <OccurrenceLike>
- (id)eventOccurrenceID;
- (id)legacyOccurrenceID;
- (id)coreEventOccurrence;
- (id)calEventOccurrence;
- (id)ekEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

