//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TSURemotePropertyList : NSObject
{
    NSURL *_remoteURL;
    NSURL *_localURL;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_propertyList;
    NSObject<OS_dispatch_queue> *_checkQueue;
    NSObject<OS_dispatch_source> *_updateTimer;
    BOOL _didUpdateAtLeastOnce;
}

- (void).cxx_destruct;
- (void)processPropertyList:(id)arg1;
- (id)deserializePropertyListData:(id)arg1 error:(out id *)arg2;
- (void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)URLRequest;
- (double)timeIntervalUntilNextUpdate;
- (id)validateUserDefaultsDownloadURL:(id)arg1;
- (void)checkForUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)updateIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithRemoteURL:(id)arg1 localURL:(id)arg2;
- (id)init;

@end

