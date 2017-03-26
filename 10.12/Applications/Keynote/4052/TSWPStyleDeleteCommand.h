//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPStyleBaseCommand.h"

@interface TSWPStyleDeleteCommand : TSWPStyleBaseCommand
{
    unsigned long long _oldPresetIndex;
}

@property(readonly, nonatomic) unsigned long long oldPresetIndex; // @synthesize oldPresetIndex=_oldPresetIndex;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)p_CommitAndRedo;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromMessage:(const struct StyleDeleteCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToMessage:(struct StyleDeleteCommandArchive *)arg1 archiver:(id)arg2;
- (id)actionString;
- (id)initWithTheme:(id)arg1 style:(id)arg2;

@end

