//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAGeneralPreferencesPaneController.h"

@class NSButton, NSColorWell;

@interface TPMacGeneralPreferencesPaneController : TMAGeneralPreferencesPaneController
{
    NSColorWell *_invisiblesColorWell;
    NSButton *_showSizeAndPositionButton;
    NSButton *_fixCapitalizationButton;
    NSButton *_superscriptNumericalSuffixesButton;
    NSButton *_automaticallyDetectLinksButton;
    NSButton *_automaticallyDetectListsButton;
}

@property(nonatomic) NSButton *automaticallyDetectListsButton; // @synthesize automaticallyDetectListsButton=_automaticallyDetectListsButton;
@property(nonatomic) NSButton *automaticallyDetectLinksButton; // @synthesize automaticallyDetectLinksButton=_automaticallyDetectLinksButton;
@property(nonatomic) NSButton *superscriptNumericalSuffixesButton; // @synthesize superscriptNumericalSuffixesButton=_superscriptNumericalSuffixesButton;
@property(nonatomic) NSButton *fixCapitalizationButton; // @synthesize fixCapitalizationButton=_fixCapitalizationButton;
@property(nonatomic) NSButton *showSizeAndPositionButton; // @synthesize showSizeAndPositionButton=_showSizeAndPositionButton;
@property(nonatomic) NSColorWell *invisiblesColorWell; // @synthesize invisiblesColorWell=_invisiblesColorWell;
- (void)takeInvisiblesColor:(id)arg1;
- (void)loadView;
- (void)awakeFromNib;
- (id)label;
- (id)toolbarIconName;
- (id)identifier;
- (id)nibName;

@end

