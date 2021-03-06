//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSUUID, StorageDebugCollection;
@protocol MSPImmutableObject, MSPReplicaRecord;

__attribute__((visibility("hidden")))
@interface StorageDebugCollectionElement : NSObject
{
    id <MSPReplicaRecord> _record;
    id <MSPImmutableObject> _contentObject;
    NSUUID *_identifier;
    StorageDebugCollection *_owner;
    NSArray *_displayableProperties;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSArray *displayableProperties; // @synthesize displayableProperties=_displayableProperties;
- (void)select;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (id)initWithReplicaRecord:(id)arg1 identifier:(id)arg2 associatedContentObject:(id)arg3 contentsDescriptionHandler:(CDUnknownBlockType)arg4 owner:(id)arg5;

@end

