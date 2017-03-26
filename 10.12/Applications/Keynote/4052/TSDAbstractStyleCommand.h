//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDInfoCommand.h"

@class NSString, TSDStyledInfo, TSSStyle, TSSStylesheet;

@interface TSDAbstractStyleCommand : TSDInfoCommand
{
}

- (void)saveToArchive:(struct AbstractStyleCommandArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct AbstractStyleCommandArchive *)arg1 unarchiver:(id)arg2;
- (id)subclassInitFromUnarchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)transformWithOperationTransformer:(id)arg1;
- (id)operations;
- (id)p_updateStyleOperation;
@property(readonly, nonatomic) NSString *stylePropertyName;
- (id)makeInverse;
- (void)rollback;
- (void)redo;
- (void)undo;
@property(readonly, nonatomic) TSSStyle *rollbackStyle;
@property(readonly, retain, nonatomic) TSSStyle *style;
- (void)setRollbackStyle;
- (void)setNewStyle;
- (void)p_setStyle:(id)arg1;
- (void)commit;
- (BOOL)process;
@property(readonly, nonatomic) TSSStylesheet *stylesheetForNewStyle;
@property(readonly, nonatomic) TSDStyledInfo *styledInfo;

@end

