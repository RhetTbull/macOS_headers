//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/NSCopying-Protocol.h>
#import <AddressBook/NSLocking-Protocol.h>

@interface ABRecord : NSObject <NSLocking, NSCopying>
{
    id _databaseImpl;
    id _reserved1;
    id _reserved2;
    id _reserved3;
}

+ (id)searchElementForTerms:(id)arg1;
+ (id)recordFromDictionaryRepresentation:(id)arg1 withRecordMapping:(id)arg2 addressBook:(id)arg3 generateIds:(BOOL)arg4;
+ (id)nts_RecordFromDictionaryRepresentation:(id)arg1 withRecordMapping:(id)arg2 addressBook:(id)arg3 generateIds:(BOOL)arg4 account:(id)arg5;
+ (id)nts_RecordFromDictionaryRepresentation:(id)arg1 withRecordMapping:(id)arg2 addressBook:(id)arg3 generateIds:(BOOL)arg4;
+ (void)writeRecords:(id)arg1 toPasteboard:(id)arg2;
+ (void)discardOriginalUniqueIds;
+ (id)originalUniqueIdOfRecordPastedWithUniqueId:(id)arg1;
+ (void)pastedRecordWithUniqueId:(id)arg1 asRecordWithUniqueId:(id)arg2;
+ (id)copyPasteboardDictionaryForRecords:(id)arg1;
+ (id)copyPasteboardStringForRecords:(id)arg1;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)_isPublicRecord;
+ (void)globalAPIUnlockForAddressBook:(id)arg1 inFile:(const char *)arg2 line:(unsigned long long)arg3;
+ (void)globalAPILockForAddressBook:(id)arg1 inFile:(const char *)arg2 line:(unsigned long long)arg3;
+ (id)managedObjectContextForAddressBook:(id)arg1;
+ (id)properties;
+ (id)propertiesWithAddressBook:(id)arg1;
+ (long long)typeOfProperty:(id)arg1;
+ (long long)typeOfProperty:(id)arg1 withAddressBook:(id)arg2;
+ (long long)nts_TypeOfProperty:(id)arg1 withAddressBook:(id)arg2;
+ (id)propertyTypes;
+ (id)propertyTypesWithAddressBook:(id)arg1;
+ (id)propertyTypesWithAddressBook:(id)arg1 acquireLock:(BOOL)arg2;
+ (id)builtInProperties;
+ (id)makeUniqueId;
+ (id)_table;
+ (id)_newUniqueIdForTable:(id)arg1;
+ (id)localDateWithHour:(unsigned long long)arg1 occurringOnSameCalendarDayAsDateInLocalTimeZone:(id)arg2;
+ (id)makeCalendarWithOffsetFromGMT:(long long)arg1;
+ (id)calendarWithOffsetFromGMT:(long long)arg1;
+ (id)localDateWithHour:(unsigned long long)arg1 occurringOnSameCalendarDayAsDate:(id)arg2 inTimeZoneSecondsFromGMT:(long long)arg3;
+ (id)localDateOccurringAtNoonOnSameCalendarDayAsDate:(id)arg1 inTimeZoneSecondsFromGMT:(long long)arg2;
+ (id)localDateOccurringAtNoonOnSameCalendarDayAsDateInGMT:(id)arg1;
+ (id)localDateOccurringOnSameCalendarDayAsDateInGMT:(id)arg1;
+ (id)gmtCalendar;
+ (id)localCalendar;
+ (id)gmtDateOccurringAtNoonOnSameCalendarDayAsDateInLocalTime:(id)arg1;
+ (id)dateByNormalizingToGMT:(id)arg1;
- (void)unlock;
- (void)lock;
- (id)quicklookURL;
- (id)accountPermissions;
- (id)account;
- (id)nts_account;
- (id)nts_accountFromDatabaseImpl;
- (id)nts_accountWithIdentifier:(id)arg1;
- (id)initWithAddressBook:(id)arg1 account:(id)arg2;
- (id)metadataURL;
- (void)_markAsViewed;
- (id)_contextInfo;
- (id)remoteLocation;
- (id)nts_RemoteLocation;
- (void)nts_PopulateWithDictionary:(id)arg1 includeCoreProperties:(BOOL)arg2 addressBook:(id)arg3;
- (void)populateWithDictionaryRepresentation:(id)arg1;
- (void)nts_PopulateWithDictionary:(id)arg1 withRecordMapping:(id)arg2 generateIds:(BOOL)arg3 addressBook:(id)arg4;
- (void)nts_importSingleValue:(id)arg1 fromArchive:(id)arg2 forPropertyKey:(id)arg3;
- (void)nts_PopulateWithDictionary:(id)arg1 withRecordMapping:(id)arg2 generateIds:(BOOL)arg3 includeCoreProperties:(BOOL)arg4 addressBook:(id)arg5;
- (void)addSubrecordsToSet:(id)arg1;
- (id)dictionaryRepresentation;
- (BOOL)canEditInCardView;
- (void)nts_addPropertyValueToArchive:(id)arg1 forPropertyKey:(id)arg2;
- (id)_dictionaryRepresentationForPropertyTypes:(id)arg1 andProperties:(id)arg2;
- (BOOL)nts_canRemove;
- (BOOL)isAddressBookReadOnly;
- (BOOL)isReadOnly;
- (BOOL)nts_IsSubscribed;
- (BOOL)isSubscribed;
- (id)_allLocation;
- (BOOL)_isMe;
- (BOOL)_isCompany;
- (BOOL)nts_Touch;
- (id)vCardRepresentationUsingPreferencesForOptions;
- (id)_21vCardRepresentationAsData;
- (id)_vCardRepresentationAsStringUsingPreferencesForOptions;
- (id)_vCardRepresentationAsString;
- (id)nts_AffectsSmartGroupsIsNew:(BOOL)arg1;
- (id)_realCompositeName;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (id)_firstMatchingProperty:(id)arg1;
- (void)takeValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setNilValueForKey:(id)arg1;
- (BOOL)doesPropertyExist:(id)arg1;
- (BOOL)_isPublicRecord;
- (id)nts_StringForIndexing;
- (id)stringForIndexing;
- (id)parentGroupsIncludingSubscriptions;
- (id)nts_ParentGroups;
- (id)parentGroups;
- (void)nts_CascadeRemove;
- (BOOL)nts_HasChangedProperties;
- (id)nts_ChangedProperties;
- (id)sharingUniqueId;
- (id)displayName;
- (id)nts_UniqueId;
- (id)uniqueId;
- (BOOL)nts_RemoveValueForProperty:(id)arg1;
- (BOOL)removeValueForProperty:(id)arg1;
- (BOOL)nts_SetValue:(id)arg1 forProperty:(id)arg2 error:(id *)arg3 account:(id)arg4;
- (BOOL)nts_SetValue:(id)arg1 forProperty:(id)arg2 error:(id *)arg3;
- (BOOL)canSetProperty:(id)arg1 error:(id *)arg2;
- (BOOL)validateValue:(id *)arg1 forProperty:(id)arg2 error:(id *)arg3 account:(id)arg4;
- (BOOL)validateValue:(id *)arg1 forProperty:(id)arg2 error:(id *)arg3;
- (BOOL)validateForAccount:(id)arg1 error:(id *)arg2;
- (BOOL)nts_SetValue:(id)arg1 forProperty:(id)arg2;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 error:(id *)arg3 account:(id)arg4;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 error:(id *)arg3;
- (id)nts_ValueForProperty:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)abDatabaseImpl;
- (id)_table;
- (id)stringForXcode;
- (id)description;
- (id)nts_Description;
- (id)nts_DescriptionDictionary;
- (BOOL)nts_RemoveFromAddressBook:(id)arg1;
- (BOOL)nts_MoveIntoAddressBook:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (void)setAddressBook:(id)arg1;
- (id)_addressBook;
- (id)nts_AddressBook;
- (id)addressBook;
- (id)persistentRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)duplicate;
- (id)duplicateWithClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)destinationStoreUrlWithAddressBook:(id)arg1 storeUrl:(id)arg2;
- (BOOL)_shouldAssignNewDatabaseImplToPrimaryStore;
- (BOOL)_shouldAssignNewDatabaseImplToAccount;
- (id)initWithAddressBook:(id)arg1;
- (id)init;
- (id)nts_InitWithDictionaryRepresentation:(id)arg1 addressBook:(id)arg2 storeUrl:(id)arg3;
- (id)nts_InitWithDictionaryRepresentation:(id)arg1 addressBook:(id)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1 addressBook:(id)arg2 account:(id)arg3;
- (id)initWithDictionaryRepresentation:(id)arg1 addressBook:(id)arg2;
- (id)initWithUniqueId:(id)arg1 addressBook:(id)arg2 storeUrl:(id)arg3;
- (id)initWithUniqueId:(id)arg1 addressBook:(id)arg2 account:(id)arg3;
- (id)initWithUniqueId:(id)arg1 addressBook:(id)arg2;
- (id)initWithUniqueId:(id)arg1;
- (id)nts_initWithUniqueId:(id)arg1 addressBook:(id)arg2 storeUrl:(id)arg3;
- (id)nts_initWithUniqueId:(id)arg1 addressBook:(id)arg2;
- (id)nts_initWithDatabaseImpl:(id)arg1 addressBook:(id)arg2;
- (id)initWithDatabaseImpl:(id)arg1 addressBook:(id)arg2;
- (id)initSpecialRecordWithUniqueId:(id)arg1 addressBook:(id)arg2;
- (BOOL)_abComparePrefixMatch:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)_abCompareContainsSubString:(id)arg1 options:(unsigned long long)arg2;
- (long long)_abCompare:(id)arg1 ascending:(BOOL)arg2 options:(unsigned long long)arg3;
- (void)setImageFromMemento:(id)arg1;
- (id)imageMemento;
- (void)setAllProperties:(id)arg1;
- (id)allProperties;
- (id)createAlternateName;
- (id)createFirstLastSorting:(BOOL)arg1 part1:(BOOL)arg2;
- (id)localDateWithHour:(unsigned long long)arg1 occurringOnSameCalendarDayAsDateInLocalTimeZone:(id)arg2;
- (id)localDateWithHour:(unsigned long long)arg1 occurringOnSameCalendarDayAsDate:(id)arg2 inTimeZoneSecondsFromGMT:(long long)arg3;
- (id)localDateOccurringAtNoonOnSameCalendarDayAsDate:(id)arg1 inTimeZoneSecondsFromGMT:(long long)arg2;
- (id)localDateOccurringAtNoonOnSameCalendarDayAsDateInGMT:(id)arg1;
- (id)localDateOccurringOnSameCalendarDayAsDateInGMT:(id)arg1;
- (id)gmtDateOccurringAtNoonOnSameCalendarDayAsDateInLocalTime:(id)arg1;
- (id)dateByNormalizingToGMT:(id)arg1;
- (id)abcdMutableSetValueForKey:(id)arg1;
- (void)abcdSetValue:(id)arg1 forKey:(id)arg2;
- (id)abcdValueForKey:(id)arg1;
- (void)_setUnknownProperties:(id)arg1;
- (id)_unknownProperties;
- (void)setDatabaseImpl:(id)arg1 andAddressBook:(id)arg2;

@end

