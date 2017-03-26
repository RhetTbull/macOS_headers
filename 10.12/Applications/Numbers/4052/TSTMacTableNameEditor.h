//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableNameEditor.h"

#import "TSDKeyValueProxyVendingEditor-Protocol.h"
#import "TSDMacTouchBarAwareEditor-Protocol.h"

@class NSString, TSTMacTableEditor, TSTMacTableNameTouchBarProvider, TSTTableNameCommandPushingProxy;

@interface TSTMacTableNameEditor : TSTTableNameEditor <TSDMacTouchBarAwareEditor, TSDKeyValueProxyVendingEditor>
{
    TSTTableNameCommandPushingProxy *mCommandPushingProxy;
    TSTMacTableNameTouchBarProvider *mTouchBarProvider;
}

+ (id)keysResolvedByKeyValueProxy;
@property(retain, nonatomic) TSTMacTableNameTouchBarProvider *touchBarProvider; // @synthesize touchBarProvider=mTouchBarProvider;
@property(readonly, nonatomic) TSTMacTableEditor *macTableEditor;
- (void)addColumnsAfterFromContextMenu:(id)arg1;
- (void)addColumnsBeforeFromContextMenu:(id)arg1;
- (void)addRowsBelowFromContextMenu:(id)arg1;
- (void)addRowAboveFromContextMenu:(id)arg1;
- (void)addContextualMenuItemsToMenu:(id)arg1 clickAtPoint:(struct CGPoint)arg2 withEvent:(id)arg3;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (void)p_updateMenuStateForCapsAction:(SEL)arg1 withMenuItem:(id)arg2;
- (void)p_updateMenuStateForLigatureAction:(SEL)arg1 withMenuItem:(id)arg2;
- (void)p_updateMenuStateForAlignmentAction:(SEL)arg1 withMenuItem:(id)arg2;
- (void)updateStateForUserInterfaceItem:(id)arg1;
- (void)willResignCurrentEditor;
- (void)willEnterTableNameTextEditing;
- (id)selectedObjectsSupportingTextInset;
- (id)textContainerProxies;
- (id)paragraphSelectionProxies;
- (id)paragraphSelectionProxy;
- (id)characterSelectionProxies;
- (id)characterSelectionProxy;
- (id)keyValueProxy;
@property(readonly, nonatomic) BOOL wantsTextInspectorSelected;
- (void)dealloc;
- (id)commandPushingProxy;
- (id)tma_formatInspectorPaneSelectedPaneIdentifierForIdentifiers:(id)arg1 previousIdentifier:(id)arg2 editorsDidChange:(BOOL)arg3 newCanvasObject:(BOOL)arg4;
- (BOOL)tma_formatInspectorPanesShouldContinueEditorStackTraversal;
- (id)tma_formatInspectorPaneIdentifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

