//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FLUButton, FLUMediaProfileTitleBarView, NSMenu;

@protocol FLUMediaProfileTitleBarViewDelegate <NSObject>
- (void)flu_profileTitleBarView:(FLUMediaProfileTitleBarView *)arg1 didPressConfirmButton:(FLUButton *)arg2;
- (void)flu_profileTitleBarView:(FLUMediaProfileTitleBarView *)arg1 didPressCancelButton:(FLUButton *)arg2;
- (void)flu_profileTitleBarView:(FLUMediaProfileTitleBarView *)arg1 didPressSettingsButton:(FLUButton *)arg2;
- (void)flu_profileTitleBarView:(FLUMediaProfileTitleBarView *)arg1 didPressSavedButton:(FLUButton *)arg2;
- (void)flu_profileTitleBarView:(FLUMediaProfileTitleBarView *)arg1 didPressArchivedButton:(FLUButton *)arg2;
- (void)flu_profileTitleBarView:(FLUMediaProfileTitleBarView *)arg1 didPressInsightsButton:(FLUButton *)arg2;
- (void)flu_profileTitleBarView:(FLUMediaProfileTitleBarView *)arg1 didPressActionsButton:(FLUButton *)arg2;
- (void)flu_profileTitleBarView:(FLUMediaProfileTitleBarView *)arg1 didPressFavoritesButton:(FLUButton *)arg2;
- (void)flu_profileTitleBarView:(FLUMediaProfileTitleBarView *)arg1 didPressAddUsersButton:(FLUButton *)arg2;
- (void)flu_profileTitleBarView:(FLUMediaProfileTitleBarView *)arg1 didPressSaveButton:(FLUButton *)arg2;
- (void)flu_profileTitleBarView:(FLUMediaProfileTitleBarView *)arg1 didPressShareButton:(FLUButton *)arg2;
- (void)flu_profileTitleBarView:(FLUMediaProfileTitleBarView *)arg1 didPressBackButton:(FLUButton *)arg2;
- (NSMenu *)flu_profileTitleBarView:(FLUMediaProfileTitleBarView *)arg1 navigationHistoryMenu:(id)arg2;
@end

