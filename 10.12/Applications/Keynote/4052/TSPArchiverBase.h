//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSPArchivableContent-Protocol.h"

@class NSDictionary, NSHashTable, NSMutableDictionary, NSString, TSPObject;

@interface TSPArchiverBase : NSObject <TSPArchivableContent>
{
    auto_ptr_4370f086 _message;
    struct unordered_map<const TSP::FieldPath, TSP::FieldInfo_Rule, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule>>> *_fieldRules;
    struct FieldPath *_currentFieldPath;
    NSMutableDictionary *_alternates;
    TSPObject *_object;
    unsigned long long _messageVersion;
    NSHashTable *_strongReferences;
    NSHashTable *_weakReferences;
    NSHashTable *_commandToModelReferences;
    NSHashTable *_lazyReferences;
    NSHashTable *_dataReferences;
}

@property(readonly, nonatomic) NSHashTable *dataReferences; // @synthesize dataReferences=_dataReferences;
@property(readonly, nonatomic) NSHashTable *lazyReferences; // @synthesize lazyReferences=_lazyReferences;
@property(readonly, nonatomic) NSHashTable *commandToModelReferences; // @synthesize commandToModelReferences=_commandToModelReferences;
@property(readonly, nonatomic) NSHashTable *weakReferences; // @synthesize weakReferences=_weakReferences;
@property(readonly, nonatomic) NSHashTable *strongReferences; // @synthesize strongReferences=_strongReferences;
@property(nonatomic) unsigned long long messageVersion; // @synthesize messageVersion=_messageVersion;
@property(readonly, nonatomic) TSPObject *object; // @synthesize object=_object;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setWeakReferenceToObjectUUIDPathArray:(id)arg1 message:(RepeatedPtrField_0a3269f6 *)arg2;
- (void)setWeakReferenceToObjectUUIDArray:(id)arg1 message:(RepeatedPtrField_bfda3daa *)arg2;
- (void)setWeakReferenceToObjectUUIDPath:(id)arg1 message:(struct UUIDPath *)arg2;
- (void)setWeakReferenceToObjectUUIDData:(const UUIDData_5fbc143e *)arg1 message:(struct UUID *)arg2;
- (void)setWeakReferenceToObjectUUID:(id)arg1 message:(struct UUID *)arg2;
- (void)addWeakReferenceToObjectUUID:(id)arg1;
- (id)alternateDiffForVersion:(unsigned long long)arg1 fieldPath:(int *)arg2 baseFieldPath:(const struct FieldPath *)arg3;
- (id)alternateDiffForVersion:(unsigned long long)arg1 fieldPath:(int *)arg2;
- (id)alternateDiffForVersion:(unsigned long long)arg1 field:(int)arg2;
- (id)alternateDiffForVersion:(unsigned long long)arg1;
- (id)addAlternateArchiverForVersion:(unsigned long long)arg1 fieldPath:(const struct FieldPath *)arg2 isDiffArchiver:(BOOL)arg3;
@property(readonly, nonatomic) unsigned long long minimumSupportedVersion;
@property(readonly, nonatomic) NSDictionary *alternates;
- (void)enumerateRulesUsingBlock:(CDUnknownBlockType)arg1;
- (void)pushScopeForField:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) const struct FieldPath *currentFieldPath;
- (void)setRule:(int)arg1 forFieldPath:(int *)arg2;
- (void)setIgnoreAndDropRuleForFieldPath:(int *)arg1;
- (void)setIgnoreAndDropRuleForField:(int)arg1;
- (void)setIgnoreAndPreserveRuleForFieldPath:(int *)arg1;
- (void)setIgnoreAndPreserveRuleForField:(int)arg1;
- (void)setMustUnderstandRuleForFieldPath:(int *)arg1;
- (void)setMustUnderstandRuleForField:(int)arg1;
- (void)setDataReferenceArray:(id)arg1 message:(RepeatedPtrField_5fb0b506 *)arg2;
- (void)setDataReference:(id)arg1 message:(struct DataReference *)arg2;
- (void)setWeakLazyReference:(id)arg1 message:(struct Reference *)arg2;
- (void)setStrongLazyReferenceArray:(id)arg1 message:(RepeatedPtrField_a0d2dbe7 *)arg2;
- (void)setStrongLazyReference:(id)arg1 message:(struct Reference *)arg2;
- (void)setWeakReferenceArray:(id)arg1 message:(RepeatedPtrField_a0d2dbe7 *)arg2;
- (void)setStrongReferenceArray:(id)arg1 message:(RepeatedPtrField_a0d2dbe7 *)arg2;
- (void)setWeakReference:(id)arg1 message:(struct Reference *)arg2;
- (void)setStrongReference:(id)arg1 message:(struct Reference *)arg2;
@property(readonly, nonatomic) BOOL isForCopy;
@property(readonly, nonatomic) long long targetType;
- (void)releaseMessage;
@property(readonly, nonatomic) unsigned int messageType;
- (struct Message *)messageWithNewFunction:(CDUnknownFunctionPointerType)arg1;
- (struct Message *)message;
- (void)cleanup;
- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (id)init;
@property(readonly, nonatomic) const struct FieldPath *fieldPath;
@property(readonly, nonatomic) BOOL isDiff;
@property(readonly, nonatomic) BOOL isContentUnknown;
- (void)setSparseWeakObjectUUIDPathReferenceArray:(id)arg1 message:(struct SparseUUIDPathArray *)arg2;
- (void)setSparseWeakObjectUUIDReferenceArray:(id)arg1 message:(struct SparseUUIDArray *)arg2;
- (void)setSparseReferenceArray:(id)arg1 isWeak:(BOOL)arg2 message:(struct SparseReferenceArray *)arg3;
- (void)setSparseWeakReferenceArray:(id)arg1 message:(struct SparseReferenceArray *)arg2;
- (void)setSparseReferenceArray:(id)arg1 message:(struct SparseReferenceArray *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

