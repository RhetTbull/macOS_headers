//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CollectionsFilterViewModel, UILabel;

__attribute__((visibility("hidden")))
@interface CollectionsFilterCell : UICollectionViewCell
{
    UILabel *_filterLabel;
    CollectionsFilterViewModel *_viewModel;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) CollectionsFilterViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *filterLabel; // @synthesize filterLabel=_filterLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateUI;
- (void)setUpUnselectedShadows;
- (void)setUpSelectedShadows;
- (void)setUpCornerRadius;
- (void)setupConstraints;
- (void)setFilterLabel;
- (void)setupSubviews;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

