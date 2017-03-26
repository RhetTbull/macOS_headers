//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CLgDocwControlsListView.h"

@class CLgDocwMarkerTextView, CLgListBackgroundView;

@interface CLgDocwMarkerList1View : CLgDocwControlsListView
{
    CLgListBackgroundView *listView;
    CLgDocwMarkerTextView *textView;
    double textSplitPercent;
    BOOL textIsCollapsed;
}

+ (struct CGRect)unilibEditorFrame:(struct CGRect)arg1 docwState:(id)arg2;
+ (void)docwListRects:(struct CGRect *)arg1 forBounds:(struct CGRect)arg2 markerTextPercent:(double)arg3;
- (double)heightAtBottomToCache;
- (void)setTextViewEnabled:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setTypingAttributes:(id)arg1;
- (void)setAttributedString:(id)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)mouseDownInSplitter:(id)arg1;
- (void)bookButtonAction:(id)arg1;
- (void)setTextSplitPosition2:(double)arg1;
- (double)textSplitPosition;
- (void)setTextIsCollapsed2:(BOOL)arg1;
- (void)setTextIsCollapsed_local:(BOOL)arg1;
- (BOOL)textIsCollapsed;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 unilibEditorView:(id)arg2 docwState:(id)arg3 headerQuickHelpID:(id)arg4;
- (void)docwListRects:(struct CGRect *)arg1;

@end

