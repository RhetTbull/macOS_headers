//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRToolbarManager, NSString;

@protocol FRToolbarManagerDelegate <NSObject>

@optional
- (void)toolbarManagerReloadedPage:(FRToolbarManager *)arg1;
- (void)toolbarManagerNavigatedForward:(FRToolbarManager *)arg1;
- (void)toolbarManagerNavigatedBack:(FRToolbarManager *)arg1;
- (void)toolbarManager:(FRToolbarManager *)arg1 selectedItem:(NSString *)arg2;
- (void)toolbarManager:(FRToolbarManager *)arg1 enteredSearchString:(NSString *)arg2;
@end

