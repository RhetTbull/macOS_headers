//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CalUICalendarListDataSourceEK, NSString;
@protocol CalUICalendarListViewNode;

@protocol CalUICalendarListDataSourceDelegateEK <NSObject>
- (void)listControllerCalendarListShouldUpdateBadgeCounts:(CalUICalendarListDataSourceEK *)arg1;
- (void)listControllerCalendarListShouldSelectFirstNonGroupNode:(CalUICalendarListDataSourceEK *)arg1;
- (void)listController:(CalUICalendarListDataSourceEK *)arg1 calendarListShouldSelectNode:(id <CalUICalendarListViewNode>)arg2;
- (NSString *)delegateAccountUIDForListController:(CalUICalendarListDataSourceEK *)arg1;
@end

