//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACHelperClient : NSObject
{
}

+ (id)executeWithArgs:(id)arg1 error:(id *)arg2;
+ (id)cleanupOldHelpers;
+ (BOOL)cleanupNeeded;
+ (BOOL)isOldSmartDeleteHelperRunning;
+ (void)restoreItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (id)recycleURLsWithPrivileges:(id)arg1 error:(id *)arg2;
+ (id)genericHelperError;
+ (id)helperPath;

@end

