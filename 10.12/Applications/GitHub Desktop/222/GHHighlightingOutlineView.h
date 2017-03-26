//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@class NSIndexSet, NSMutableIndexSet;

@interface GHHighlightingOutlineView : NSOutlineView
{
    NSMutableIndexSet *_highlightedRowIndexes;
}

@property(retain, nonatomic) NSIndexSet *highlightedRowIndexes; // @synthesize highlightedRowIndexes=_highlightedRowIndexes;
- (void).cxx_destruct;
- (BOOL)scrollRectToVisible:(struct CGRect)arg1;
- (void)setRowsAtIndexes:(id)arg1 highlighted:(BOOL)arg2;
- (void)highlightRowIndexes:(id)arg1 byExtendingHighlight:(BOOL)arg2;
@property(nonatomic) long long highlightedRow;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

