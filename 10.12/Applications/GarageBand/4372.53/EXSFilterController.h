//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SmallModalDialogController.h"

@class NSTextField;

@interface EXSFilterController : SmallModalDialogController
{
    NSTextField *newName;
}

+ (BOOL)filteringEnabled;
+ (void)setFilteringEnabled:(BOOL)arg1;
+ (id)filterString;
+ (void)setFilterString:(id)arg1;
+ (id)show;
+ (id)nibName;
- (void)click_OK:(id)arg1;
- (void)click_Cancel:(id)arg1;
- (void)updateUI;

@end

