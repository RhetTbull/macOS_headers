//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6FindMy24FMPlatteredTableViewCell.h"

#import "UITextFieldDelegate-Protocol.h"

@interface _TtC6FindMy26FMPhoneNumberTableViewCell : _TtC6FindMy24FMPlatteredTableViewCell <UITextFieldDelegate>
{
    // Error parsing type: , name: textField
    // Error parsing type: , name: textView
    // Error parsing type: , name: placeHolderLabel
    // Error parsing type: , name: delegate
    // Error parsing type: , name: textViewDelegate
    // Error parsing type: , name: textFieldIsEnabled
    // Error parsing type: , name: textViewIsEnabled
    // Error parsing type: , name: initialPhoneNumber
    // Error parsing type: , name: placeHolderText
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (void)textFieldDidChangeWithSender:(id)arg1;
- (void)layoutSubviews;

@end

