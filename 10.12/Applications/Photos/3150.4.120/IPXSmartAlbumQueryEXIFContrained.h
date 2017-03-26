//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXSmartAlbumQueryEXIF.h"

@class NSArray, NSComboBox, NSPopUpButton;

@interface IPXSmartAlbumQueryEXIFContrained : IPXSmartAlbumQueryEXIF
{
    NSComboBox *m_oneItemComboBox;
    NSComboBox *m_twoItemComboBox1;
    NSComboBox *m_twoItemComboBox2;
    BOOL _settingProperties;
    NSArray *_existingValueComboChoices;
    NSArray *_existingValueTitleComboChoices;
    NSArray *_popupValues;
    NSPopUpButton *_qualifierPopup;
    NSPopUpButton *_exifPopup;
    NSComboBox *_oneExifCombo;
    NSComboBox *_twoExifCombo1;
    NSComboBox *_twoExifCombo2;
}

+ (id)nibName;
@property __weak NSComboBox *twoExifCombo2; // @synthesize twoExifCombo2=_twoExifCombo2;
@property __weak NSComboBox *twoExifCombo1; // @synthesize twoExifCombo1=_twoExifCombo1;
@property __weak NSComboBox *oneExifCombo; // @synthesize oneExifCombo=_oneExifCombo;
@property __weak NSPopUpButton *exifPopup; // @synthesize exifPopup=_exifPopup;
@property __weak NSPopUpButton *qualifierPopup; // @synthesize qualifierPopup=_qualifierPopup;
@property(retain) NSArray *popupValues; // @synthesize popupValues=_popupValues;
@property(retain) NSArray *existingValueTitleComboChoices; // @synthesize existingValueTitleComboChoices=_existingValueTitleComboChoices;
@property(retain) NSArray *existingValueComboChoices; // @synthesize existingValueComboChoices=_existingValueComboChoices;
- (void).cxx_destruct;
- (id)nextKeyViewWithPreviousView:(id)arg1;
- (void)comboBoxValueChanged:(id)arg1;
- (id)filterPopupItems:(id)arg1;
- (id)existingValueKeyPathForTable:(id)arg1;
- (void)populateExistingValues;
- (void)setQuery:(id)arg1;

@end

