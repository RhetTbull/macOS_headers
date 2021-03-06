//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface RMRemoteManagementScreenTimeLimitDelete : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_familyMemberType;
    BOOL _hasPasscode;
    BOOL _isManaged;
    BOOL _isManaging;
    CDStruct_8286c7c8 _has;
}

@property(nonatomic) BOOL hasPasscode; // @synthesize hasPasscode=_hasPasscode;
@property(nonatomic) BOOL isManaging; // @synthesize isManaging=_isManaging;
@property(nonatomic) BOOL isManaged; // @synthesize isManaged=_isManaged;
@property(retain, nonatomic) NSString *familyMemberType; // @synthesize familyMemberType=_familyMemberType;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) BOOL hasHasPasscode;
@property(nonatomic) BOOL hasIsManaging;
@property(nonatomic) BOOL hasIsManaged;
@property(readonly, nonatomic) BOOL hasFamilyMemberType;
@property(nonatomic) BOOL hasTimestamp;

@end

