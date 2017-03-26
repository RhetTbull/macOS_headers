//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAExportExpandableOptionsViewController.h"

#import "NSTextFieldDelegate-Protocol.h"

@class KNMacExportQuickTimeCompressionOptionsViewController, NSLayoutConstraint, NSPopUpButton, NSString, NSTextField, NSView;

@interface KNMacExportQuickTimeFormatOptionsViewController : TMAExportExpandableOptionsViewController <NSTextFieldDelegate>
{
    KNMacExportQuickTimeCompressionOptionsViewController *_compressionOptionsViewController;
    struct CGSize _showSize;
    NSTextField *_formatLabel;
    NSPopUpButton *_formatPopUpButton;
    NSTextField *_formatDescriptionField;
    NSView *_customFormatOptionsView;
    NSTextField *_widthTextField;
    NSTextField *_heightTextField;
    NSView *_compressionOptionsContainerView;
    NSLayoutConstraint *_formatLabelWidthConstraint;
    NSLayoutConstraint *_widthTextFieldFlexibleLeadingConstriant;
}

@property(nonatomic) NSLayoutConstraint *widthTextFieldFlexibleLeadingConstriant; // @synthesize widthTextFieldFlexibleLeadingConstriant=_widthTextFieldFlexibleLeadingConstriant;
@property(nonatomic) NSLayoutConstraint *formatLabelWidthConstraint; // @synthesize formatLabelWidthConstraint=_formatLabelWidthConstraint;
@property(nonatomic) NSView *compressionOptionsContainerView; // @synthesize compressionOptionsContainerView=_compressionOptionsContainerView;
@property(nonatomic) NSTextField *heightTextField; // @synthesize heightTextField=_heightTextField;
@property(nonatomic) NSTextField *widthTextField; // @synthesize widthTextField=_widthTextField;
@property(nonatomic) NSView *customFormatOptionsView; // @synthesize customFormatOptionsView=_customFormatOptionsView;
@property(nonatomic) NSTextField *formatDescriptionField; // @synthesize formatDescriptionField=_formatDescriptionField;
@property(nonatomic) NSPopUpButton *formatPopUpButton; // @synthesize formatPopUpButton=_formatPopUpButton;
@property(nonatomic) NSTextField *formatLabel; // @synthesize formatLabel=_formatLabel;
- (long long)p_proportionalVideoHeightForVideoWidth:(long long)arg1;
- (long long)p_proportionalVideoWidthForVideoHeight:(long long)arg1;
- (long long)p_clampedVideoDimensionForVideoDimension:(long long)arg1 isLargerDimension:(BOOL)arg2;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
@property(readonly, nonatomic) long long selectedFormat;
- (void)setFormat:(id)arg1;
- (BOOL)validateOptionsForExport;
- (id)options;
@property(nonatomic) double labelWidth;
- (double)expandableViewMaxHeight;
- (BOOL)isExpandedByDefault;
- (void)loadView;
- (id)nibName;
- (void)dealloc;
- (id)initWithShow:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

