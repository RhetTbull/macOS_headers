//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KNMacPlaybackHelpWindowController, NSScreen;

@protocol KNMacPlaybackHelpWindowControllerDelegate <NSObject>

@optional
- (void)helpWindowControllerHelpWindowWillClose:(KNMacPlaybackHelpWindowController *)arg1;
- (NSScreen *)helpWindowController:(KNMacPlaybackHelpWindowController *)arg1 requiredScreenForProposedScreen:(NSScreen *)arg2;
@end

