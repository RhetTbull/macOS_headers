//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "EKProtocolObject.h"

@class NSDictionary, NSManagedObjectID, NSString;

@interface CalManagedObject : NSManagedObject <EKProtocolObject>
{
    long long _willSaveIterations;
}

+ (id)propertiesUnavailableForPartialObjects;
+ (BOOL)hasMatchForPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequestWithPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)insertNewObjectInContext:(id)arg1 obtainPermanentID:(BOOL)arg2;
+ (id)entityName;
- (id)additionalFrozenProperties;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
- (BOOL)isPropertyUnavailable:(id)arg1;
@property(readonly, nonatomic) BOOL isPartialObject;
- (BOOL)isNew;
- (BOOL)isFrozen;
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
- (void)warnIfManagedObjectContextIsNil;
- (id)enclosingSources;
- (id)enclosingSource;
- (id)objectIDAsString;
- (id)fallbackToCommittedValueForKey:(id)arg1;
- (id)committedValueForKey:(id)arg1;
- (BOOL)isValidManagedObject;
- (id)uniqueKeyForObject;
- (void)applyAttributesFromObject:(id)arg1;
- (id)attributesToApplyForMerge;
- (id)relationshipsToCompareForMerge;
- (id)attributesToCompareForMerge;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)validateForInsert:(id *)arg1;
- (id)rebuildValidationError:(id)arg1;
- (id)contextForValidationError;
- (void)prefetchRelationshipsForDelete;
- (void)refreshRelationshipsWithZeroStaleness:(id)arg1;
- (void)refreshPropertiesWithZeroStaleness:(id)arg1;
- (void)_withZeroStaleness:(CDUnknownBlockType)arg1;
- (id)keysOnlyRelevantToNetworkDetails;
- (void)didSave;
- (void)willSave;
- (id)_updateParentCR:(id)arg1 withDependentCR:(id)arg2;
- (void)processForType:(int)arg1 inManagedObjectContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

