//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXAlbumAndFolderSummaryController, NSString;

@protocol IPXAlbumAndFolderSummaryControllerDelegate <NSObject>
- (void)controller:(IPXAlbumAndFolderSummaryController *)arg1 updatedTitle:(NSString *)arg2;

@optional
- (void)controller:(IPXAlbumAndFolderSummaryController *)arg1 updatedItemCount:(NSString *)arg2;
- (void)controller:(IPXAlbumAndFolderSummaryController *)arg1 updatedDateRange:(NSString *)arg2;
@end

