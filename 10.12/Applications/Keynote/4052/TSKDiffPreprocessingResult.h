//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TSKTransformationController;

@interface TSKDiffPreprocessingResult : NSObject
{
    NSArray *_acknowledgedLocalCommandIdentifiers;
    NSArray *_unacknowledgedLocalCommandQueueItems;
    TSKTransformationController *_localCommandTransformationController;
}

@property(readonly, nonatomic) TSKTransformationController *localCommandTransformationController; // @synthesize localCommandTransformationController=_localCommandTransformationController;
@property(readonly, nonatomic) NSArray *unacknowledgedLocalCommandQueueItems; // @synthesize unacknowledgedLocalCommandQueueItems=_unacknowledgedLocalCommandQueueItems;
@property(readonly, nonatomic) NSArray *acknowledgedLocalCommandIdentifiers; // @synthesize acknowledgedLocalCommandIdentifiers=_acknowledgedLocalCommandIdentifiers;
- (void)dealloc;
- (id)init;
- (id)initWithAcknowledgedLocalCommandIdentifiers:(id)arg1 unacknowledgedLocalCommandQueueItems:(id)arg2 localCommandTransformationController:(id)arg3;

@end

