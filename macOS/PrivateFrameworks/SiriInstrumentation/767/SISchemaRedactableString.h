//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

@class NSData, NSString;

@interface SISchemaRedactableString : PBCodable
{
    int _redactionState;
    unsigned long long _which_String;
    NSString *_value;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long which_String; // @synthesize which_String=_which_String;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) int redactionState; // @synthesize redactionState=_redactionState;

@end

