//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSCollectionViewDataSource.h"
#import "NSCollectionViewDelegate.h"

@class HRGIFProperties, NSArray, NSCollectionView, NSDictionary, NSMutableArray, NSProgressIndicator, NSString, NSTextField;

@interface HRStickersController : NSViewController <NSCollectionViewDelegate, NSCollectionViewDataSource>
{
    NSCollectionView *_collectionView;
    NSProgressIndicator *_searchIndicator;
    NSTextField *_infoLabel;
    HRGIFProperties *_gifProperties;
    NSMutableArray *_stickers;
    NSString *_searchTerm;
    NSArray *_packages;
    NSDictionary *_selectedPackage;
    struct CGRect _currentBounds;
}

@property(retain, nonatomic) NSDictionary *selectedPackage; // @synthesize selectedPackage=_selectedPackage;
@property(retain, nonatomic) NSArray *packages; // @synthesize packages=_packages;
@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) NSMutableArray *stickers; // @synthesize stickers=_stickers;
@property(nonatomic) struct CGRect currentBounds; // @synthesize currentBounds=_currentBounds;
@property(nonatomic) __weak HRGIFProperties *gifProperties; // @synthesize gifProperties=_gifProperties;
@property(nonatomic) __weak NSTextField *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak NSProgressIndicator *searchIndicator; // @synthesize searchIndicator=_searchIndicator;
@property(nonatomic) __weak NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)getTagsFrom:(id)arg1;
- (id)getURLsFrom:(id)arg1;
- (id)processTagResults:(id)arg1;
- (id)processSearchResults:(id)arg1;
- (void)updateStickerView;
- (void)updateGfycatTags;
- (void)centerSticker:(id)arg1;
- (void)chooseSticker:(id)arg1;
- (void)queryWith:(id)arg1;
- (void)browse:(id)arg1;
- (void)search:(id)arg1;
@property(readonly, nonatomic) NSDictionary *searchQuery;
@property(readonly, nonatomic) NSDictionary *tagQuery;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)displayInitialStickers;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

