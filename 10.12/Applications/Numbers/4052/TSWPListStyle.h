//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSSStyle.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSSPreset-Protocol.h"

@class NSString;

@interface TSWPListStyle : TSSStyle <GSSPAutoEncodable, TSSPreset>
{
}

+ (id)presetStyleDescriptor;
+ (id)defaultArrayForProperty:(int)arg1;
+ (id)arrayValuedProperties;
+ (id)languageSpecificStylesForLanguages:(id)arg1 theme:(id)arg2 stylesheet:(id)arg3;
+ (id)pDefaultLabelValuesForLabelTypeProperty:(int)arg1 context:(id)arg2;
+ (id)pLabelTypeArrayForType:(int)arg1;
+ (id)nameForLanguageSpecificListStyle:(int)arg1 withLocal:(id)arg2;
+ (id)propertyMapForListTextBullet:(id)arg1;
+ (id)propertyMapForListNumberType:(int)arg1;
+ (id)listStyleWithTextBullet:(id)arg1 inStyleSheet:(id)arg2 withTextBulletPresetStyle:(id)arg3;
+ (id)listStyleWithNumberType:(int)arg1 inStyleSheet:(id)arg2 withNumberedPresetStyle:(id)arg3;
+ (id)textBulletListStyleForPresets:(id)arg1;
+ (id)numberedListStyleForPresets:(id)arg1;
+ (id)harvardStyleWithContext:(id)arg1;
+ (id)defaultStyleWithContext:(id)arg1 type:(int)arg2;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultPropertyMap;
+ (id)defaultLabelTypes;
+ (id)defaultLabelStrings;
+ (id)defaultLabelTieredNumbers;
+ (id)defaultLabelNumberTypes;
+ (id)defaultLabelImages;
+ (id)defaultLabelGeometries;
+ (id)defaultLabelIndents;
+ (id)defaultTextIndents;
+ (void)pGetDefaultTextIndentFloats:(float [9])arg1;
+ (BOOL)defaultTieredNumber;
+ (int)defaultLabelNumberType;
+ (id)defaultLabelString;
+ (int)firstLabelTypeForPropertyMapping:(id)arg1;
+ (int)labelTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2;
+ (int)effectiveTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2;
+ (int)pLabelTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2 includeDegenerateLevels:(BOOL)arg3;
+ (BOOL)deprecated_isDefaultMissingBulletImage:(id)arg1;
+ (id)additionalBulletStrings;
+ (id)textInspectorBulletStrings;
+ (id)propertiesAllowingNSNull;
+ (id)properties;
+ (id)stickyOverrideProperties;
- (id)additionalPropertiesNeededForVariationWithPropertyMap:(id)arg1;
- (id)baseStyleForTopicNumbers;
@property(readonly, nonatomic) NSString *presetKind;
- (double)CGFloatValueForProperty:(int)arg1 atIndex:(unsigned long long)arg2;
- (double)doubleValueForProperty:(int)arg1 atIndex:(unsigned long long)arg2;
- (float)floatValueForProperty:(int)arg1 atIndex:(unsigned long long)arg2;
- (int)intValueForProperty:(int)arg1 atIndex:(unsigned long long)arg2;
- (id)boxedObjectForProperty:(int)arg1 atIndex:(unsigned long long)arg2;
- (id)objectForProperty:(int)arg1 atIndex:(unsigned long long)arg2;
- (void)saveToArchive:(struct ListStyleArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct ListStyleArchive *)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)overridePropertyMapWithValue:(id)arg1 forProperty:(int)arg2 atParagraphLevels:(id)arg3 withContext:(id)arg4;
- (id)pOverrideArrayWithValue:(id)arg1 forProperty:(int)arg2 atParagraphLevels:(id)arg3 withContext:(id)arg4;
- (int)firstLabelType;
- (int)labelTypeForLevel:(unsigned long long)arg1;
- (int)effectiveTypeForLevel:(unsigned long long)arg1;
- (id)numberTypeName;
- (double)textIndentForLevel:(unsigned long long)arg1 fontSize:(double)arg2;
- (double)labelIndentForLevel:(unsigned long long)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;
- (BOOL)matchesPropertySourceForPreset:(id)arg1;
- (void)populateGSSPListStyle:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

@end

