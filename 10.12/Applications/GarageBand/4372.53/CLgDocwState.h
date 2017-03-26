//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CLgLayoutState.h"

@interface CLgDocwState : CLgLayoutState
{
}

- (void)setUserData_inspector:(id)arg1;
- (void)setUserData_binWindow:(id)arg1;
- (void)setUserData:(id)arg1 forDocwType:(int)arg2;
- (void)setActionBarLayoutDict:(id)arg1;
- (void)setTransportLayoutDict:(id)arg1;
- (void)setTabViewPercentOther:(double *)arg1;
- (void)setTabViewPercentAnimal:(double *)arg1;
- (void)setTabViewPercentMixer:(double *)arg1;
- (void)setTabViewPercentSmartControls:(double *)arg1;
- (void)setDocwEditorTabIndex1:(int *)arg1;
- (void)setDocwListTabIndex_fromListViewID:(int *)arg1 forListAreaID:(int)arg2;
- (void)setDocwListTabIndex1:(int *)arg1 forListAreaID:(int)arg2;
- (void)setMarkerTextSplitPosition:(double *)arg1;
- (void)setMarkerTextIsExpanded:(char *)arg1;
- (void)setMediaListIsCurrent:(char *)arg1;
- (void)setCurrentListAreaID:(int *)arg1;
- (void)setTransportBarRows:(unsigned long long *)arg1;
- (void)setTransportBarIsAtTop:(char *)arg1;
- (void)setTransportBarIsVisible:(char *)arg1;
- (void)setWindowIsZoomed:(char *)arg1;
- (void)setFocusedElement:(int *)arg1;
- (void)setLibraryIsVisible:(char *)arg1;
- (void)setListsAreVisible:(char *)arg1;
- (void)setLibraryWidth:(double *)arg1;
- (void)setListWidth:(double *)arg1;
- (void)setInspectorWidth:(double *)arg1;
- (void)setInspectorIsVisible:(char *)arg1;
- (void)setToolbarIsVisible:(char *)arg1;
- (void)setPrevAudioEditor:(long long *)arg1;
- (void)setPrevMidiEditor:(long long *)arg1;
- (id)userDataForDocwType_inspector;
- (id)userDataForDocwType_binWindow;
- (id)userDataForDocwType:(int)arg1;
- (id)actionBarLayoutDict;
- (id)transportLayoutDict;
- (double)markerTextSplitPosition;
- (double)tabViewPercentOther;
- (double)tabViewPercentAnimal;
- (double)tabViewPercentMixer;
- (double)tabViewPercentSmartControls;
- (int)selectedEditorViewID3;
- (int)docwListTabIndexForListAreaID:(int)arg1;
- (unsigned long long)transportBarRows;
- (BOOL)transportBarIsVisible;
- (BOOL)transportBarIsAtTop;
- (BOOL)windowIsZoomed;
- (BOOL)markerTextIsExpanded;
- (int)currentListAreaID;
- (int)currentDocwListID1;
- (int)focusedElement;
- (BOOL)libraryIsVisible;
- (BOOL)listsAreVisible;
- (double)libraryWidth;
- (double)listWidth;
- (double)inspectorWidth;
- (BOOL)inspectorIsVisible;
- (BOOL)toolbarIsVisible;
- (long long)prevAudioEditor;
- (long long)prevMidiEditor;
- (id)docwStateDict;
- (void)dealloc;
- (id)initWithDocwStateDict:(id)arg1;

@end

