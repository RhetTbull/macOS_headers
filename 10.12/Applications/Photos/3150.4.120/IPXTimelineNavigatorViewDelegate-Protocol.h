//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXTimelineNavigatorView;

@protocol IPXTimelineNavigatorViewDelegate <NSObject>

@optional
- (void)timelineNavigatorView:(IPXTimelineNavigatorView *)arg1 itemDoubleClickedInSection:(unsigned long long)arg2 index:(unsigned long long)arg3 percentWithin:(double)arg4;
- (void)timelineNavigatorView:(IPXTimelineNavigatorView *)arg1 longClickEndedInSection:(unsigned long long)arg2 index:(unsigned long long)arg3 percentWithin:(double)arg4;
- (void)timelineNavigatorView:(IPXTimelineNavigatorView *)arg1 longClickStartedInSection:(unsigned long long)arg2 index:(unsigned long long)arg3 percentWithin:(double)arg4;
- (void)timelineNavigatorView:(IPXTimelineNavigatorView *)arg1 itemSelectedInSection:(unsigned long long)arg2 index:(unsigned long long)arg3 percentWithin:(double)arg4;
@end

