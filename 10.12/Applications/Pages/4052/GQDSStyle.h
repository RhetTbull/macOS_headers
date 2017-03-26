//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GQDNameMappableWithDefault-Protocol.h"
#import "ICExportable-Protocol.h"

@class NSHashTable, NSMutableDictionary, NSString;

@interface GQDSStyle : NSObject <ICExportable, GQDNameMappableWithDefault>
{
    GQDSStyle *mParent;
    struct GQDSMap *mPropertyMap;
    int mStyleType;
    NSString *mIdentifier;
    NSString *mName;
    NSString *mTabularInternalStyleName;
    NSMutableDictionary *mExportStyleAttributes;
    NSHashTable *mIsEqualCache;
}

+ (int)styleTypeForNodeName:(const char *)arg1;
+ (id)replacementForMissingObject:(struct _xmlTextReader *)arg1 processor:(id)arg2;
+ (id)newReplacementForMissingStyleOfType:(int)arg1;
+ (struct GQDSMap *)defaultMapForStyleType:(int)arg1;
+ (const struct StateSpec *)stateForReading;
@property(copy, nonatomic) NSString *tabularInternalStyleName; // @synthesize tabularInternalStyleName=mTabularInternalStyleName;
@property(copy, nonatomic) NSString *identifierString; // @synthesize identifierString=mIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=mName;
@property(retain, nonatomic) GQDSStyle *parent; // @synthesize parent=mParent;
@property(nonatomic) struct GQDSMap *propertyMap; // @synthesize propertyMap=mPropertyMap;
@property(nonatomic) int type; // @synthesize type=mStyleType;
- (void)setIdentifier:(const char *)arg1 verifyStylesheet:(id)arg2;
@property(nonatomic) const char *identifier;
@property(readonly, nonatomic) BOOL isIdentified;
@property(readonly, nonatomic) BOOL isNamed;
- (int)typeOfPropertyAtIndex:(unsigned int)arg1 property:(int *)arg2;
- (unsigned long long)propertiesCount;
- (BOOL)overridesNumberProperty:(int)arg1 value:(id *)arg2;
- (BOOL)hasValueForNumberProperty:(int)arg1 value:(id *)arg2 wasOverriddenWithNull:(char *)arg3;
- (BOOL)hasValueForNumberProperty:(int)arg1 value:(id *)arg2;
- (id)valueForNumberProperty:(int)arg1;
- (BOOL)overridesObjectProperty:(int)arg1 value:(id *)arg2;
- (BOOL)hasValueForObjectProperty:(int)arg1 value:(id *)arg2 wasOverriddenWithNull:(char *)arg3;
- (BOOL)hasValueForObjectProperty:(int)arg1 value:(id *)arg2;
- (id)valueForObjectProperty:(int)arg1;
- (BOOL)overridesDoubleProperty:(int)arg1 value:(double *)arg2;
- (BOOL)hasValueForDoubleProperty:(int)arg1 value:(double *)arg2 wasOverriddenWithNull:(char *)arg3;
- (BOOL)hasValueForDoubleProperty:(int)arg1 value:(double *)arg2;
- (double)valueForDoubleProperty:(int)arg1;
- (BOOL)overridesFloatProperty:(int)arg1 value:(float *)arg2;
- (BOOL)hasValueForFloatProperty:(int)arg1 value:(float *)arg2 wasOverriddenWithNull:(char *)arg3;
- (BOOL)hasValueForFloatProperty:(int)arg1 value:(float *)arg2;
- (float)valueForFloatProperty:(int)arg1;
- (BOOL)overridesIntProperty:(int)arg1 value:(int *)arg2;
- (BOOL)hasValueForIntProperty:(int)arg1 value:(int *)arg2 wasOverriddenWithNull:(char *)arg3;
- (BOOL)hasValueForIntProperty:(int)arg1 value:(int *)arg2;
- (int)valueForIntProperty:(int)arg1;
- (BOOL)overridesBoolProperty:(int)arg1 value:(char *)arg2;
- (BOOL)hasValueForBoolProperty:(int)arg1 value:(char *)arg2 wasOverriddenWithNull:(char *)arg3;
- (BOOL)hasValueForBoolProperty:(int)arg1 value:(char *)arg2;
- (BOOL)valueForBoolProperty:(int)arg1;
- (void)removePropertyMap;
- (struct GQDSMap *)createFullPropertyMap;
- (id)root;
- (void)dealloc;
- (void)collapseMap:(struct GQDSMap *)arg1;
- (void)setIsLocked:(BOOL)arg1;
- (void)setSeriesIndex:(unsigned long long)arg1;
- (void)addExportAttribute:(id)arg1 value:(id)arg2;
- (void)removeValueForProperty:(int)arg1;
- (void)setDoubleValue:(double)arg1 forProperty:(int)arg2;
- (void)setFloatValue:(float)arg1 forProperty:(int)arg2;
- (void)setIntValue:(int)arg1 forProperty:(int)arg2;
- (void)setBoolValue:(BOOL)arg1 forProperty:(int)arg2;
- (void)setObjectValue:(id)arg1 forProperty:(int)arg2;
- (id)initMutableWithType:(int)arg1;
- (id)initMutable;
- (void)encodeForWPWithExporter:(id)arg1 attributeName:(char *)arg2;
- (void)encodeForWPWithExporter:(id)arg1;
- (BOOL)encodeWithExporter:(id)arg1;
- (BOOL)isSageDefaultObjectValue:(id)arg1 forProperty:(int)arg2;
- (BOOL)isSageDefaultFloatValue:(float)arg1 forProperty:(int)arg2;
- (BOOL)isSageDefaultIntValue:(int)arg1 forProperty:(int)arg2;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;
- (long long)exportOrderCompare:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

