//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSUUID;

@protocol MBAppConnectionProtocol <NSObject>
- (void)progressUpdate:(float)arg1 status:(NSDictionary *)arg2 forUUID:(NSUUID *)arg3;
- (void)exitBuddyApp:(void (^)(BOOL))arg1;
- (void)getBuddyWindowRepresentationFromApp:(void (^)(NSDictionary *))arg1;
@end

