//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoFoundation/PFAction.h>

@interface PFAction (IPXAction_Extensions)
- (BOOL)userInitiated;
- (void)redoFromUndoManager:(id)arg1;
- (void)undoFromUndoManager:(id)arg1;
- (void)executeAndRegisterWithUndoManager:(id)arg1;
- (BOOL)_executeAndRegisterWithUndoManager:(id)arg1;
- (void)_unregisterFromUndoManager:(id)arg1;
- (void)_registerWithUndoManager:(id)arg1;
- (void)_performActionUndoRedoFromUndoManager:(id)arg1;
- (id)defaultActionName;
- (id)defaultActionNameLocalizationKey;
@end

