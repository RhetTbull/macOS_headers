//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OCCancel, TSUTemporaryDirectory;

@interface OCMapper : NSObject
{
    OCCancel *mCancel;
    TSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;
- (id)temporaryDirectoryPath;
- (void)teardown;
- (void)setup;
- (void)quit;
- (BOOL)isCancelled;
- (void)cancel;
- (void)dealloc;
- (id)init;

@end

