//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDPropagatableCommand-Protocol.h"

@class NSString, TSSStyle, TSSTheme;
@protocol TSSPreset;

@interface TSSThemeReplaceStylePresetAndDisconnectStylesCommand : TSKCommand <GSSPAutoEncodable, TSDPropagatableCommand>
{
    TSSStyle *_preset;
    TSSStyle *_replacementPreset;
}

- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)makeInverse;
- (void)rollback;
- (BOOL)supportsCollaboration;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)p_replacePreset:(id)arg1 withPreset:(id)arg2;
- (BOOL)process;
@property(readonly, nonatomic) TSSStyle<TSSPreset> *replacementPreset;
@property(readonly, nonatomic) TSSStyle<TSSPreset> *preset;
- (id)p_presetStyleFromStyleMember:(id)arg1;
@property(readonly, nonatomic) TSSTheme *theme;
- (id)actionString;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 preset:(id)arg2 replacementPreset:(id)arg3;
- (void)populateGSSPCmdThemeReplaceStylePresetAndDisconnectStyles:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (BOOL)modifiesAnyObjectPassingTest:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

