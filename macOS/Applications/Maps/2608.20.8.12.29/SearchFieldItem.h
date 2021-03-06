//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class AddressBookAddress, CRRecentContact, DirectionsWaypoint, ExternalURLQuery, GEOMapItemChildPlace, GEORelatedSearchSuggestion, GEORetainedSearchMetadata, GEOSearchCategory, HistoryEntryRecentsItem, MKLocalSearchCompletion, MKMapItem, NSData, NSString, PlaceCategoryItem, RoutePlanningWaypointRequest, SearchResult, VenueCategoryItem;

__attribute__((visibility("hidden")))
@interface SearchFieldItem : NSObject <NSCopying>
{
    int _engineType;
    NSString *_searchString;
    NSString *_completedQuery;
    SearchResult *_searchResult;
    MKLocalSearchCompletion *_completion;
    AddressBookAddress *_address;
    GEOSearchCategory *_searchCategory;
    VenueCategoryItem *_venueCategoryItem;
    PlaceCategoryItem *_placeCategoryItem;
    NSString *_filterString;
    HistoryEntryRecentsItem *_historyItem;
    CRRecentContact *_coreRecentContact;
    NSString *_addressString;
    NSString *_addressStringLabel;
    GEORelatedSearchSuggestion *_suggestion;
    ExternalURLQuery *_externalURLQuery;
    GEOMapItemChildPlace *_childPlace;
    NSData *_mapKitHandle;
    NSString *_mapKitHandleTitle;
    RoutePlanningWaypointRequest *_routePlanningWaypointRequest;
    NSString *_userTypedStringForRAP;
    GEORetainedSearchMetadata *_retainedSearchMetadata;
    struct CLLocationCoordinate2D _coordinateHint;
}

+ (id)searchFieldItemWithObject:(id)arg1 expandRecentsItem:(BOOL)arg2 preserveContact:(BOOL)arg3;
+ (id)searchFieldItemWithObject:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) GEORetainedSearchMetadata *retainedSearchMetadata; // @synthesize retainedSearchMetadata=_retainedSearchMetadata;
@property(copy, nonatomic) NSString *userTypedStringForRAP; // @synthesize userTypedStringForRAP=_userTypedStringForRAP;
@property(retain, nonatomic) RoutePlanningWaypointRequest *routePlanningWaypointRequest; // @synthesize routePlanningWaypointRequest=_routePlanningWaypointRequest;
@property(copy, nonatomic) NSString *mapKitHandleTitle; // @synthesize mapKitHandleTitle=_mapKitHandleTitle;
@property(copy, nonatomic) NSData *mapKitHandle; // @synthesize mapKitHandle=_mapKitHandle;
@property(retain, nonatomic) GEOMapItemChildPlace *childPlace; // @synthesize childPlace=_childPlace;
@property(retain, nonatomic) ExternalURLQuery *externalURLQuery; // @synthesize externalURLQuery=_externalURLQuery;
@property(retain, nonatomic) GEORelatedSearchSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(copy, nonatomic) NSString *addressStringLabel; // @synthesize addressStringLabel=_addressStringLabel;
@property(copy, nonatomic) NSString *addressString; // @synthesize addressString=_addressString;
@property(retain, nonatomic) CRRecentContact *coreRecentContact; // @synthesize coreRecentContact=_coreRecentContact;
@property(retain, nonatomic) HistoryEntryRecentsItem *historyItem; // @synthesize historyItem=_historyItem;
@property(nonatomic) int engineType; // @synthesize engineType=_engineType;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain, nonatomic) PlaceCategoryItem *placeCategoryItem; // @synthesize placeCategoryItem=_placeCategoryItem;
@property(retain, nonatomic) VenueCategoryItem *venueCategoryItem; // @synthesize venueCategoryItem=_venueCategoryItem;
@property(retain, nonatomic) GEOSearchCategory *searchCategory; // @synthesize searchCategory=_searchCategory;
@property(retain, nonatomic) AddressBookAddress *address; // @synthesize address=_address;
@property(retain, nonatomic) MKLocalSearchCompletion *completion; // @synthesize completion=_completion;
@property(retain, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, nonatomic) NSString *completedQuery; // @synthesize completedQuery=_completedQuery;
@property(nonatomic) struct CLLocationCoordinate2D coordinateHint; // @synthesize coordinateHint=_coordinateHint;
@property(readonly, nonatomic) MKMapItem *mapItemIfGeocoded;
- (BOOL)matchesWaypoint:(id)arg1;
@property(readonly, nonatomic) DirectionsWaypoint *waypointIfGeocoded;
@property(readonly, nonatomic) DirectionsWaypoint *waypoint;
- (id)description;
@property(readonly, nonatomic) BOOL behavesAsAtom;
@property(readonly, nonatomic) NSString *personalizedAddressName;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) GEOSearchCategory *currentCategory;
- (void)setSearchString:(id)arg1 forCompletedQuery:(id)arg2;
@property(readonly, nonatomic) NSString *originalSearchString;
- (BOOL)isEquivalentAsWaypointToSearchFieldItem:(id)arg1;
- (BOOL)isEqualToSearchFieldItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (void)dealloc;
@property(readonly, nonatomic) NSString *title;

@end

