//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSearchField.h>

@class NSButton, NSMutableString, NSProgressIndicator;

@interface FTSearchField : NSSearchField
{
    BOOL _transitionIsAnimating;
    NSButton *_peoplePickerButton;
    NSMutableString *_delayedSearchString;
    NSProgressIndicator *_spinner;
}

@property(retain, nonatomic) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) BOOL transitionIsAnimating; // @synthesize transitionIsAnimating=_transitionIsAnimating;
@property(retain, nonatomic) NSMutableString *delayedSearchString; // @synthesize delayedSearchString=_delayedSearchString;
@property(retain, nonatomic) NSButton *peoplePickerButton; // @synthesize peoplePickerButton=_peoplePickerButton;
- (void).cxx_destruct;
- (void)__searchTransitionDidEnd;
- (void)_transitionForFirstResponder:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showSpinner:(BOOL)arg1;
- (void)clearSearchField;
- (void)appendTextAndAdjustInsertionPoint:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)awakeFromNib;

@end

