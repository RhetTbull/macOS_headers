//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSApplication/TMAExportOptionsViewController.h>

@class NSButton, NSLayoutConstraint, NSString, NSTextField;

@interface KNMacExportQuickTimeCompressionOptionsViewController : TMAExportOptionsViewController
{
    BOOL _shouldShowAllowsSlideBackgroundAlphaButton;
    NSTextField *_compressionTypeLabel;
    NSButton *_compressionTypeH264Button;
    NSButton *_compressionTypeAppleProRes422Button;
    NSButton *_compressionTypeAppleProRes4444Button;
    NSButton *_allowsSlideBackgroundAlphaButton;
    NSTextField *_allowsSlideBackgroundAlphaDescriptionLabel;
    NSLayoutConstraint *_compressionTypeLabelWidthConstraint;
    NSLayoutConstraint *_compressionTypeGroupBottomConstraint;
    NSLayoutConstraint *_allowsSlideBackgroundAlphaGroupBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *allowsSlideBackgroundAlphaGroupBottomConstraint; // @synthesize allowsSlideBackgroundAlphaGroupBottomConstraint=_allowsSlideBackgroundAlphaGroupBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *compressionTypeGroupBottomConstraint; // @synthesize compressionTypeGroupBottomConstraint=_compressionTypeGroupBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *compressionTypeLabelWidthConstraint; // @synthesize compressionTypeLabelWidthConstraint=_compressionTypeLabelWidthConstraint;
@property(retain, nonatomic) NSTextField *allowsSlideBackgroundAlphaDescriptionLabel; // @synthesize allowsSlideBackgroundAlphaDescriptionLabel=_allowsSlideBackgroundAlphaDescriptionLabel;
@property(retain, nonatomic) NSButton *allowsSlideBackgroundAlphaButton; // @synthesize allowsSlideBackgroundAlphaButton=_allowsSlideBackgroundAlphaButton;
@property(retain, nonatomic) NSButton *compressionTypeAppleProRes4444Button; // @synthesize compressionTypeAppleProRes4444Button=_compressionTypeAppleProRes4444Button;
@property(retain, nonatomic) NSButton *compressionTypeAppleProRes422Button; // @synthesize compressionTypeAppleProRes422Button=_compressionTypeAppleProRes422Button;
@property(retain, nonatomic) NSButton *compressionTypeH264Button; // @synthesize compressionTypeH264Button=_compressionTypeH264Button;
@property(retain, nonatomic) NSTextField *compressionTypeLabel; // @synthesize compressionTypeLabel=_compressionTypeLabel;
@property(nonatomic) BOOL shouldShowAllowsSlideBackgroundAlphaButton; // @synthesize shouldShowAllowsSlideBackgroundAlphaButton=_shouldShowAllowsSlideBackgroundAlphaButton;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL allowsSlideBackgroundAlpha;
- (void)p_updateAllowsSlideBackgroundAlphaButtonEnabled;
- (void)p_updateAllowsSlideBackgroundAlphaGroupVisibility;
@property(readonly, nonatomic) NSString *videoCodec;
- (void)updateVideoCodec:(id)arg1;
@property(nonatomic) double labelWidth;
- (void)loadView;
- (id)nibName;

@end

