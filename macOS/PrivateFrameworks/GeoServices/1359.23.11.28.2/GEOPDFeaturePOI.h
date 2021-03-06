//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDVenueBuilding, GEOPDVenueContainer, GEOPDVenueDirectoryGroup, NSMutableArray, PBUnknownFields;

@interface GEOPDFeaturePOI : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDVenueBuilding *_building;
    GEOPDVenueDirectoryGroup *_directoryGroup;
    NSMutableArray *_levels;
    GEOPDVenueContainer *_venueContainer;
}

+ (Class)levelType;
@property(retain, nonatomic) GEOPDVenueDirectoryGroup *directoryGroup; // @synthesize directoryGroup=_directoryGroup;
@property(retain, nonatomic) NSMutableArray *levels; // @synthesize levels=_levels;
@property(retain, nonatomic) GEOPDVenueBuilding *building; // @synthesize building=_building;
@property(retain, nonatomic) GEOPDVenueContainer *venueContainer; // @synthesize venueContainer=_venueContainer;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDirectoryGroup;
- (id)levelAtIndex:(unsigned long long)arg1;
- (unsigned long long)levelsCount;
- (void)addLevel:(id)arg1;
- (void)clearLevels;
@property(readonly, nonatomic) BOOL hasBuilding;
@property(readonly, nonatomic) BOOL hasVenueContainer;

@end

