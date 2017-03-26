//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "TSAInteractiveCanvasControllerDelegate-Protocol.h"

@class KNDocumentRoot, KNMacNoteCanvasViewController, KNNoteInteractiveCanvasController, KNSlideNode, NSScrollView, NSString, TSDEditorController, TSDInteractiveCanvasController, TSKDocumentRoot;

@interface KNMacPresenterNotesViewController : NSViewController <TSAInteractiveCanvasControllerDelegate>
{
    KNDocumentRoot *mDocumentRoot;
    KNSlideNode *mSlideNode;
    KNNoteInteractiveCanvasController *mNoteInteractiveCanvasController;
    KNMacNoteCanvasViewController *mNoteCanvasViewController;
    TSDEditorController *mEditorController;
    double mTextScaleFactor;
    double mTopInset;
    double mHorizontalInset;
    double mMaxTextWidth;
    NSScrollView *mScrollView;
    BOOL mCanBeginEditingOnMouseDoubleClick;
}

+ (BOOL)canSetSelectionPath:(id)arg1 withFlags:(unsigned long long)arg2;
+ (BOOL)automaticallyNotifiesObserversOfEditable;
+ (id)keyPathsForValuesAffectingEditable;
@property(nonatomic) double maxTextWidth; // @synthesize maxTextWidth=mMaxTextWidth;
@property(nonatomic) double horizontalInset; // @synthesize horizontalInset=mHorizontalInset;
@property(nonatomic) double topInset; // @synthesize topInset=mTopInset;
@property(nonatomic) double textScaleFactor; // @synthesize textScaleFactor=mTextScaleFactor;
@property(nonatomic) BOOL canBeginEditingOnMouseDoubleClick; // @synthesize canBeginEditingOnMouseDoubleClick=mCanBeginEditingOnMouseDoubleClick;
@property(readonly, nonatomic) TSDInteractiveCanvasController *noteInteractiveCanvasController; // @synthesize noteInteractiveCanvasController=mNoteInteractiveCanvasController;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=mScrollView;
- (void)invalidateTouchBar;
- (BOOL)isInteractiveCanvasControllerTextOnly:(id)arg1;
- (id)editorControllerForInteractiveCanvasController:(id)arg1;
@property(readonly, nonatomic) BOOL shouldShowInstructionalText;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
- (void)p_scrollVerticalDistance:(double)arg1;
- (double)p_scrollPageVerticalDistance;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)layoutPresenterNotesIfNeeded;
@property(nonatomic) struct NSEdgeInsets canvasTrackingAreaInsets;
@property(nonatomic) double scrollOffset;
- (void)p_updateNotePadding;
@property(readonly, nonatomic) BOOL isEditingNote;
- (void)beginEditingNote;
- (void)setSelectionToEndOfNote;
- (void)setSelectionToBeginningOfNote;
- (id)selectionPathForSlideCollectionSelection:(id)arg1;
- (id)selectionModelTranslatorForInteractiveCanvasController:(id)arg1;
- (void)setSelectionPath:(id)arg1 withFlags:(unsigned long long)arg2;
@property(readonly, nonatomic) KNSlideNode *slideNode;
@property(nonatomic, getter=isEditable) BOOL editable;
- (void)loadView;
- (void)dealloc;
- (void)teardown;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithDocumentRoot:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) BOOL allowEditMenuToAppear;
@property(readonly, nonatomic) BOOL allowTextEditingToBegin;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL interactiveCanvasControllerAllowsHyperlinkInteraction;
@property(readonly, nonatomic) BOOL isCanvasInteractive;
@property(readonly, nonatomic) BOOL isPrintingCanvas;
@property(readonly, nonatomic) BOOL shouldPopKnobsOutsideEnclosingScrollView;
@property(readonly, nonatomic) BOOL shouldResizeCanvasToScrollView;
@property(readonly, nonatomic) BOOL shouldShowTextOverflowGlyphs;
@property(readonly, nonatomic) struct CGSize sizeOfScrollViewEnclosingCanvas;
@property(readonly, nonatomic) struct CGSize sizeOfScrollViewEnclosingCanvasForVisibleCanvasCalculations;
@property(readonly, nonatomic) BOOL spellCheckingSupported;
@property(readonly, nonatomic) BOOL spellCheckingSuppressed;
@property(readonly) Class superclass;

@end

