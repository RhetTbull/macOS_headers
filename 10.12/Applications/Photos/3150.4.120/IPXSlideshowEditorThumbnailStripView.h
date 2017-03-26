//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXCollectionsView.h"

#import "NSDraggingDestination-Protocol.h"
#import "NSDraggingSource-Protocol.h"

@class IPXSlideshowEditorThumbnailStripLayout, NSDraggingSession, NSIndexPath, NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSObject, NSString;
@protocol IPXSlideshowEditorThumbnailStripViewDelegate, OS_dispatch_semaphore;

@interface IPXSlideshowEditorThumbnailStripView : IPXCollectionsView <NSDraggingSource, NSDraggingDestination>
{
    NSMutableIndexSet *_selectedSectionIndices;
    NSMutableDictionary *_selectedSectionViews;
    double _lastestDragTimeStamp;
    unsigned long long _dragPosition;
    long long _abortedDragEventNumber;
    IPXSlideshowEditorThumbnailStripLayout *_layoutForDragging;
    IPXSlideshowEditorThumbnailStripLayout *_originalLayoutWhenDragging;
    NSDraggingSession *_draggingSession;
    NSIndexPath *_dragDestinationIndexPath;
    BOOL _dragAfterDestination;
    NSObject<OS_dispatch_semaphore> *_animationSemaphore;
    BOOL _needsToRestoreLayout;
}

- (void).cxx_destruct;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (id)accessibilityChildren;
- (void)restoreLayoutAfterDraggingWithCompletion:(CDUnknownBlockType)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)ignoreModifierKeysForDraggingSession:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)mouseDragged:(id)arg1;
- (id)createImageNumberBadge:(unsigned long long)arg1;
- (void)mouseDown:(id)arg1;
- (void)_updateSelectedSectionViews;
- (void)deselectAllSections;
- (void)deselectSectionsAtIndices:(id)arg1;
- (void)deselectSectionAtIndex:(unsigned long long)arg1;
- (void)selectSectionsAtIndices:(id)arg1;
- (void)selectSectionAtIndex:(unsigned long long)arg1;
@property(copy, nonatomic) NSIndexSet *selectedSectionIndices; // @synthesize selectedSectionIndices=_selectedSectionIndices;
- (id)snapshotOfSection:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <IPXSlideshowEditorThumbnailStripViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

