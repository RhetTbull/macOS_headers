//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SocialUI/SODebugMenuItem.h>

@class NSMutableArray;

@interface SODebugMenu : SODebugMenuItem
{
    NSMutableArray *_menuItems;
}

- (void).cxx_destruct;
- (void)addMenuItemWithWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 validate:(SEL)arg4 keyEquivalent:(id)arg5;
- (BOOL)validateMenuItem:(id)arg1;
- (void)removeAllItems;
- (void)addSeperator;
- (void)handleMenuAction:(id)arg1;
- (void)addMenuItem:(id)arg1;
- (id)initWithTitle:(id)arg1;

@end

