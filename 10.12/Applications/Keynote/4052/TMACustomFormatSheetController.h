//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSTextFieldDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"
#import "TMACustomFormatTokenController-Protocol.h"

@class NSArray, NSButton, NSDate, NSLayoutConstraint, NSMutableArray, NSNumber, NSPopUpButton, NSString, NSTabView, NSTextField, NSTokenField, NSView, NSWindow, TMABackgroundColorView, TMACustomFormatDateTokenDelegate, TMACustomFormatNumberTokenDelegate, TMACustomFormatSheetControllerData, TMAWellView, TSADocumentRoot;

@interface TMACustomFormatSheetController : NSWindowController <NSWindowDelegate, TMACustomFormatTokenController, NSTextFieldDelegate>
{
    BOOL mHasCellTextForCustomText;
    NSTextField *mFormatTypeLabel;
    NSPopUpButton *mFormatTypePopUp;
    NSTextField *mFormatNameLabel;
    NSTextField *mFormatNameTextField;
    NSButton *mSaveButton;
    NSButton *mDeleteFormatButton;
    NSTabView *mFormatTypeTabView;
    unsigned long long mNumberConditions;
    NSView *mNumberFormatsBox;
    NSButton *mAddConditionButton;
    NSView *mConditionView;
    NSLayoutConstraint *mConditionViewHeightConstraint;
    NSLayoutConstraint *mTextHorizontalLineToBottomConstraint;
    NSLayoutConstraint *mNumberBottomViewConstraint;
    NSLayoutConstraint *mNumberBottomBoxConstraint;
    TMAWellView *mWellView;
    NSView *mNumberTabView;
    TMABackgroundColorView *mBackgroundView;
    NSTextField *mSampleFormattedDateField;
    NSTextField *mSampleFormattedTextField;
    NSTextField *mCustomDatePatternLabel;
    NSTokenField *mCustomDatePatternField;
    NSTextField *mCustomTextPatternLabel;
    NSTokenField *mCustomTextPatternField;
    NSTokenField *mDayOfMonth;
    NSTokenField *mDayOfWeek;
    NSTokenField *mDayOfWeekInMonth;
    NSTokenField *mDayOfYear;
    NSTokenField *mEra;
    NSTokenField *mMonth;
    NSTokenField *mWeekOfMonth;
    NSTokenField *mWeekOfYear;
    NSTokenField *mYear;
    NSTokenField *mQuarter;
    NSTokenField *mAMPM;
    NSTokenField *mHour;
    NSTokenField *mMilli;
    NSTokenField *mMinute;
    NSTokenField *mSecond;
    NSTokenField *mIntegers;
    NSTokenField *mDecimals;
    NSTokenField *mScale;
    NSTokenField *mCurrency;
    NSTokenField *mSpaces;
    NSLayoutConstraint *mDateViewBottomSpace;
    NSWindow *mHostWindow;
    TMACustomFormatDateTokenDelegate *mDateTokenDelegate;
    TMACustomFormatNumberTokenDelegate *mNumberTokenDelegate;
    TMACustomFormatNumberTokenDelegate *mTextTokenDelegate;
    double mSampleNumber;
    NSDate *mSampleDate;
    NSString *mSampleString;
    NSMutableArray *mNumberFormatViewControllers;
    TSADocumentRoot *mDocumentRoot;
    BOOL mInvalidDateFormat;
    BOOL mInvalidTextFormat;
    NSArray *mNumberConditionsConstraints;
    TMACustomFormatSheetControllerData *mSheetControllerData;
}

+ (BOOL)canEditFormatsInDocument:(id)arg1;
+ (id)defaultSampleValueForSheetFormatType:(int)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)allowTextFormatting;
- (void)updateSample;
- (void)p_updateSampleFormattedText;
- (id)p_representedTextFormatWithName:(id)arg1;
- (id)invalidFormatString;
@property(nonatomic) NSNumber *hasCellTextForCustomText;
- (id)p_arrayByRemovingTokenType:(int)arg1 fromArray:(id)arg2;
- (BOOL)p_hasTokenType:(int)arg1 inTokenField:(id)arg2;
- (id)p_customFormatList;
- (void)updateSaveButtonState;
- (void)updateSampleFormattedDate;
- (void)p_addNumberConditionsConstraints;
- (void)removeNumberFormatAtIndex:(unsigned long long)arg1;
- (void)addNumberFormatAtIndex:(unsigned long long)arg1 makeFirstResponder:(BOOL)arg2;
- (void)p_updateConditionTextFields;
- (id)p_representedNumberFormatWithName:(id)arg1;
- (void)p_deleteFormatWithName:(id)arg1;
- (void)p_deleteAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)deleteFormat:(id)arg1;
- (void)takeFormatTypeFrom:(id)arg1;
- (void)p_replaceAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)saveCustomFormatSheet:(id)arg1;
- (void)cancelCustomFormatSheet:(id)arg1;
- (void)addCondition:(id)arg1;
- (void)customFormatSheetDidEnd:(id)arg1 returnCode:(long long)arg2 mode:(int)arg3 startingCustomFormat:(id)arg4 commandBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6 document:(id)arg7;
- (int)p_checkCustomFormatConflictForFormat:(id)arg1 mode:(int)arg2 startingCustomFormat:(id)arg3 returningExistingCustomFormat:(id *)arg4;
- (id)p_existingCustomFormatWithConflictingName;
- (id)p_customFormatFromCurrentUI;
- (void)showSheetForDocument:(id)arg1 mode:(int)arg2 startingFormatType:(int)arg3 allowFormatTypeSwitch:(BOOL)arg4 sampleValue:(id)arg5 customFormat:(id)arg6 commandBlock:(CDUnknownBlockType)arg7 cancelBlock:(CDUnknownBlockType)arg8;
- (id)p_nextAvailableDefaultFormatName;
- (BOOL)p_nameIsAvailable:(id)arg1;
- (unsigned long long)p_indexOfDocumentFormatWithName:(id)arg1;
- (unsigned long long)p_indexOfFormatWithName:(id)arg1 inList:(id)arg2;
- (void)loadWindow;
- (int)selectedTabViewItemType;
- (void)selectFormatTypeTabViewItemFromTag:(long long)arg1;
- (void)selectFormatTypeTabViewItemFromFormatType:(int)arg1;
- (long long)p_tagFromFormatType:(int)arg1;
- (float)numberTabViewHeight;
- (void)dealloc;
- (id)init;
- (void)p_setSampleDate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

