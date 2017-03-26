//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXTimelineNavigatorView, NSString, NSView;

@protocol IPXTimelineNavigatorViewDataSource <NSObject>
- (struct CGRect)timelineNavigatorView:(IPXTimelineNavigatorView *)arg1 rectForItemInSection:(unsigned long long)arg2 index:(unsigned long long)arg3;
- (unsigned long long)timelineNavigatorView:(IPXTimelineNavigatorView *)arg1 numberOfItemsInSection:(unsigned long long)arg2;
- (unsigned long long)timelineNavigatorViewNumberOfSections:(IPXTimelineNavigatorView *)arg1;

@optional
- (NSView *)timelineNavigatorView:(IPXTimelineNavigatorView *)arg1 viewForSection:(unsigned long long)arg2;
- (NSString *)timelineNavigatorView:(IPXTimelineNavigatorView *)arg1 titleForSection:(unsigned long long)arg2;
@end

