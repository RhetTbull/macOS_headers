//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHChartAccessibilityElement.h"

#import "NSAccessibilityGroup-Protocol.h"

@class NSString;

@interface TSCHChartBodyAccessibilityElement : TSCHChartAccessibilityElement <NSAccessibilityGroup>
{
}

- (id)elementTypeDescription;
- (id)contentsSummary;
- (BOOL)canSummarizeContents;
- (id)accessibilityRoleDescription;
- (id)accessibilityHelp;
- (id)accessibilityTitle;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityParent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

