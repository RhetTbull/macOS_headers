//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSTableViewDelegate-Protocol.h"

@class NSTableColumn, NSTableView, VOOTableView;

@protocol VOOTableViewDelegate <NSTableViewDelegate>
- (void)tableView:(NSTableView *)arg1 willDisplayCell:(id)arg2 forTableColumn:(NSTableColumn *)arg3 row:(long long)arg4;

@optional
- (BOOL)tableViewCaptureDeleteKeyPress:(VOOTableView *)arg1;
- (BOOL)tableViewCaptureReturnKeyPress:(VOOTableView *)arg1;
@end

