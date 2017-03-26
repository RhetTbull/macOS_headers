//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPMacCanvasViewController.h"

#import "NSDraggingDestination-Protocol.h"
#import "NSFilePresenter-Protocol.h"

@class NSArray, NSMutableArray, NSObject, NSOperationQueue, NSString, NSTimer, NSURL, TSADragToInsertController, TSDPasteboardMultipleImportableDrawableProvider, TSDRep, TSSStylesheet, TSUTemporaryDirectory;
@protocol OS_dispatch_queue;

@interface TMACanvasViewController : TSWPMacCanvasViewController <NSFilePresenter, NSDraggingDestination>
{
    TSDRep *mDragAndDropHighlightedRep;
    BOOL mCanvasEditorShouldShowHighlight;
    BOOL mCanvasEditorCurrentlyShowingHighlight;
    TSUTemporaryDirectory *mPromisedFileDirectory;
    NSArray *mPromisedFilePaths;
    NSArray *mPromisedFileTypes;
    NSOperationQueue *mFilePromisesOperationQueue;
    BOOL mCancelledPromisedDrop;
    NSTimer *mPromisedFileObservationTimer;
    struct CGPoint mUnscaledFinalDropPoint;
    TSDPasteboardMultipleImportableDrawableProvider *mPromisedMultipleDrawableProvider;
    BOOL mDraggingEntered;
    BOOL mInfosAreReadyToBeInserted;
    BOOL mInfosJustBecameReadyToBeInserted;
    NSMutableArray *mInfosToBeInserted;
    TSDPasteboardMultipleImportableDrawableProvider *mImportableInfosToBeInsertedProvider;
    TSADragToInsertController *mDragToInsertController;
    NSObject<OS_dispatch_queue> *mInfosToBeInsertedAccessQueue;
    unsigned long long mPreviousDragOperation;
    struct CGPoint mPreviousDragPoint;
    unsigned long long mPreviousModifierFlags;
    TSSStylesheet *mTempStylesheet;
}

- (void)enqueueRolloverDisplayForAnnotation:(id)arg1 selectionPath:(id)arg2 withEvent:(id)arg3;
- (void)performDocumentActivityUsingBlock:(CDUnknownBlockType)arg1;
- (void)showHelpWithAPDID:(id)arg1;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)presentMediaCompatibilityAlertForUnsupportedMediaOfType:(long long)arg1 forSingleMediaObject:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)p_insertDroppedImportableDrawablesFromProviders:(id)arg1 atPoint:(struct CGPoint)arg2 onRep:(id)arg3;
- (BOOL)p_insertDroppedNativeDrawablesFromProviders:(id)arg1 atPoint:(struct CGPoint)arg2 onRep:(id)arg3;
- (void)p_hideDragAndDropHighlightOnCanvasEditor;
- (void)p_showDragAndDropHighlightForCanvasEditorWithOperation:(unsigned long long)arg1 atPoint:(struct CGPoint)arg2;
- (void)p_hideDragAndDropHighlightOnRep;
- (void)p_showDragAndDropHighlightForRep:(id)arg1 atPoint:(struct CGPoint)arg2 draggingInfo:(id)arg3;
- (unsigned long long)p_dragOperationForDragInsideWithDraggingInfo:(id)arg1;
- (id)p_repForReceivingDataFromSender:(id)arg1 atPoint:(struct CGPoint)arg2 withPromisedTypes:(id)arg3;
- (unsigned long long)p_dragOperationForSupportedDragOperations:(unsigned long long)arg1;
- (void)p_cleanupPromisedFileObservation;
- (void)p_finishImportingDragAndDropFilePromises;
- (void)p_cancelDragAndDropFilePromiseHandling;
- (id)p_promisedUTIsForPasteboard:(id)arg1;
- (void)p_cleanupEndOfDragOperation;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)p_forceInspectorsToCommit:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)firstResponderChangedOnCurrentEvent;
- (void)scrollViewDidScroll;
- (BOOL)canEditRepWithDragOperation:(id)arg1;
- (BOOL)canInsertDrawablesFromDragOperationForSender:(id)arg1;
- (BOOL)shouldAllowDragOperationForSender:(id)arg1;
- (void)teardown;
- (void)setView:(id)arg1;
- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (void)promptForAnnotationAuthorNameWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

