//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CETrailerEditorModule, FFAnchoredGeneratorComponent, NSDictionary, TInfoHeaderView, TInfoItemView, TInfoMapView, TShotListWrapperView, TStoryWrapperView;

@interface TInfoWrapperView : NSView
{
    TInfoHeaderView *m_infoHeader;
    TInfoItemView *m_infoItemText;
    TInfoItemView *m_infoItemPopup;
    TInfoItemView *m_infoItemTextAndPopup;
    TInfoMapView *m_infoMapView;
    TStoryWrapperView *m_storyboardWrapper;
    TShotListWrapperView *m_shotListWrapper;
    CETrailerEditorModule *m_trailerController;
    NSDictionary *m_trailer;
    BOOL m_canDelete;
    NSDictionary *_trailerAtEditStart;
    FFAnchoredGeneratorComponent *_updatingTitle;
}

@property(retain, nonatomic) FFAnchoredGeneratorComponent *updatingTitle; // @synthesize updatingTitle=_updatingTitle;
@property(copy, nonatomic) NSDictionary *trailerAtEditStart; // @synthesize trailerAtEditStart=_trailerAtEditStart;
@property(nonatomic) BOOL canDelete; // @synthesize canDelete=m_canDelete;
@property(retain, nonatomic) NSDictionary *trailer; // @synthesize trailer=m_trailer;
@property(retain, nonatomic) CETrailerEditorModule *trailerController; // @synthesize trailerController=m_trailerController;
- (void)awakeFromNib;
- (void)dealloc;
- (BOOL)becomeFirstResponder;
- (void)mouseDown:(id)arg1;
- (void)acceptAllEditing;
- (void)a_convertToProject:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)rebuildSubviews;
- (id)popups;
- (id)popupsIn:(id)arg1;
- (void)updateOverridenStates;
- (unsigned long long)overridingIndexForView:(id)arg1 checkPopup:(BOOL)arg2;
- (id)addSection:(id)arg1 popups:(id)arg2 previousView:(id)arg3 lastLabel:(id *)arg4 firstLabel:(id *)arg5;
- (BOOL)reverseCastList;
- (id)addSubview:(id)arg1 previousView:(id)arg2;
- (id)viewForItem:(id)arg1 popups:(id)arg2 previousVew:(id)arg3 addExtraSpace:(BOOL)arg4;
- (id)headerForSection:(id)arg1 previousView:(id)arg2;
- (void)position:(id)arg1 below:(id)arg2 offset:(int)arg3;
- (void)sizeToParent:(id)arg1;
- (void)selectItemWithTimelineItem:(id)arg1;
- (void)skimToMiddleOf:(id)arg1;
- (void)updateTitleOf:(id)arg1;
- (void)updateTitleOf:(id)arg1 trailer:(id)arg2 changeController:(id)arg3 notify:(BOOL)arg4;
- (void)endEditingTitleOf:(id)arg1 save:(BOOL)arg2;
- (void)beginEditingTitleOf:(id)arg1;
- (BOOL)isEditingAnyTitle;
- (void)subview:(id)arg1 mouseMoved:(id)arg2;
- (id)itemFromView:(id)arg1;
- (id)mainItemOfType:(int)arg1;
- (void)skimToItem:(id)arg1 percent:(float)arg2;
- (void)skimToItem:(id)arg1 percent:(float)arg2 allowPercentAdjust:(BOOL)arg3;
- (void)showStoryboardItemAtIndex:(int)arg1;
- (void)a_valueChanged:(id)arg1;
- (void)a_delete:(id)arg1;
- (void)a_add:(id)arg1;
- (void)fixSectionLabels:(id)arg1;
- (BOOL)find:(id)arg1 section:(id *)arg2 index:(int *)arg3;
- (BOOL)isFlipped;
- (BOOL)acceptsFirstResponder;

@end

