//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMATemplateManagerBaseViewController.h"

#import "NSTextFieldDelegate-Protocol.h"
#import "TMACollectionViewDataSource-Protocol.h"
#import "TMACollectionViewDelegate-Protocol.h"
#import "TMAUserTemplateEditingDelegate-Protocol.h"

@class NSMapTable, NSString, TMATemplateManagerCategoryItem, TSATemplateInfo;
@protocol TMATemplateManagerViewControllerDelegate;

@interface TMATemplateManagerViewController : TMATemplateManagerBaseViewController <TMACollectionViewDataSource, TMACollectionViewDelegate, NSTextFieldDelegate, TMAUserTemplateEditingDelegate>
{
    id <TMATemplateManagerViewControllerDelegate> _delegate;
    TMATemplateManagerCategoryItem *_allCategoryItem;
    NSMapTable *_filteredIndexSetToIndexPath;
    BOOL _needsReloadTemplates;
    NSMapTable *_imageCache;
    BOOL _suspendReloadDataOnCategoryChange;
    unsigned long long _currentTemplateCategoryIndex;
    unsigned long long _currentTemplateVariantIndex;
}

@property(nonatomic) unsigned long long currentTemplateVariantIndex; // @synthesize currentTemplateVariantIndex=_currentTemplateVariantIndex;
@property(nonatomic) unsigned long long currentTemplateCategoryIndex; // @synthesize currentTemplateCategoryIndex=_currentTemplateCategoryIndex;
- (void)_presentAlertWithMessageText:(id)arg1 informativeText:(id)arg2 firstButtonLabel:(id)arg3 secondButtonLabel:(id)arg4 thenContinue:(CDUnknownBlockType)arg5;
- (id)_templateCategoryItemsFromTemplates:(id)arg1 parentIndexPath:(id)arg2;
- (id)_templateCategoryItemsFromCategories:(id)arg1 parentIndexPath:(id)arg2;
- (id)_templateCategoryItemChildrenFromCategory:(id)arg1 parentIndexPath:(id)arg2;
- (void)resetSelectedTemplateInfo;
- (void)reloadData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)userTemplateCellDidEndEditing:(id)arg1 proposedName:(id)arg2;
- (BOOL)validateTemplateName:(id)arg1 forCell:(id)arg2;
- (void)collectionView:(id)arg1 didCancelEditingCell:(id)arg2;
- (void)collectionView:(id)arg1 willEndEditingCell:(id)arg2;
- (void)collectionView:(id)arg1 didBeginEditingCell:(id)arg2;
- (BOOL)collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 canDeleteItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 contextMenuForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didChooseItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 canSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldShowHeaderViewForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 itemSizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 maxItemSizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minVerticalSpacingForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minHorizontalSpacingForItemAtIndexPath:(id)arg3;
- (struct NSEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 edgeInsetsForItemAtIndexPath:(id)arg3;
- (struct CGSize)maxImageSize;
- (id)_gridConfiguration;
- (void)collectionView:(id)arg1 deleteItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 itemAtIndexPath:(id)arg2;
- (unsigned long long)collectionView:(id)arg1 numberOfItemsForIndexPath:(id)arg2;
- (id)_childForItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_indexPathForFirstTemplateItem;
- (unsigned long long)_indexSet:(id)arg1 indexAtPosition:(unsigned long long)arg2;
- (unsigned long long)_numberOfChildrenForItem:(id)arg1;
- (id)_childrenForItem:(id)arg1;
- (id)_indexPathOfTemplateItemWithName:(id)arg1 inCategoryItem:(id)arg2 parentIndexPath:(id)arg3;
- (void)selectUserTemplateWithURL:(id)arg1 editing:(BOOL)arg2;
@property(readonly, nonatomic) TSATemplateInfo *selectedTemplateInfo;
- (void)dealloc;
- (id)initWithCollectionViewLayout:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

