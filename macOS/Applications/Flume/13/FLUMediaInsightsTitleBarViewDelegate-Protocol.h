//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FLUButton, FLUMediaInsightsTitleBarView, NSMenu;

@protocol FLUMediaInsightsTitleBarViewDelegate <NSObject>
- (void)flu_mediaInsightsTitleBarView:(FLUMediaInsightsTitleBarView *)arg1 didPressDownloadButton:(FLUButton *)arg2;
- (void)flu_mediaInsightsTitleBarView:(FLUMediaInsightsTitleBarView *)arg1 didPressBackButton:(FLUButton *)arg2;
- (NSMenu *)flu_mediaInsightsTitleBarView:(FLUMediaInsightsTitleBarView *)arg1 navigationHistoryMenu:(id)arg2;
@end

