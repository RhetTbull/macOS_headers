//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

@class KNSlideNode, KNTheme, NSArray, TSAStyleMapper;

@interface KNCommandThemeInsertMasterSlideNode : TSKCommand
{
    KNSlideNode *mMasterSlideNode;
    KNTheme *mTheme;
    unsigned long long mInsertionIndex;
    BOOL mMasterWasInsertedWithDrop;
    TSAStyleMapper *mStyleMapper;
    NSArray *mPreviousClassicThemeRecords;
    NSArray *mAddedCustomFormatKeys;
}

@property(readonly, nonatomic) BOOL masterWasInsertedWithDrop; // @synthesize masterWasInsertedWithDrop=mMasterWasInsertedWithDrop;
@property(readonly, nonatomic) unsigned long long insertionIndex; // @synthesize insertionIndex=mInsertionIndex;
@property(readonly, nonatomic) KNSlideNode *masterSlideNode; // @synthesize masterSlideNode=mMasterSlideNode;
- (id)insertionContext;
- (id)drawablesForSlides;
- (void)undo;
- (void)redo;
- (void)commit;
- (BOOL)process;
- (id)actionString;
- (void)dealloc;
- (id)initWithMasterSlideNode:(id)arg1 theme:(id)arg2 slideNodeToInsertAfter:(id)arg3;
- (id)initWithMasterSlideNode:(id)arg1 theme:(id)arg2 atIndex:(unsigned long long)arg3 styleMapper:(id)arg4;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct CommandInsertMasterArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct CommandInsertMasterArchive *)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;

@end

