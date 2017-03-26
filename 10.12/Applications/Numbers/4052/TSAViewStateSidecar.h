//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, TSUWeakReference;
@protocol TSAViewStateSidecarDelegate;

@interface TSAViewStateSidecar : NSObject
{
    TSUWeakReference *_delegateReference;
}

- (void)writeViewStateObject:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)writeViewStateData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSData *viewStateData;
- (void)removeViewStateData;
@property(readonly, nonatomic) NSString *viewStatePath;
- (id)viewStateDirectoryPath;
@property(nonatomic) __weak id <TSAViewStateSidecarDelegate> delegate;
- (void)dealloc;

@end

