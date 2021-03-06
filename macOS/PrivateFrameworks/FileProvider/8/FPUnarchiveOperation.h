//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

#import "FPArchiveServiceUnarchivingDelegate.h"

@class FPItem, FPItemID, NSFileCoordinator, NSString, NSURL;

@interface FPUnarchiveOperation : FPActionOperation <FPArchiveServiceUnarchivingDelegate>
{
    FPItem *_item;
    NSURL *_itemURL;
    FPItemID *_placeholderID;
    FPItem *_destinationFolder;
    BOOL _hasStitchedUnarchivedItems;
    NSFileCoordinator *_coordinator;
    id _coordinationAccessToken;
    CDUnknownBlockType _passphraseRequestBlock;
    CDUnknownBlockType _unarchiveCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType unarchiveCompletionBlock; // @synthesize unarchiveCompletionBlock=_unarchiveCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType passphraseRequestBlock; // @synthesize passphraseRequestBlock=_passphraseRequestBlock;
- (void).cxx_destruct;
- (void)service:(id)arg1 didReceiveArchivedItemsDescriptors:(id)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)__completeWithItem:(id)arg1 service:(id)arg2 resultURL:(id)arg3 error:(id)arg4;
- (void)_completeWithItemURL:(id)arg1 item:(id)arg2 service:(id)arg3 resultURL:(id)arg4 error:(id)arg5;
- (BOOL)_handleArchiveDecryptionError:(id)arg1 item:(id)arg2 service:(id)arg3 itemURL:(id)arg4;
- (void)actionMain;
- (BOOL)getHasUnarchivedMultipleItems:(char *)arg1 firstUnarchivedItemURL:(id *)arg2 forArchiveFolderURL:(id)arg3 error:(id *)arg4;
- (id)_newParentProgressWithCompletedUnitCount:(long long)arg1;
- (id)initWithItem:(id)arg1 destinationFolder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

