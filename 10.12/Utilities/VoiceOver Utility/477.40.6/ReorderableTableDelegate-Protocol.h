//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "VOOTableViewDelegate-Protocol.h"

@protocol ReorderableTableDelegate <VOOTableViewDelegate>
- (void)cancelTableItemChange:(id)arg1;
- (BOOL)acceptTableItemChange:(id)arg1;
- (void)didChangeTableItems:(id)arg1;

@optional
- (void)didHideReorderableTable:(id)arg1;
@end

