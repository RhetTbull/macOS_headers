//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTabView, NSView;

@interface ModuleController : NSObject
{
    NSView *m_view;
    NSTabView *m_tabView;
}

- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (struct CSong *)song;
- (void)myChangeFont:(id)arg1;
- (void)willDisappear;
- (void)willAppear;
- (void)handleUM_GLOBALPREFS:(id)arg1;
- (void)updateUserLevel;
- (void)updateUserLevel:(id)arg1;
- (id)tabView;
- (id)view;
- (void)dealloc;
- (void)updateUI;

@end

