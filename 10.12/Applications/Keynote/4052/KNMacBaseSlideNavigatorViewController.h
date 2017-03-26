//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "CALayerDelegate-Protocol.h"
#import "KNMacContentContainer-Protocol.h"
#import "KNVisibleSlideNodesProvider-Protocol.h"

@class KNDocumentRoot, KNInteractiveCanvasController, KNMacBaseSlideNavigatorView, KNMacCanvasViewController, KNMacSlideDragHandlerView, NSObject, NSString;
@protocol KNBaseSlideNavigatorController, KNSlideCollectionEditor;

@interface KNMacBaseSlideNavigatorViewController : NSViewController <CALayerDelegate, KNMacContentContainer, KNVisibleSlideNodesProvider>
{
    NSObject<KNSlideCollectionEditor> *mSlideCollectionEditor;
    NSObject<KNBaseSlideNavigatorController> *mNavigatorController;
    KNInteractiveCanvasController *mInteractiveCanvasController;
    KNMacCanvasViewController *mCanvasViewController;
    struct CGRect mOldNavigatorVisibleRect;
    double mScrollLockDistanceToSelection;
    KNMacSlideDragHandlerView *mSlideDragHandlerView;
    long long mSlideDragCount;
    BOOL mIsCurrentlyScrollingToSelectionDueToVisibleRectChange;
}

@property(readonly, nonatomic) NSObject<KNSlideCollectionEditor> *slideCollectionEditor; // @synthesize slideCollectionEditor=mSlideCollectionEditor;
@property(readonly, nonatomic) NSObject<KNBaseSlideNavigatorController> *navigatorController; // @synthesize navigatorController=mNavigatorController;
@property(readonly, nonatomic, getter=isReadOnlyAndNotOwner) BOOL readOnlyAndNotOwner;
- (void)p_keepSelectionVisible;
- (void)updateResizeScrollLock;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (id)visibleSlideNodes;
- (void)beginSlideNodeEditing;
- (id)p_newSelectionSetByAddingRangeEndingAt:(unsigned long long)arg1 withNodeToEdit:(id *)arg2;
- (id)p_newSelectionSetByAddingNode:(id)arg1;
- (BOOL)selectionSetContainsSlideIndex:(unsigned long long)arg1;
- (BOOL)canPasteValues;
- (BOOL)canPasteAsPlainText;
- (BOOL)selectSlideAtIndex:(unsigned long long)arg1 withOperation:(int)arg2;
- (BOOL)handleDropCopyOperationForInfo:(id)arg1 atSlideIndex:(unsigned long long)arg2 withIndentLevel:(unsigned long long)arg3;
- (void)resumeCollaborationDueToDragging;
- (void)suspendCollaborationDueToDragging;
- (BOOL)handleMoveOperationForInfo:(id)arg1 atSlideIndex:(unsigned long long)arg2;
- (BOOL)handleColorDropForDragInfo:(id)arg1 onSlideAtIndex:(unsigned long long)arg2;
- (BOOL)handleDropForDragInfo:(id)arg1 atSlideIndex:(unsigned long long)arg2 withIndentLevel:(unsigned long long)arg3;
- (BOOL)validateDropAtIndex:(unsigned long long *)arg1 withIndentLevel:(unsigned long long *)arg2 forOperation:(unsigned long long)arg3;
- (id)newDragControllerWithEvent:(id)arg1;
- (unsigned long long)dragOperationForDragInfo:(id)arg1;
- (BOOL)selectPreviousVisibleSlide;
- (BOOL)selectNextVisibleSlide;
- (id)insertNewSlideNodeBasedOnMaster:(id)arg1;
- (void)insertNewSlideNodeAfterSlideNodesInContext:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertNewSlideNode:(id)arg1;
- (void)insertText:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)duplicateSlideNodesInContext:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)duplicate:(id)arg1;
- (void)deleteSlideNodesInContext:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)delete:(id)arg1;
- (void)cutSlideNodesInContext:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)cut:(id)arg1;
- (void)pasteValues:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)pasteAfterSlideNodesInContext:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)paste:(id)arg1;
- (BOOL)canPasteFromPasteboard:(id)arg1;
- (void)copySlideNodesInContext:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)copy:(id)arg1;
- (void)p_preferredScrollerStyleDidChange:(id)arg1;
- (id)p_scrollView;
- (void)cleanupSlideDragDestination;
- (void)prepareSlideDragDestination;
@property(readonly, nonatomic) BOOL adjustsToUndersizedWindow;
@property(readonly, nonatomic) double kn_maximumSize;
@property(readonly, nonatomic) double kn_minimumSize;
- (double)savedNavigatorWidth;
- (void)p_navigatorVisibleRectDidChange:(id)arg1;
- (void)p_navigatorWidthDidChange:(id)arg1;
@property(readonly, nonatomic) Class navigatorControllerClass;
@property(readonly, nonatomic) Class navigatorViewClass;
@property(readonly, nonatomic) KNDocumentRoot *documentRoot;
- (id)p_documentWindowController;
@property(readonly, nonatomic) KNMacBaseSlideNavigatorView *navigatorView;
- (void)contentDidDisappear;
- (void)loadView;
- (void)dealloc;
- (void)teardown;
- (id)init;
- (id)initWithSlideCollectionEditor:(id)arg1 interactiveCanvasController:(id)arg2 canvasViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) double topContentInset;

@end

