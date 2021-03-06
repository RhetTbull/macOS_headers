//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class SetupAssistant;

@interface SetupAssistantSubView : NSView
{
    SetupAssistant *mAssistant;
    SetupAssistantSubView *mNextSubView;
    SetupAssistantSubView *mNextSubViewAlt1;
    SetupAssistantSubView *mNextSubViewAlt2;
    SetupAssistantSubView *mNextSubViewAlt3;
    SetupAssistantSubView *mNextSubViewAlt4;
    SetupAssistantSubView *mNextSubViewAlt5;
    SetupAssistantSubView *mPreviousSubView;
    SetupAssistantSubView *mPreviousSubViewAlt1;
    SetupAssistantSubView *mPreviousSubViewAlt2;
    SetupAssistantSubView *mPreviousSubViewAlt3;
    SetupAssistantSubView *mPreviousSubViewAlt4;
    SetupAssistantSubView *mPreviousSubViewAlt5;
}

- (void).cxx_destruct;
- (void)systemHasPoweredOn;
- (void)systemWillSleep;
- (void)setArgument:(const char *)arg1;
- (void)mouseDownOccurred:(id)arg1;
- (void)keyDownOccurred:(id)arg1;
- (void)setSetupAssistant:(id)arg1;
- (id)getSetupAssistant;
- (void)subViewAdded:(id)arg1;
- (BOOL)subViewWillBeAddedBackward:(id)arg1;
- (BOOL)subViewWillBeAddedForward:(id)arg1;
- (BOOL)subViewWillBeAdded:(id)arg1;
- (void)subViewRemoved:(id)arg1;
- (BOOL)canRemoveSubView:(id)arg1 direction:(int)arg2;
- (BOOL)goBackButtonEnabled;
- (BOOL)continueButtonEnabled;
- (id)getPreviousSubView;
- (id)getNextSubView;
- (id)getName;

@end

