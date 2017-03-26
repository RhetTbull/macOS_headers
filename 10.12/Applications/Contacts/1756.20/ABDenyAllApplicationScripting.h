//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABApplicationScripting-Protocol.h"

@class NSString;

@interface ABDenyAllApplicationScripting : NSObject <ABApplicationScripting>
{
}

- (void)setErrorOnCurrentCommand;
- (void)setSelectedRecords:(id)arg1;
- (id)selectedRecords;
- (void)setSelectedGroups:(id)arg1;
- (id)selectedGroups;
- (void)handleSaveScriptCommand:(id)arg1;
- (id)valueInGroupsWithUniqueId:(id)arg1;
- (id)valueInPeopleWithUniqueId:(id)arg1;
- (void)insertInPeople:(id)arg1;
- (void)insertInGroups:(id)arg1;
- (void)insertInPeople:(id)arg1 atIndex:(long long)arg2;
- (void)insertInGroups:(id)arg1 atIndex:(long long)arg2;
- (void)removeFromPeopleAtIndex:(long long)arg1;
- (void)removeFromGroupsAtIndex:(long long)arg1;
- (id)valueInPeopleWithUniqueID:(id)arg1;
- (id)valueInGroupsWithUniqueID:(id)arg1;
- (id)defaultCountryCode;
- (id)groups;
- (id)people;
- (void)setMeCard:(id)arg1;
- (id)meCard;
- (BOOL)hasUnsavedChanges;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

