//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Contacts/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol NSObject;

@protocol CNChangeNotificationReceiver <NSObject>
@property(nonatomic) BOOL forwardsSelfGeneratedDistributedSaveNotifications;
- (void)receiveNotificationName:(NSString *)arg1 fromSender:(id <NSObject>)arg2 saveIdentifier:(NSString *)arg3 userInfo:(NSDictionary *)arg4 isFromExternalProcess:(BOOL)arg5;
@end

