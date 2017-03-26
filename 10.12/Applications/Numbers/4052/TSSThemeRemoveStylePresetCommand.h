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

@interface TSSThemeRemoveStylePresetCommand : TSKCommand <TSDPropagatableCommand, GSSPAutoEncodable>
{
    TSSStyle *_preset;
    TSSStyle *_replacementPreset;
    TSSTheme *_theme;
    unsigned long long _presetIndex;
    NSString *_presetKind;
    NSString *_identifier;
}

- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)didInitFromSOS;
- (id)makeInverse;
- (void)p_removePreset;
- (void)p_addPreset;
- (void)redo;
- (void)undo;
- (void)commit;
@property(readonly, nonatomic) TSSStyle<TSSPreset> *preset;
@property(readonly, nonatomic) TSSStyle<TSSPreset> *replacementPreset;
- (id)p_presetStyleFromStyleMember:(id)arg1;
- (BOOL)process;
- (id)actionString;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 preset:(id)arg2;
- (id)initWithTheme:(id)arg1 preset:(id)arg2 replacementPreset:(id)arg3;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (BOOL)modifiesAnyObjectPassingTest:(CDUnknownBlockType)arg1;
- (void)populateGSSPCmdThemeRemoveStylePreset:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

