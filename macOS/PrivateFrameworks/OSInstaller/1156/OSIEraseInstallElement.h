//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OSInstaller/OSIInstallQueueElement.h>

@interface OSIEraseInstallElement : OSIInstallQueueElement
{
}

+ (id)volumesToRemove:(id)arg1 exemptingTarget:(id)arg2;
+ (id)diskForDiskUUID:(id)arg1 fromDisks:(id)arg2;
- (double)estimatedTimeToComplete;
- (id)operationName;
- (BOOL)runReturningError:(id *)arg1;

@end

