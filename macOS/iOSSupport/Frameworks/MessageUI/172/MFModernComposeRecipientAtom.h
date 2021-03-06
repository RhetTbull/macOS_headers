//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/MFModernAtomView.h>

@class MFComposeRecipient, UITextInputTraits;
@protocol MFComposeRecipientAtomDelegate;

@interface MFModernComposeRecipientAtom : MFModernAtomView
{
    MFComposeRecipient *_recipient;
    UITextInputTraits *_traits;
    unsigned int _wasSelectedWhenTouchesBegan:1;
    unsigned int _touchesWereCancelled:1;
    id <MFComposeRecipientAtomDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MFComposeRecipientAtomDelegate> delegate; // @synthesize delegate=_delegate;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (id)keyCommands;
- (void)handleTouchAndHold;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) MFComposeRecipient *recipient;
- (id)initWithFrame:(struct CGRect)arg1 recipient:(id)arg2 presentationOptions:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 recipient:(id)arg2;

@end

