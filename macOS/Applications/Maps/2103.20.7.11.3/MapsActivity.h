//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class DirectionsPlan, GEOMapItemStorage, GEOSearchCategoryStorage, GEOURLOptions, MSPDroppedPin, MSPTransitStorageLineItem, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MapsActivity : PBCodable <NSCopying>
{
    unsigned long long _selectedPlaceIndex;
    unsigned long long _selectedTransitFeatureID;
    int _collectionsMode;
    DirectionsPlan *_directionsPlan;
    GEOURLOptions *_displayOptions;
    MSPDroppedPin *_droppedPin;
    MSPTransitStorageLineItem *_lineItem;
    GEOMapItemStorage *_presentedMapItem;
    GEOSearchCategoryStorage *_searchCategoryStorage;
    NSMutableArray *_searchPlaces;
    NSString *_searchString;
    NSString *_selectedTransitLineName;
    BOOL _isDroppedPinPresented;
    BOOL _isDroppedPinSelected;
    BOOL _isPresentingSelectedPlace;
    struct {
        unsigned int selectedPlaceIndex:1;
        unsigned int selectedTransitFeatureID:1;
        unsigned int collectionsMode:1;
        unsigned int isDroppedPinPresented:1;
        unsigned int isDroppedPinSelected:1;
        unsigned int isPresentingSelectedPlace:1;
    } _has;
}

+ (Class)searchPlacesType;
@property(retain, nonatomic) MSPTransitStorageLineItem *lineItem; // @synthesize lineItem=_lineItem;
@property(retain, nonatomic) NSString *selectedTransitLineName; // @synthesize selectedTransitLineName=_selectedTransitLineName;
@property(nonatomic) unsigned long long selectedTransitFeatureID; // @synthesize selectedTransitFeatureID=_selectedTransitFeatureID;
@property(retain, nonatomic) GEOSearchCategoryStorage *searchCategoryStorage; // @synthesize searchCategoryStorage=_searchCategoryStorage;
@property(retain, nonatomic) GEOMapItemStorage *presentedMapItem; // @synthesize presentedMapItem=_presentedMapItem;
@property(nonatomic) BOOL isDroppedPinPresented; // @synthesize isDroppedPinPresented=_isDroppedPinPresented;
@property(nonatomic) BOOL isDroppedPinSelected; // @synthesize isDroppedPinSelected=_isDroppedPinSelected;
@property(retain, nonatomic) MSPDroppedPin *droppedPin; // @synthesize droppedPin=_droppedPin;
@property(retain, nonatomic) DirectionsPlan *directionsPlan; // @synthesize directionsPlan=_directionsPlan;
@property(nonatomic) BOOL isPresentingSelectedPlace; // @synthesize isPresentingSelectedPlace=_isPresentingSelectedPlace;
@property(nonatomic) unsigned long long selectedPlaceIndex; // @synthesize selectedPlaceIndex=_selectedPlaceIndex;
@property(retain, nonatomic) NSMutableArray *searchPlaces; // @synthesize searchPlaces=_searchPlaces;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) GEOURLOptions *displayOptions; // @synthesize displayOptions=_displayOptions;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasLineItem;
@property(readonly, nonatomic) BOOL hasSelectedTransitLineName;
@property(nonatomic) BOOL hasSelectedTransitFeatureID;
@property(readonly, nonatomic) BOOL hasSearchCategoryStorage;
@property(readonly, nonatomic) BOOL hasPresentedMapItem;
@property(nonatomic) BOOL hasIsDroppedPinPresented;
@property(nonatomic) BOOL hasIsDroppedPinSelected;
@property(readonly, nonatomic) BOOL hasDroppedPin;
@property(readonly, nonatomic) BOOL hasDirectionsPlan;
@property(nonatomic) BOOL hasIsPresentingSelectedPlace;
@property(nonatomic) BOOL hasSelectedPlaceIndex;
- (id)searchPlacesAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchPlacesCount;
- (void)addSearchPlaces:(id)arg1;
- (void)clearSearchPlaces;
@property(readonly, nonatomic) BOOL hasSearchString;
- (int)StringAsCollectionsMode:(id)arg1;
- (id)collectionsModeAsString:(int)arg1;
@property(nonatomic) BOOL hasCollectionsMode;
@property(nonatomic) int collectionsMode; // @synthesize collectionsMode=_collectionsMode;
@property(readonly, nonatomic) BOOL hasDisplayOptions;
@property(readonly, nonatomic) BOOL affectsMapType;
- (id)bzip2DataByIterativelyReducingIfNeeded;
- (id)bzip2CompressedData;
- (id)initWithBzip2CompressedData:(id)arg1;
- (BOOL)shouldIndex;

@end

