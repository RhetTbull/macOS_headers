//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorPaneWithTitleView.h"

@class NSButton, NSMutableArray, NSString, NSView;

@interface TMADisclosureInspectorPaneView : TMAInspectorPaneWithTitleView
{
    NSButton *_disclosureControl;
    NSView *_contentView;
    BOOL _disclosed;
    double _contentOffset;
    NSMutableArray *_constraints;
    BOOL _alignsContentToTitle;
}

@property(nonatomic) double contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) BOOL alignsContentToTitle; // @synthesize alignsContentToTitle=_alignsContentToTitle;
@property(nonatomic, getter=isDisclosed) BOOL disclosed; // @synthesize disclosed=_disclosed;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) NSButton *disclosureControl; // @synthesize disclosureControl=_disclosureControl;
- (void)addConstraintForTitleAlignmentToArray:(id)arg1;
- (void)p_updateConstraints;
- (id)tma_inspectorAXTitleView;
- (double)tma_inspectorPaneHeight;
- (void)tma_updateInspectorPaneHeightWithAnimation:(BOOL)arg1;
- (void)setMultiToggleDisclosed:(BOOL)arg1;
- (id)toolTip;
- (void)setToolTip:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)p_commonInit;
- (void)dealloc;

@end

