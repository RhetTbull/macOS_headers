//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mail/MFEWSMessageActionSyncOperation.h>

@class ECFlagChangeMessageAction;

@interface MFEWSFlagChangeSyncOperation : MFEWSMessageActionSyncOperation
{
}

- (BOOL)_batchedSetFlagsForItems:(id)arg1 inFolder:(id)arg2 messageType:(BOOL)arg3 flagChange:(id)arg4 error:(id *)arg5;
- (void)main;
- (id)initWithMessageAction:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) ECFlagChangeMessageAction *messageAction; // @dynamic messageAction;

@end

