//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "iTermPopupWindowController.h"

@class NSTableColumn, NSTableView;

@interface DirectoriesPopupWindowController : iTermPopupWindowController
{
    NSTableView *_tableView;
    NSTableColumn *_mainColumn;
}

- (id)truncatedMainValueForEntry:(id)arg1;
- (id)shrunkToFitAttributedString:(id)arg1 inEntry:(id)arg2 baseAttributes:(id)arg3;
- (void)rowSelected:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)loadDirectoriesForHost:(id)arg1;
- (void)dealloc;
- (id)init;

@end

