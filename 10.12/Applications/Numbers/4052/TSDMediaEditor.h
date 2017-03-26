//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDStyledDrawableEditor.h"

#import "TSDInfoImporterDelegate-Protocol.h"
#import "TSDKeyValueProxyVendingEditor-Protocol.h"

@class NSSet, NSString, TSDMediaInfo;

@interface TSDMediaEditor : TSDStyledDrawableEditor <TSDKeyValueProxyVendingEditor, TSDInfoImporterDelegate>
{
}

+ (Class)touchBarProviderClass;
+ (id)keysResolvedByKeyValueProxy;
- (BOOL)p_allSelectedInfosArePlaceholders;
- (void)updateStateForUserInterfaceItem:(id)arg1;
- (void)makeCurrentSelectionPlaceholder:(id)arg1;
- (void)infoImporter:(id)arg1 needsMediaCompatibilityOnAllDevicesRequirementForMediaType:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)p_replaceSelectedMediaWithInfoFromInfoImporter:(id)arg1 interactively:(BOOL)arg2 allowedTypes:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)p_replaceSelectedMediaWithFileAtURL:(id)arg1 interactively:(BOOL)arg2 allowedTypes:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)replaceSelectedMediaWithoutUIWithFileAtURL:(id)arg1 allowedTypes:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)replaceSelectedMediaWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replaceSelectedMediaWithData:(id)arg1;
- (void)replaceSelectedMediaWithFileAtURL:(id)arg1 allowedTypes:(id)arg2;
- (id)p_commandsToSwapConnectionsFromInfo:(id)arg1 infoMap:(id)arg2;
- (void)showMediaReplaceUI:(id)arg1;
- (void)resetSelectionToNaturalDataSize:(id)arg1;
- (void)resetSelectionToInsertedSize:(id)arg1;
- (void)p_resetSelectionToInsertedSize:(int)arg1;
- (BOOL)p_repCanResetMediaSize;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (id)selectedObjectsSupportingOpacity;
@property(readonly, nonatomic) TSDMediaInfo *firstMediaInfo;
@property(readonly, nonatomic) NSSet *mediaInfos;
- (id)tma_formatInspectorPaneIdentifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

