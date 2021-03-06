//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLProperty.h>

@class NSSQLEntity, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLRelationship : NSSQLProperty
{
    NSString *_name;
    NSSQLEntity *_destinationEntity;
    NSSQLRelationship *_inverse;
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (BOOL)isOrdered;
- (void)_setInverseRelationship:(id)arg1;
- (void)_setName:(id)arg1;
- (id)name;
- (id)inverseRelationship;
- (void)_setForeignOrderKey:(id)arg1;
- (id)correlationTableName;
- (id)destinationEntity;
- (id)sourceEntity;
- (id)foreignKey;
- (id)relationshipDescription;
- (void)dealloc;
- (id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;

@end

