//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, PVTextSearchQuery;

@protocol PVTextSearchQueryDelegate <NSObject>

@optional
- (void)textSearchQueryDidEndSearching:(PVTextSearchQuery *)arg1;
- (void)textSearchQuery:(PVTextSearchQuery *)arg1 foundResults:(NSArray *)arg2 isDone:(BOOL)arg3;
- (void)textSearchQueryWillBeginSearching:(PVTextSearchQuery *)arg1;
@end

