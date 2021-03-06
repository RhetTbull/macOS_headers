//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol EDUbiquitousConversationManagerDelegate <NSObject>
- (void)clearConversationFlagsAndSyncKeyForConversationIDs:(NSArray *)arg1;
- (void)pruneConversationTables:(double)arg1;
- (void)remoteMessageIDsAdded:(NSArray *)arg1 forConversationID:(long long)arg2;
- (NSArray *)messageIDsForConversationID:(long long)arg1 limit:(unsigned long long)arg2;
- (long long)conversationIDForMessageIDs:(NSArray *)arg1;
- (unsigned long long)persistenceConversationFlagsForConversationID:(long long)arg1;
- (void)setPersistenceConversationFlags:(unsigned long long)arg1 syncKey:(NSString *)arg2 forConversationID:(long long)arg3 reason:(long long)arg4;
- (NSDictionary *)syncedConversationIDsBySyncKey;
@end

