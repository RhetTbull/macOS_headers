//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class NSButton, NSComboBox, NSTextField;

@interface TTFindPanel : NSPanel
{
    NSComboBox *_findPatternField;
    NSButton *_findNextButton;
    NSButton *_findPreviousButton;
    NSButton *_ignoreCaseCheckbox;
    NSButton *_wrapAroundCheckbox;
    NSTextField *_notFoundLabel;
    BOOL _isFindPatternDirty;
}

+ (id)sharedFindPanel;
- (void)performFindWithOptions:(unsigned long long)arg1 orderOutOnMatch:(BOOL)arg2;
- (BOOL)conformsToFindingProtocol:(id)arg1;
- (id)target;
- (void)updateRecentPatterns;
- (void)pullChangesFromPasteboard;
- (void)pushChangesToPasteboard;
- (void)initContentView;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)comboBoxSelectionDidChange:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)becomeKeyWindow;
- (void)findPrevious:(id)arg1;
- (void)findNextAndOrderOutOnMatch:(id)arg1;
- (void)findNext:(id)arg1;
- (void)performTerminalFindPanelAction:(id)arg1;
- (unsigned long long)stringCompareOptions;
- (id)findPattern;
- (void)dealloc;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

