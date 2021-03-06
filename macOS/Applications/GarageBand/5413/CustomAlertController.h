//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SmallDialogController.h"

#import "NSWindowDelegate-Protocol.h"

@class NSString, NSWindow;

@interface CustomAlertController : SmallDialogController <NSWindowDelegate>
{
    BOOL _epilogueDone;
    struct IdleBlocker *m_blocker;
    NSWindow *m_prevKeyWindow;
    int _choice;
}

+ (int)alertWithWindowTitle:(id)arg1;
+ (int)alert;
@property(nonatomic) int choice; // @synthesize choice=_choice;
- (void)keyDown:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)click_OK:(id)arg1;
- (void)click_Cancel:(id)arg1;
- (void)close;
- (void)_willClose;
- (void)showWindow:(id)arg1;
- (void)epilogue;
- (int)alertWithWindowTitle:(id)arg1;
- (int)alert;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

