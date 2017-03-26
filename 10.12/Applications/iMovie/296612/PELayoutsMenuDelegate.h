//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSMenuDelegate-Protocol.h"

@class NSMenu, NSMenuItem, NSString;

@interface PELayoutsMenuDelegate : NSObject <NSMenuDelegate>
{
    NSMenu *windowLayoutMenu;
    NSMenuItem *windowLayoutsSeparator;
}

@property(retain, nonatomic) NSMenuItem *windowLayoutsSeparator; // @synthesize windowLayoutsSeparator;
@property(retain, nonatomic) NSMenu *windowLayoutMenu; // @synthesize windowLayoutMenu;
- (void)populateWindowLayoutMenu:(id)arg1 withSeparator:(id)arg2;
- (void)partialPopulateWindowLayoutMenu:(id)arg1 withDirectory:(id)arg2 keyboardShortcutIndex:(long long *)arg3;
- (id)nextWindowLayoutKeyEquivalent:(long long *)arg1;
- (void)stripMenuItemsAfter:(id)arg1 forMenu:(id)arg2;
- (void)chooseWindowLayout:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

