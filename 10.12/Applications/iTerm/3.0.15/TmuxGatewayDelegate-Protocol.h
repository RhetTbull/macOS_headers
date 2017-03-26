//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSNumber, NSString, NSWindowController, TmuxController;
@protocol iTermWindowController;

@protocol TmuxGatewayDelegate <NSObject>
- (void)tmuxDidOpenInitialWindows;
- (void)tmuxInitialCommandDidFailWithError:(NSString *)arg1;
- (void)tmuxInitialCommandDidCompleteSuccessfully;
- (NSWindowController<iTermWindowController> *)tmuxGatewayWindow;
- (void)tmuxPrintLine:(NSString *)arg1;
- (void)tmuxSetSecureLogging:(BOOL)arg1;
- (long long)tmuxNumHistoryLinesInBookmark;
- (struct CGSize)tmuxBookmarkSize;
- (void)tmuxSession:(int)arg1 renamed:(NSString *)arg2;
- (void)tmuxWindowsDidChange;
- (void)tmuxSessionsChanged;
- (void)tmuxSessionChanged:(NSString *)arg1 sessionId:(int)arg2;
- (void)tmuxReadTask:(NSData *)arg1;
- (void)tmuxWriteString:(NSString *)arg1;
- (void)tmuxHostDisconnected;
- (void)tmuxWindowRenamedWithId:(int)arg1 to:(NSString *)arg2;
- (void)tmuxWindowClosedWithId:(int)arg1;
- (void)tmuxWindowAddedWithId:(int)arg1;
- (void)tmuxUpdateLayoutForWindow:(int)arg1 layout:(NSString *)arg2 zoomed:(NSNumber *)arg3;
- (TmuxController *)tmuxController;
@end

