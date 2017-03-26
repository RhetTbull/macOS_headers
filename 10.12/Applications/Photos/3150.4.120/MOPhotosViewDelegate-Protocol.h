//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MOMediaSection, MOMediaViewSupplementary, MOPhotosView, NSArray, NSAttributedString, NSDictionary, NSDraggingItem, NSDraggingSession, NSEvent, NSFilePromiseProvider, NSImage, NSIndexPath, NSOperationQueue, NSString, NSURL;
@protocol NSDraggingInfo;

@protocol MOPhotosViewDelegate <NSObject>

@optional
- (void)photosView:(MOPhotosView *)arg1 filePromiseProvider:(NSFilePromiseProvider *)arg2 writePromiseToURL:(NSURL *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (NSOperationQueue *)photosView:(MOPhotosView *)arg1 promiseOperationQueueForFilePromiseProvider:(NSFilePromiseProvider *)arg2;
- (NSString *)photosView:(MOPhotosView *)arg1 filePromiseProvider:(NSFilePromiseProvider *)arg2 fileNameForType:(NSString *)arg3 destinationLocation:(NSURL *)arg4;
- (void)photosView:(MOPhotosView *)arg1 draggingEnded:(id <NSDraggingInfo>)arg2;
- (void)photosView:(MOPhotosView *)arg1 draggingExited:(id <NSDraggingInfo>)arg2;
- (unsigned long long)photosView:(MOPhotosView *)arg1 draggingUpdated:(id <NSDraggingInfo>)arg2;
- (unsigned long long)photosView:(MOPhotosView *)arg1 draggingEntered:(id <NSDraggingInfo>)arg2;
- (BOOL)photosView:(MOPhotosView *)arg1 performDragOperation:(id <NSDraggingInfo>)arg2;
- (BOOL)photosView:(MOPhotosView *)arg1 prepareForDragOperation:(id <NSDraggingInfo>)arg2;
- (void)photosView:(MOPhotosView *)arg1 draggingSession:(NSDraggingSession *)arg2 endedAtPoint:(struct CGPoint)arg3 dragOperation:(unsigned long long)arg4;
- (void)photosView:(MOPhotosView *)arg1 draggingSession:(NSDraggingSession *)arg2 movedToPoint:(struct CGPoint)arg3;
- (void)photosView:(MOPhotosView *)arg1 draggingSession:(NSDraggingSession *)arg2 willBeginAtPoint:(struct CGPoint)arg3;
- (unsigned long long)photosView:(MOPhotosView *)arg1 draggingSession:(NSDraggingSession *)arg2 sourceOperationMaskForDraggingContext:(long long)arg3;
- (NSArray *)photosView:(MOPhotosView *)arg1 namesOfPromisedFilesForItemsAtIndexPaths:(NSArray *)arg2 dropDestination:(NSURL *)arg3;
- (void)photosView:(MOPhotosView *)arg1 createdDraggingSession:(NSDraggingSession *)arg2 forItemsAtIndexPaths:(NSArray *)arg3;
- (NSArray *)photosView:(MOPhotosView *)arg1 draggedTypesForIndexPaths:(NSArray *)arg2;
- (BOOL)photosViewShouldUseFilePromises:(MOPhotosView *)arg1;
- (NSDraggingItem *)photosView:(MOPhotosView *)arg1 draggingItemForIndexPath:(NSIndexPath *)arg2 proposedDraggingItem:(NSDraggingItem *)arg3;
- (NSDictionary *)photosView:(MOPhotosView *)arg1 promiseDictionaryForDraggedItemAtIndexPath:(NSIndexPath *)arg2;
- (NSImage *)photosView:(MOPhotosView *)arg1 imageForDraggedItemAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)photosView:(MOPhotosView *)arg1 canMoveItemsAtIndexPaths:(NSArray *)arg2;
- (void)photosView:(MOPhotosView *)arg1 didEndScrollingInMode:(unsigned long long)arg2;
- (void)photosView:(MOPhotosView *)arg1 didScrollInMode:(unsigned long long)arg2;
- (void)photosView:(MOPhotosView *)arg1 willBeginScrollingInMode:(unsigned long long)arg2;
- (void)photosView:(MOPhotosView *)arg1 mode:(unsigned long long)arg2 visibleMediaItemsHaveChanged:(NSArray *)arg3 prefetchMediaItems:(NSArray *)arg4;
- (void)photosView:(MOPhotosView *)arg1 mode:(unsigned long long)arg2 mouseExitedSectionIndex:(long long)arg3 withEvent:(NSEvent *)arg4;
- (void)photosView:(MOPhotosView *)arg1 mode:(unsigned long long)arg2 mouseEnteredSectionIndex:(long long)arg3 withEvent:(NSEvent *)arg4;
- (void)photosViewDidExitModalSelectionMode:(MOPhotosView *)arg1;
- (void)photosViewWillExitModalSelectionMode:(MOPhotosView *)arg1;
- (void)photosViewDidEnterModalSelectionMode:(MOPhotosView *)arg1;
- (void)photosViewWillEnterModalSelectionMode:(MOPhotosView *)arg1;
- (void)photosView:(MOPhotosView *)arg1 selectionDidChangeForMode:(unsigned long long)arg2;
- (void)photosView:(MOPhotosView *)arg1 selectionWillChangeForMode:(unsigned long long)arg2;
- (BOOL)photosView:(MOPhotosView *)arg1 shouldShowMainFooterForMode:(unsigned long long)arg2 includingWhenInBounds:(char *)arg3;
- (NSAttributedString *)photosView:(MOPhotosView *)arg1 footerSubtitleForMode:(unsigned long long)arg2;
- (NSAttributedString *)photosView:(MOPhotosView *)arg1 footerTitleForMode:(unsigned long long)arg2;
- (void)photosView:(MOPhotosView *)arg1 willUpdateSupplementaryView:(MOMediaViewSupplementary *)arg2 ofKind:(NSString *)arg3 withMediaSection:(MOMediaSection *)arg4 atIndexPath:(NSIndexPath *)arg5 inMode:(unsigned long long)arg6;
- (BOOL)photosView:(MOPhotosView *)arg1 magnifyWithEvent:(NSEvent *)arg2;
- (void)photosView:(MOPhotosView *)arg1 mode:(unsigned long long)arg2 itemWasRightClickedAtIndexPath:(NSIndexPath *)arg3 withEvent:(NSEvent *)arg4;
- (void)photosView:(MOPhotosView *)arg1 mode:(unsigned long long)arg2 itemWasDoubleClickedAtIndexPath:(NSIndexPath *)arg3 withEvent:(NSEvent *)arg4;
- (void)photosView:(MOPhotosView *)arg1 mode:(unsigned long long)arg2 backgroundWasClickedWithEvent:(NSEvent *)arg3;
- (void)photosView:(MOPhotosView *)arg1 mode:(unsigned long long)arg2 mouseDownWithEvent:(NSEvent *)arg3;
- (void)photosView:(MOPhotosView *)arg1 didSwitchFromMode:(unsigned long long)arg2;
- (void)photosView:(MOPhotosView *)arg1 willSwitchToMode:(unsigned long long)arg2;
- (BOOL)photosView:(MOPhotosView *)arg1 canSwitchToMode:(unsigned long long)arg2;
- (NSArray *)photosView:(MOPhotosView *)arg1 indexPathsForMediaItems:(NSArray *)arg2 inMode:(unsigned long long)arg3;
- (NSIndexPath *)photosView:(MOPhotosView *)arg1 targetPivotIndexPathInMode:(unsigned long long)arg2 forIndexPath:(NSIndexPath *)arg3 inMode:(unsigned long long)arg4 accurate:(BOOL)arg5;
- (NSIndexPath *)photosView:(MOPhotosView *)arg1 initialIndexPathForMode:(unsigned long long)arg2;
@end

