//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSEvent;

@protocol KNMacPlaybackSlideNavigatorContainer <NSObject>
@property(readonly, nonatomic, getter=isSlideNavigatorVisible) BOOL slideNavigatorVisible;
@property(readonly, nonatomic) BOOL canShowSlideNavigator;
- (void)selectSlideAtHighlightedSlideNodeIndex:(id)arg1;
- (void)decrementHighlightedSlideNodeIndex:(id)arg1;
- (void)incrementHighlightedSlideNodeIndex:(id)arg1;
- (BOOL)shouldShowSlideNavigatorForEvent:(NSEvent *)arg1;
- (void)toggleSlideNavigatorVisible:(id)arg1;
@end

