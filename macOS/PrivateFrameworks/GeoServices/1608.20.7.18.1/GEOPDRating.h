//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRating : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _maxScore;
    double _score;
    int _numRatingsUsedForScore;
    int _ratingType;
    struct {
        unsigned int has_maxScore:1;
        unsigned int has_score:1;
        unsigned int has_numRatingsUsedForScore:1;
        unsigned int has_ratingType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (id)ratingForPlaceData:(id)arg1 type:(int)arg2;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasNumRatingsUsedForScore;
@property(nonatomic) int numRatingsUsedForScore;
@property(nonatomic) BOOL hasMaxScore;
@property(nonatomic) double maxScore;
@property(nonatomic) BOOL hasScore;
@property(nonatomic) double score;
- (int)StringAsRatingType:(id)arg1;
- (id)ratingTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasRatingType;
@property(nonatomic) int ratingType;

@end

