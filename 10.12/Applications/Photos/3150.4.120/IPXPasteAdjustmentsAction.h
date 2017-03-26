//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXRenderChangeAction.h"

@class IPAPhotoAdjustmentStack, NSMapTable;

@interface IPXPasteAdjustmentsAction : IPXRenderChangeAction
{
    IPAPhotoAdjustmentStack *_copiedAdjustmentStack;
    NSMapTable *_savedDescriptions;
}

+ (id)sharedAdjustmentPasteboardController;
+ (void)clearAdjustmentsPasteboard;
+ (void)pasteToPrimarySelection:(id)arg1 undoManager:(id)arg2;
+ (void)copyFromImageItemController:(id)arg1;
+ (id)_stripDisabledOperationsFromDescription:(id)arg1;
+ (void)copyFromPrimarySelection:(id)arg1 viewerController:(id)arg2;
+ (BOOL)canPasteToVersion:(id)arg1 viewerItemController:(id)arg2;
+ (BOOL)canPasteToVersion:(id)arg1 viewerController:(id)arg2;
+ (BOOL)canCopyFromVersion:(id)arg1 imageItemController:(id)arg2;
+ (BOOL)canCopyFromVersion:(id)arg1 viewerController:(id)arg2;
- (void).cxx_destruct;
- (int)performRenderChange:(id)arg1;
- (id)_filterAdjustmentStack:(id)arg1 padec:(id)arg2;
- (id)defaultActionName;
- (id)initWithAdjustmentStack:(id)arg1 versions:(id)arg2;

@end

