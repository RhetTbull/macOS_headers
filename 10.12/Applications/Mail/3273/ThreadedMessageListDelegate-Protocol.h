//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MessageListDelegate-Protocol.h"

@class MCMessage, MFMessageThread, NSNumber;
@protocol ThreadSupportingMessageList;

@protocol ThreadedMessageListDelegate <MessageListDelegate>
- (void)threadedMessageList:(id <ThreadSupportingMessageList>)arg1 messageWillChange:(MCMessage *)arg2;
- (void)threadedMessageList:(id <ThreadSupportingMessageList>)arg1 willRemoveThread:(MFMessageThread *)arg2 withConversationID:(NSNumber *)arg3;
- (void)threadedMessageList:(id <ThreadSupportingMessageList>)arg1 willAddThread:(MFMessageThread *)arg2 withConversationID:(NSNumber *)arg3;
- (void)threadedMessageList:(id <ThreadSupportingMessageList>)arg1 willRemoveMessage:(MCMessage *)arg2;
- (void)threadedMessageList:(id <ThreadSupportingMessageList>)arg1 willAddMessage:(MCMessage *)arg2 withConversationID:(NSNumber *)arg3;
- (MFMessageThread *)threadForMessage:(MCMessage *)arg1;
- (NSNumber *)conversationIDForMessage:(MCMessage *)arg1;
- (MFMessageThread *)threadForConversationID:(NSNumber *)arg1;
@end

