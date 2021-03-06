//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSString;

@interface MFSeenMessage : NSManagedObject
{
}

+ (BOOL)automaticallyNotifiesObserversOfIsOnServer;
+ (BOOL)automaticallyNotifiesObserversOfShouldDeleteFromServer;
+ (BOOL)automaticallyNotifiesObserversOfMessageID;
+ (BOOL)automaticallyNotifiesObserversOfDateSeen;
+ (BOOL)automaticallyNotifiesObserversOfAccount;
@property(nonatomic) BOOL isOnServer;
@property(nonatomic) BOOL shouldDeleteFromServer;
@property(copy, nonatomic) NSString *messageID;
@property(retain, nonatomic) NSDate *dateSeen;
- (void)setAccount:(id)arg1;

@end

