//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSTreeController;

@interface FolderTreeGenerator : NSObject
{
    NSTreeController *_backingController;
    NSArray *_backingContent;
}

+ (id)_persistentFolderSortDescriptors;
+ (id)_accountSectionSortDescriptors;
+ (id)keyPathsForValuesAffectingTreeNodes;
@property(retain, nonatomic) NSArray *backingContent; // @synthesize backingContent=_backingContent;
@property(retain, nonatomic) NSTreeController *backingController; // @synthesize backingController=_backingController;
- (void).cxx_destruct;
- (id)_treeNodesFromBackingFolders:(id)arg1;
- (void)_populateTreeFromBackingStore;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly) __weak NSArray *treeNodes;
- (void)_objectsChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

