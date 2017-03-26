//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSColor, NSData, NSString, PTYNoteViewController, VT100RemoteHost, VT100ScreenMark, VT100Token, iTermColorMap, iTermSelection;

@protocol VT100ScreenDelegate <NSObject>
- (BOOL)screenShouldReduceFlicker;
- (void)screenSetUserVar:(NSString *)arg1;
- (void)screenSetBadgeFormat:(NSString *)arg1;
- (void)screenSetBackgroundImageFile:(NSString *)arg1;
- (void)screenSuggestShellIntegrationUpgrade;
- (void)screenLogWorkingDirectoryAtLine:(int)arg1 withDirectory:(NSString *)arg2;
- (NSString *)screenProfileName;
- (BOOL)screenShouldPlacePromptAtFirstColumn;
- (void)screenCommandDidEndWithRange:(CDStruct_7a47e81c)arg1;
- (void)screenCommandDidChangeWithRange:(CDStruct_7a47e81c)arg1;
- (BOOL)screenShouldSendReport;
- (void)screenCurrentDirectoryDidChangeTo:(NSString *)arg1;
- (void)screenCurrentHostDidChange:(VT100RemoteHost *)arg1;
- (void)screenSetColor:(NSColor *)arg1 forKey:(int)arg2;
- (void)screenSetTabColorBlueComponentTo:(double)arg1;
- (void)screenSetTabColorGreenComponentTo:(double)arg1;
- (void)screenSetTabColorRedComponentTo:(double)arg1;
- (void)screenSetCurrentTabColor:(NSColor *)arg1;
- (iTermColorMap *)screenColorMap;
- (void)screenFileReceiptEndedUnexpectedly;
- (void)screenDidReceiveBase64FileData:(NSString *)arg1;
- (void)screenDidFinishReceivingFile;
- (void)screenWillReceiveFileNamed:(NSString *)arg1 ofSize:(int)arg2;
- (void)screenAppendDataToPasteboard:(NSData *)arg1;
- (BOOL)screenIsAppendingToPasteboard;
- (void)screenCopyBufferToPasteboard;
- (void)screenDidEndEditingNote;
- (void)screenDidAddNote:(PTYNoteViewController *)arg1;
- (void)screenSetPasteboard:(NSString *)arg1;
- (void)screenSetProfileToProfileNamed:(NSString *)arg1;
- (void)screenActivateWindow;
- (void)screenPromptDidStartAtLine:(int)arg1;
- (VT100ScreenMark *)screenAddMarkOnLine:(int)arg1;
- (void)screenSaveScrollPosition;
- (BOOL)screenHasView;
- (void)screenCursorDidMoveToLine:(int)arg1;
- (void)screenSetHighlightCursorLine:(BOOL)arg1;
- (void)screenSetCursorVisible:(BOOL)arg1;
- (NSString *)screenCurrentWorkingDirectory;
- (void)screenRequestAttention:(BOOL)arg1 isCritical:(BOOL)arg2;
- (void)screenIncrementBadge;
- (void)screenFlashImage:(NSString *)arg1;
- (void)screenMouseModeDidChange;
- (void)screenClearHighlights;
- (struct CGSize)screenCellSize;
- (iTermSelection *)screenSelection;
- (void)screenRemoveSelection;
- (BOOL)screenShouldIgnoreBellWhichIsAudible:(BOOL)arg1 visible:(BOOL)arg2;
- (BOOL)screenShouldPostTerminalGeneratedAlert;
- (BOOL)screenShouldSendContentsChangedNotification;
- (void)screenPrintVisibleArea;
- (void)screenPrintString:(NSString *)arg1;
- (void)screenShowBellIndicator;
- (void)screenDidChangeNumberOfScrollbackLines;
- (BOOL)screenShouldTreatAmbiguousCharsAsDoubleWidth;
- (BOOL)screenInTmuxMode;
- (void)screenHandleTmuxInput:(VT100Token *)arg1;
- (void)screenStartTmuxMode;
- (int)screenViewIndex;
- (int)screenTabIndex;
- (int)screenWindowIndex;
- (int)screenNumber;
- (void)screenPopCurrentTitleForWindow:(BOOL)arg1;
- (void)screenPushCurrentTitleForWindow:(BOOL)arg1;
- (struct CGSize)screenSize;
- (struct CGRect)screenWindowFrame;
- (struct CGRect)screenWindowScreenFrame;
- (void)screenWriteDataToTask:(NSData *)arg1;
- (BOOL)screenWindowIsMiniaturized;
- (void)screenRaise:(BOOL)arg1;
- (void)screenMiniaturizeWindow:(BOOL)arg1;
- (void)screenMoveWindowTopLeftPointTo:(struct CGPoint)arg1;
- (struct CGPoint)screenWindowTopLeftPixelCoordinate;
- (BOOL)screenWindowIsFullscreen;
- (NSString *)screenName;
- (void)screenSetName:(NSString *)arg1;
- (NSString *)screenDefaultName;
- (NSString *)screenWindowTitle;
- (void)screenSetWindowTitle:(NSString *)arg1;
- (NSString *)screenNameExcludingJob;
- (BOOL)screenShouldBeginPrinting;
- (void)screenResizeToWidth:(int)arg1 height:(int)arg2;
- (void)screenResizeToPixelWidth:(int)arg1 height:(int)arg2;
- (BOOL)screenShouldInitiateWindowResize;
- (void)screenSetCursorType:(long long)arg1;
- (void)screenSetCursorBlinking:(BOOL)arg1;
- (void)screenDidAppendAsciiDataToCurrentLine:(CDStruct_0a2cd81d *)arg1;
- (void)screenDidAppendStringToCurrentLine:(NSString *)arg1;
- (BOOL)screenAllowTitleSetting;
- (BOOL)screenShouldSyncTitle;
- (void)screenDidReset;
- (void)screenTriggerableChangeDidOccur;
- (void)screenSizeDidChange;
- (void)screenUpdateDisplay:(BOOL)arg1;
- (void)screenScheduleRedrawSoon;
- (void)screenNeedsRedraw;
- (NSString *)screenSessionGuid;
@end

