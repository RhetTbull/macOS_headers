//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SidecarCore/SidecarTransfer.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SidecarTransferReceiver : SidecarTransfer
{
    NSMutableDictionary *_groups;
    NSMutableArray *_orderedGroups;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)_resumeMessage:(id)arg1;
- (void)handleMessage:(id)arg1;
- (id)initWithSession:(id)arg1 requestID:(long long)arg2;

@end

