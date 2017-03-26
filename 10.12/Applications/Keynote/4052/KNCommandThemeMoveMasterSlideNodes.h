//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

@class KNTheme, NSArray, NSIndexSet, TSUPointerKeyDictionary;

@interface KNCommandThemeMoveMasterSlideNodes : TSKCommand
{
    KNTheme *mTheme;
    NSArray *mMasterSlides;
    TSUPointerKeyDictionary *mPreviousIndexMap;
    NSArray *mFinalMasterArrangement;
    NSIndexSet *mTargetIndexes;
}

@property(readonly, nonatomic) NSIndexSet *targetIndexes; // @synthesize targetIndexes=mTargetIndexes;
- (unsigned long long)previousIndexForMasterSlideNode:(id)arg1;
- (unsigned long long)targetIndexForMasterSlideNode:(id)arg1;
- (id)actionString;
- (void)undo;
- (void)p_doRedo;
- (void)redo;
- (void)commit;
- (BOOL)process;
- (void)p_preprocessWithDropIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 masterIndexes:(id)arg2 dropIndex:(unsigned long long)arg3;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct CommandMoveMastersArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct CommandMoveMastersArchive *)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;

@end

