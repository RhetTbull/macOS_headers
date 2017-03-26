//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSTextViewDelegate-Protocol.h"

@class KNMacOutlineTextView, NSEvent, NSTouchBar;

@protocol KNMacOutlineTextViewDelegate <NSTextViewDelegate>
- (BOOL)textViewTextIsEditable:(KNMacOutlineTextView *)arg1;

@optional
- (NSTouchBar *)textViewTextFieldTouchBar:(KNMacOutlineTextView *)arg1;
- (void)textView:(KNMacOutlineTextView *)arg1 didDragSelectionOutOfBoundsWithEvent:(NSEvent *)arg2;
- (void)textView:(KNMacOutlineTextView *)arg1 didReceiveOutdentParagraphLevelActionFromSender:(id)arg2;
- (void)textView:(KNMacOutlineTextView *)arg1 didReceiveIndentParagraphLevelActionFromSender:(id)arg2;
- (void)textView:(KNMacOutlineTextView *)arg1 didReceiveLowercaseWordActionFromSender:(id)arg2;
- (void)textView:(KNMacOutlineTextView *)arg1 didReceiveUppercaseWordActionFromSender:(id)arg2;
- (void)textView:(KNMacOutlineTextView *)arg1 didReceiveSelectParentActionFromSender:(id)arg2;
- (void)textView:(KNMacOutlineTextView *)arg1 didReceiveCutActionFromSender:(id)arg2;
- (void)textView:(KNMacOutlineTextView *)arg1 didReceiveCopyActionFromSender:(id)arg2;
- (void)textView:(KNMacOutlineTextView *)arg1 didReceivePasteActionFromSender:(id)arg2;
@end

