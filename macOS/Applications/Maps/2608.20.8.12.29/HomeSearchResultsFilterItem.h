//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MapsUIDiffableDataSourceIdentifiable-Protocol.h"
#import "SmallDropDownOutlineCellDelegate-Protocol.h"

@class GEORelatedSearchSuggestion, NSArray, NSString, SmallDropDownOutlineCellModel;
@protocol HomeSearchResultsFilterItemDelegate;

__attribute__((visibility("hidden")))
@interface HomeSearchResultsFilterItem : NSObject <SmallDropDownOutlineCellDelegate, MapsUIDiffableDataSourceIdentifiable>
{
    NSArray *_suggestions;
    GEORelatedSearchSuggestion *_currentSuggestion;
    id <HomeSearchResultsFilterItemDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <HomeSearchResultsFilterItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GEORelatedSearchSuggestion *currentSuggestion; // @synthesize currentSuggestion=_currentSuggestion;
@property(readonly, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
- (void)smallDropDownOutlineCell:(id)arg1 didSelectItemAtIndex:(long long)arg2;
@property(readonly, nonatomic) SmallDropDownOutlineCellModel *cellModel;
@property(readonly, nonatomic) NSString *_maps_diffableDataSourceIdentifier;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithSuggestions:(id)arg1 currentSuggestion:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

