//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXEditAction.h"

__attribute__((visibility("hidden")))
@interface IPXRevertToOriginalAction : IPXEditAction
{
}

+ (BOOL)canPerformWithAsset:(id)arg1;
- (BOOL)needsConfirmation;
- (void)showExternalEditAlertIfNeededForExternalEditController:(id)arg1 inWindow:(id)arg2 onContinueExecuteAndRegisterWithUndoManager:(id)arg3;
- (int)performPlaybackChange:(id)arg1;
- (void)performActionWithImageItemController:(id)arg1;
- (void)performRenderChange:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)defaultActionNameLocalizationKey;

@end

