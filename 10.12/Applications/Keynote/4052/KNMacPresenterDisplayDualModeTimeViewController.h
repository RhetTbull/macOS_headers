//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class KNPresenterDisplayClockController, KNPresenterDisplayTimerController, NSTabViewController;

@interface KNMacPresenterDisplayDualModeTimeViewController : NSViewController
{
    NSTabViewController *_tabViewController;
    KNPresenterDisplayClockController *_clockController;
    KNPresenterDisplayTimerController *_timerController;
    id _displayedController;
}

- (void).cxx_destruct;
- (void)p_setDisplayedController:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithClockController:(id)arg1 timerController:(id)arg2;

@end

