//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC9Reminders20TTRMScriptableObject.h"

@class NSArray, NSScriptObjectSpecifier, REMAccount;

@interface TTRMScriptableAccount : _TtC9Reminders20TTRMScriptableObject
{
    // Error parsing type: , name: account
}

- (void).cxx_destruct;
- (id)makeObjectForValidatedKey:(id)arg1 with:(id)arg2 error:(id *)arg3;
- (void)removeFromListsAtIndex:(long long)arg1;
- (void)insertInLists:(id)arg1 atIndex:(long long)arg2;
- (BOOL)setWithValue:(id)arg1 forValidatedKey:(id)arg2 using:(id)arg3 error:(id *)arg4;
@property(nonatomic, readonly) NSArray *allItemPropertyKeys;
@property(nonatomic, readonly) NSScriptObjectSpecifier *objectSpecifier;
@property(nonatomic, readonly) REMAccount *account; // @synthesize account;

@end

