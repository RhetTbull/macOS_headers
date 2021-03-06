//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MRSViewController.h"

#import "MRSFolderPrivacyNotifyViewControllerDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class MRSAutoUpdatingPackageFinder, MRSFolderPrivacyNotifyViewController, MRSStatusOverlayViewController, NSArray, NSMutableArray, NSString, NSTableView;

@interface MRSActivePackagePickerViewController : MRSViewController <NSTableViewDataSource, NSTableViewDelegate, MRSFolderPrivacyNotifyViewControllerDelegate>
{
    NSArray *_packageInfos;
    NSMutableArray *_recents;
    MRSStatusOverlayViewController *_overlayViewController;
    MRSFolderPrivacyNotifyViewController *_folderPrivacyNotifyViewController;
    id <MRSActivePackagePickerViewControllerDelegate> _delegate;
    MRSAutoUpdatingPackageFinder *_packageFinder;
    long long _updateCount;
    NSTableView *_tableView;
}

@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property long long updateCount; // @synthesize updateCount=_updateCount;
@property(readonly) MRSAutoUpdatingPackageFinder *packageFinder; // @synthesize packageFinder=_packageFinder;
@property __weak id <MRSActivePackagePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)folderPrivacyNotifyViewControllerIgnored:(id)arg1;
- (void)folderPrivacyNotifyViewControllerRequestedFix:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)openPackage:(id)arg1;
- (void)setProgressActive:(BOOL)arg1 forPackageAtURL:(id)arg2;
- (void)_updateUIWithCurrentPackageInfos;
- (id)_orderedPackageInfosLimitedToCount:(unsigned long long)arg1;
- (void)makePackagePickerFirstResponder;
- (void)viewDidLoad;
- (id)initForRecentsMode:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

