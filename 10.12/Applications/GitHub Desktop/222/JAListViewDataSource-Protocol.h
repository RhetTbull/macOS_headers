//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JAListView, JAListViewItem;

@protocol JAListViewDataSource <NSObject>
- (JAListViewItem *)listView:(JAListView *)arg1 viewAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInListView:(JAListView *)arg1;
@end

