//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TSKCollaborationCommandHistory;

@protocol TSKCollaborationCommandHistoryDelegate <NSObject>
- (void)collaborationCommandHistoryDidChange:(TSKCollaborationCommandHistory *)arg1 redoCount:(unsigned long long)arg2 redoActionString:(NSString *)arg3;
- (void)collaborationCommandHistoryDidChange:(TSKCollaborationCommandHistory *)arg1 undoCount:(unsigned long long)arg2 undoActionString:(NSString *)arg3;
@end

