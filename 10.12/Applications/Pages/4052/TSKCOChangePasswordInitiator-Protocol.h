//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol TSKCOChangePasswordInitiator <NSObject>
- (void)didChangePassword:(unsigned long long)arg1 revisionBeforeChange:(NSString *)arg2 hint:(NSString *)arg3 trialCount:(long long)arg4 error:(NSError *)arg5;
@end

