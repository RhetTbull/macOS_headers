//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CPInspector.h"

@class CPFrameLimitsEditor, NSArray, NSMutableDictionary, NSPopUpButton, NSView;

@interface CPFrameLimitsInspector : CPInspector
{
    CPFrameLimitsEditor *mNoEditor;
    CPFrameLimitsEditor *mLinLinEditor;
    CPFrameLimitsEditor *mLogLinEditor;
    CPFrameLimitsEditor *mLinLogEditor;
    CPFrameLimitsEditor *mLogLogEditor;
    CPFrameLimitsEditor *mCartesian3DEditor;
    NSArray *mEditors;
    CPFrameLimitsEditor *mCurrentEditor;
    NSMutableDictionary *mRecentLimits;
    NSView *mHistoryView;
    NSPopUpButton *mHistoryPopUp;
}

+ (id)sharedInspector;
- (void)useHistory:(id)arg1;
- (void)updateEditor:(id)arg1;
- (void)updateCurrentEditor;
- (void)newFrameLimits:(id)arg1;
- (void)updateHistoryPopUp;
- (id)currentScale;
- (BOOL)changeSubviewAutoresizingMask;
- (BOOL)variableInspectorWidth;
- (BOOL)removeSubviewsBeforeResizingWindow;
- (void)dealloc;
- (void)awakeFromNib;
- (id)windowNibName;
- (id)title;

@end

