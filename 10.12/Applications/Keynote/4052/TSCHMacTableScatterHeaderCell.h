//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHMacTableHeaderCell.h"

@class TSCHMacTableMultiSectionLabelView;

@interface TSCHMacTableScatterHeaderCell : TSCHMacTableHeaderCell
{
    BOOL mHasEditableText;
    double mRowLableViewWidth;
    TSCHMacTableMultiSectionLabelView *mLabelView;
}

- (void)setEditableText:(BOOL)arg1;
- (void)setSectionLabels:(id)arg1;
- (void)p_LayoutColumnHeaderCellSubviews;
- (void)p_LayoutRowHeaderCellSubviews;
- (double)rowHeaderSubLabelWidth;
- (double)columnHeaderSubLabelHeight;
- (BOOL)hasTextToSelect;
- (BOOL)supportsTextEditing;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 uiState:(int)arg2 tableView:(id)arg3 dataSource:(id)arg4 sectionLabels:(id)arg5 rowLabelSectionWidth:(double)arg6 editableText:(BOOL)arg7 identifier:(id)arg8;

@end

