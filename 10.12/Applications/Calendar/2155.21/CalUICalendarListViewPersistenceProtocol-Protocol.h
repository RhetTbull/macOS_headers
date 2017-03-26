//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class EKCalendar, EKEventStore, EKSource, NSArray, NSString;

@protocol CalUICalendarListViewPersistenceProtocol
- (void)persistCellState:(long long)arg1 withIdentifier:(NSString *)arg2 delegateIdentifier:(NSString *)arg3;
- (BOOL)checkedStateForCalendarWithUID:(NSString *)arg1 delegateID:(NSString *)arg2;
- (void)updateCalendarWithIdentifier:(NSString *)arg1 enabledState:(BOOL)arg2;
- (long long)sortOrderForSourceWithIdentifier:(NSString *)arg1;
- (void)persistCalendarSortOrderForCalendarItems:(NSArray *)arg1;
- (void)persistSourceSortOrderForCalendarItems:(NSArray *)arg1;
- (BOOL)isExpandedListItemWithIdentifier:(NSString *)arg1 delegateID:(NSString *)arg2;
- (BOOL)shouldShowSuggestedEventsCalendar;
- (NSString *)selectedCalendarIdentifier;
- (void)persistSelectedCalendarIdentifier:(NSString *)arg1;
- (void)saveChangesToCalendar:(EKCalendar *)arg1;
- (void)saveChangesToSource:(EKSource *)arg1;
- (EKEventStore *)eventStore;
@end

