//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

#import "MapsTheming-Protocol.h"

@class NSString, UITextRange;
@protocol RouteSearchTextFieldDelegate;

__attribute__((visibility("hidden")))
@interface RouteSearchTextField : UITextField <MapsTheming>
{
    BOOL _handlingTouch;
    BOOL _didBecomeFirstResponderWhileHandlingTouch;
    BOOL _hasSelectedTextRangeToSetOnResuming;
    UITextRange *_selectedTextRangeToSetOnResuming;
    UITextRange *_selectedTextRangeWhilePaused;
    BOOL _behavesAsAtom;
    BOOL _pauseSelectionUpdates;
    CDUnknownBlockType _textColorProvider;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isPausingSelectionUpdates) BOOL pauseSelectionUpdates; // @synthesize pauseSelectionUpdates=_pauseSelectionUpdates;
@property(copy, nonatomic) CDUnknownBlockType textColorProvider; // @synthesize textColorProvider=_textColorProvider;
@property(nonatomic) BOOL behavesAsAtom; // @synthesize behavesAsAtom=_behavesAsAtom;
- (void)_updateTextColors;
- (void)updateTheme;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)setSelectedTextRange:(id)arg1;
@property(readonly, nonatomic) UITextRange *selectedTextRangeFrozenIfPaused;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (int)textSelectionBehavior;
- (int)textLoupeVisibility;
- (id)selectionHighlightColor;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)_hoverGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <RouteSearchTextFieldDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

