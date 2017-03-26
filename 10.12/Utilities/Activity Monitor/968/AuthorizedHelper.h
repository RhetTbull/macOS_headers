//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface AuthorizedHelper : NSObject
{
    struct AuthorizationOpaqueRef *_authorization;
    NSXPCConnection *_connection;
}

+ (id)sharedAuthorizedHelper;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelJobWithTicket:(unsigned long long)arg1;
- (unsigned long long)sysdiagnose:(id)arg1 result:(CDUnknownBlockType)arg2;
- (unsigned long long)mddiagnose:(CDUnknownBlockType)arg1;
- (void)sendSignal:(int)arg1 toPID:(int)arg2;
- (unsigned long long)launchSpindumpForName:(id)arg1 seconds:(int)arg2 callback:(CDUnknownBlockType)arg3;
- (unsigned long long)launchSamplerForPID:(int)arg1 seconds:(int)arg2 callback:(CDUnknownBlockType)arg3;
- (id)init;
@property(readonly) NSXPCConnection *connection; // @dynamic connection;
- (unsigned long long)_issueNewJobTicket;

@end

