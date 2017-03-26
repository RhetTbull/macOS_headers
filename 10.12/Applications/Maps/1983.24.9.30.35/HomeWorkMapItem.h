//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PersonalizedAutocompleteItem-Protocol.h"
#import "PersonalizedItem-Protocol.h"

@class AddressBookAddress, MKMapItem, MapsLocationOfInterest, NSArray, NSDate, NSSet, NSString, ParkedCar, PersonalizedItemPrioritizedStringAdornment, PersonalizedItemSource, PersonalizedItemStyleAttributesAdornment, SearchResult;

__attribute__((visibility("hidden")))
@interface HomeWorkMapItem : NSObject <PersonalizedItem, PersonalizedAutocompleteItem>
{
    NSArray *_autocompletionStrings;
    BOOL _shouldBeHiddenFromMap;
    NSSet *_keys;
    PersonalizedItemSource *source;
    MKMapItem *_mapItem;
    unsigned long long _poiType;
    AddressBookAddress *_address;
    PersonalizedItemPrioritizedStringAdornment *_title;
    PersonalizedItemPrioritizedStringAdornment *_subtitle;
}

@property(nonatomic) BOOL shouldBeHiddenFromMap; // @synthesize shouldBeHiddenFromMap=_shouldBeHiddenFromMap;
@property(retain, nonatomic) PersonalizedItemPrioritizedStringAdornment *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) PersonalizedItemPrioritizedStringAdornment *title; // @synthesize title=_title;
@property(readonly, nonatomic) AddressBookAddress *address; // @synthesize address=_address;
@property unsigned long long poiType; // @synthesize poiType=_poiType;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) __weak PersonalizedItemSource *source; // @synthesize source;
@property(retain, nonatomic) NSSet *keys; // @synthesize keys=_keys;
- (void).cxx_destruct;
@property(readonly, nonatomic) id autocompleteObject;
@property(readonly, nonatomic) NSArray *autocompletionStrings;
@property(readonly, nonatomic) long long autocompleteOrder;
@property(readonly, nonatomic) long long autocompleteCategoryPriority;
@property(readonly, nonatomic) NSArray *searchableStrings;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly, nonatomic) BOOL mustRefineMapItem;
@property(readonly, nonatomic) SearchResult *searchResult;
@property(readonly, nonatomic) BOOL showsBalloonCallout;
@property(readonly, nonatomic) BOOL shouldBeClustered;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *prefix;
@property(readonly, nonatomic) unsigned long long sortOrder;
@property(readonly, nonatomic) PersonalizedItemStyleAttributesAdornment *styleAttributes;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (BOOL)isBusiness;
@property(readonly, nonatomic) unsigned long long priority;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isRouteStartOrEnd;
@property(readonly, nonatomic) MapsLocationOfInterest *locationOfInterest;
@property(readonly, nonatomic) BOOL needsToPreserveSelection;
@property(readonly, nonatomic) ParkedCar *parkedCar;
@property(readonly) Class superclass;

@end

