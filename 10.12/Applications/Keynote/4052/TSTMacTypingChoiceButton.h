//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "TSTTypingChoiceButton-Protocol.h"

@class NSString, TSTTypingChoice;

@interface TSTMacTypingChoiceButton : NSView <TSTTypingChoiceButton>
{
    TSTTypingChoice *mChoice;
    NSString *mText;
    NSString *mTextToRender;
    double mFitWidth;
    BOOL mSelected;
    BOOL mButtonToRightSelected;
    BOOL mRightmostButton;
}

@property(readonly, nonatomic) double fitWidth; // @synthesize fitWidth=mFitWidth;
@property(readonly, nonatomic) __weak TSTTypingChoice *choice; // @synthesize choice=mChoice;
- (BOOL)p_forVerticalLayout;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (void)targetChanged;
- (void)sizeToFit;
- (void)dismiss;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithChoice:(id)arg1;
@property(nonatomic, getter=isRightmostButton) BOOL rightmostButton;
@property(nonatomic, getter=isButtonToRightSelected) BOOL buttonToRightSelected;
@property(nonatomic, getter=isSelected) BOOL selected;
@property(copy, nonatomic) NSString *text;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

