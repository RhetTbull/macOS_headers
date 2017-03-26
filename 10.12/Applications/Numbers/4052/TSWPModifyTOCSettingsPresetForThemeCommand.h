//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPModifyTOCSettingsBaseCommand.h"

@class TSSTheme;

@interface TSWPModifyTOCSettingsPresetForThemeCommand : TSWPModifyTOCSettingsBaseCommand
{
    TSSTheme *_theme;
    unsigned long long _presetIndex;
    BOOL _coalesceable;
}

@property(nonatomic) unsigned long long presetIndex; // @synthesize presetIndex=_presetIndex;
@property(retain, nonatomic) TSSTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) BOOL coalesceable; // @synthesize coalesceable=_coalesceable;
- (id)initFromUnarchiver:(id)arg1;
- (const struct ModifyTOCSettingsBaseCommandArchive *)tocCommandArchiveFromUnarchiver:(id)arg1;
- (void)loadFromMessage:(const struct ModifyTOCSettingsPresetForThemeCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToMessage:(struct ModifyTOCSettingsPresetForThemeCommandArchive *)arg1 archiver:(id)arg2;
- (void)redo;
- (void)undo;
- (void)p_undoRedo;
- (void)commit;
- (BOOL)process;
- (void)coalesceWithCommand:(id)arg1 coalescingKind:(long long)arg2;
- (BOOL)canCoalesceWithCommand:(id)arg1 coalescingKind:(long long)arg2;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 presetIndex:(unsigned long long)arg2 tocSettings:(id)arg3 coalesceable:(BOOL)arg4;
- (id)initWithTheme:(id)arg1 presetIndex:(unsigned long long)arg2 tocSettings:(id)arg3;

@end

