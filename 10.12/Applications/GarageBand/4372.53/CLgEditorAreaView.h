//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MAToolKit/MAKitView.h>

#import "MAAccessibilityFauxUIElementParent-Protocol.h"

@class CLgDocwEditorView, CLgEditorAreaTabView, CLgEditorAreaViewDividerIndicator, CLgUnilibInspectorView, NSString;

@interface CLgEditorAreaView : MAKitView <MAAccessibilityFauxUIElementParent>
{
    CLgDocwEditorView *mainEditorView;
    CLgEditorAreaTabView *editorTabView;
    BOOL tabViewIsCollapsed;
    double tabViewPercentSmartControls;
    double tabViewPercentMixer;
    double tabViewPercentAnimal;
    double tabViewPercentOther;
    struct CGRect dividerRect;
    int prevSelectedMidiEditorViewID;
    int prevSelectedAudioEditorViewID;
    CLgUnilibInspectorView *inspectorView;
}

- (void)rebuildControlHeader1:(id)arg1;
- (void)windowDidResignKey1:(id)arg1;
- (void)windowDidBecomeKey1:(id)arg1;
- (void)unilibView:(id)arg1 changedFirstResponderStatus:(BOOL)arg2;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)preservesContentDuringLiveResize;
- (void)setUnilibViewsUserData:(id)arg1;
- (BOOL)isSubviewOfMultiArea:(id)arg1;
- (BOOL)windowPositionIsOnMultiArea:(struct CGPoint)arg1;
- (BOOL)isSubviewOfMainArea:(id)arg1;
- (BOOL)windowPositionIsOnMainArea:(struct CGPoint)arg1;
- (void)showEditorArea2;
- (BOOL)showEditorView2:(int)arg1 changeFocus:(BOOL)arg2;
- (BOOL)hideEditorArea2;
- (int)localDocwTypeForEditorDrag;
- (id)srcImageViewForEditorDrag;
- (void)editorAreaRects:(struct CGRect *)arg1;
- (void)editorAreaRects:(struct CGRect *)arg1 forEditorViewID:(int)arg2;
- (void)editorAreaRects:(struct CGRect *)arg1 tabViewPercent:(double)arg2;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)mouseDown:(id)arg1;
- (void)resetCursorRects;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)mainDocwEditor;
- (id)editorView:(int)arg1;
- (id)frontDocwEditor;
- (id)allUnilibViews_notSorted2;
- (id)visibleUnilibViews_notSorted2;
- (BOOL)unilibViewIsVisible2:(id)arg1;
- (id)mainUnilibView;
- (id)frontUnilibView;
- (id)mainEditorView;
- (void)editorAreaRects:(struct CGRect *)arg1 tabViewPercent:(double)arg2 maxTabViewHeight:(double)arg3 minTabViewHeight:(double)arg4;
- (void)editorBtnMatrixAction:(int)arg1 changeFocus:(BOOL)arg2;
- (double)tabViewPercentForEditorViewID:(int)arg1;
- (double)tabViewPercentOther;
- (double)tabViewPercentAnimal;
- (double)tabViewPercentMixer;
- (double)tabViewPercentSmartControls;
- (void)setTabViewPercent:(double)arg1 forEditorViewID:(int)arg2;
- (int)_selectedEditorViewID;
- (int)selectedEditorViewID;
- (void)_selectEditorView:(int)arg1 changeFocus:(BOOL)arg2;
- (void)toggleEditorView2;
- (BOOL)isEditorViewVisible2;
- (BOOL)toggleEditorView2:(int)arg1;
- (BOOL)isEditorViewVisible2:(int)arg1;
- (void)toggleEditorArea2;
- (BOOL)editorAreaVisible2;
- (double)minEditorTabViewHeight;
- (double)maxEditorTabViewHeight;
- (double)maxEditorViewHeight;
- (double)minEditorViewHeight;
- (double)minMainViewHeight;
- (void)showTabViewForEditorViewID:(int)arg1 animating:(BOOL)arg2;
- (void)updateTabView;
- (void)hideTabView_animating:(BOOL)arg1;
- (void)removeFocusVertSides;
- (void)drawFocusRect:(BOOL)arg1 forView:(id)arg2;
- (struct CGRect)focusRectForView:(id)arg1 asMainUnilibView:(BOOL)arg2;
- (BOOL)initAsOneEditor:(id)arg1 docwType:(int)arg2 docwLayout:(id)arg3;
- (BOOL)initAsMultiEditor:(id)arg1 docwLayout:(id)arg2;
- (id)createEditorWithFrame:(struct CGRect)arg1 layoutCreator:(id)arg2 docwType:(int)arg3 useRoundBottom:(BOOL)arg4 useRoundTop:(BOOL)arg5 asSingleEditor:(BOOL)arg6;
- (void)selectionChangedNotification:(id)arg1;
- (void)recordingStartedNotification:(id)arg1;
- (BOOL)noEditorSwitching;
- (int)_editorViewIDForRecordingTrack;
- (void)closeSampleEditorWindowIfOpen;
- (int)defaultAudioEditorViewID;
- (int)defaultMIDIEditorViewID;
- (struct CTrack *)recordingTrack;
- (BOOL)sampleEditorFeatureAvailable;
- (struct CSong *)song;
- (BOOL)isOpaque;
- (void)sendNotificationForFocusChangeAtInit;
- (int)prevSelectedAudioEditorViewID;
- (int)prevSelectedMidiEditorViewID;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 layoutCreator:(id)arg2 docwType:(int)arg3 inspectorView:(id)arg4 docwLayout:(id)arg5;
- (id)descriptionOfFauxUIElement:(id)arg1;
- (id)roleDescriptionOfFauxUIElement:(id)arg1;
- (struct CGPoint)positionOfFauxUIElement:(id)arg1;
- (struct CGSize)sizeOfFauxUIElement:(id)arg1;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityChildren;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)moveDivider:(double)arg1;
@property(readonly) CLgEditorAreaViewDividerIndicator *dividerIndicator;
@property(readonly) struct CGRect dividerRect;
- (BOOL)_showsSplitter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

