//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ASChannelLayout : PBCodable <NSCopying>
{
    unsigned int _bitmap;
    NSMutableArray *_descriptions;
    unsigned int _tag;
    struct {
        unsigned int bitmap:1;
    } _has;
}

+ (Class)descriptionsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *descriptions; // @synthesize descriptions=_descriptions;
@property(nonatomic) unsigned int bitmap; // @synthesize bitmap=_bitmap;
@property(nonatomic) unsigned int tag; // @synthesize tag=_tag;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)descriptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)descriptionsCount;
- (void)addDescriptions:(id)arg1;
- (void)clearDescriptions;
@property(nonatomic) BOOL hasBitmap;

@end

