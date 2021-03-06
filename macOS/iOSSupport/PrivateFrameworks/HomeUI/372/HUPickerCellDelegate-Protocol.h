//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUPickerViewCell, NSAttributedString, NSString;

@protocol HUPickerCellDelegate <NSObject>
- (void)pickerViewCell:(HUPickerViewCell *)arg1 didSelectValueAtIndex:(long long)arg2;
- (long long)numberOfValuesForPickerViewCell:(HUPickerViewCell *)arg1;

@optional
- (NSAttributedString *)pickerViewCell:(HUPickerViewCell *)arg1 attributedTitleForValueAtIndex:(long long)arg2;
- (NSString *)pickerViewCell:(HUPickerViewCell *)arg1 titleForValueAtIndex:(long long)arg2;
- (BOOL)pickerViewCell:(HUPickerViewCell *)arg1 canSelectValueAtIndex:(long long)arg2;
@end

