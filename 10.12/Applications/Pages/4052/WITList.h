//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WITList : NSObject
{
}

+ (id)mapParagraphProperties:(id)arg1 characterProperties:(id)arg2 toParagraphPropertyMap:(id)arg3 parent:(id)arg4 parentColor:(id)arg5 rtl:(BOOL)arg6 rtlOverridden:(BOOL)arg7 whiteAutoText:(BOOL)arg8 overridesOnly:(BOOL)arg9 documentState:(id)arg10;
+ (id)mapListWithListId:(int)arg1 documentState:(id)arg2;
+ (void)mapListsWithDocumentState:(id)arg1;
+ (id)mapList:(id)arg1 parentListStyle:(id)arg2 wdStyle:(id)arg3 documentState:(id)arg4;
+ (id)addListStyle:(id)arg1 toThemePresets:(BOOL)arg2 documentState:(id)arg3;
+ (id)mapListWithContext:(id)arg1;
+ (id)propertyMapWithDictionary:(id)arg1 properties:(id)arg2;
+ (void)mapLevelWithLevelContext:(id)arg1;
+ (void)addPropertiesFromPropertyMap:(id)arg1 toDictionary:(id)arg2;
+ (int)mapListLabelTypeFromLevel:(id)arg1;
+ (BOOL)isBulletListType:(id)arg1;
+ (BOOL)mapStringLabelWithLevelContext:(id)arg1;
+ (void)mapNumberLabelWithLevelContext:(id)arg1;
+ (void)mapImageLabelWithLevelContext:(id)arg1;
+ (void)mapIndentsWithLevelContext:(id)arg1;
+ (short)leadingIndent:(BOOL)arg1 inheritanceList:(id)arg2 documentState:(id)arg3;
+ (float)widthOfMarkerFromLevelPropertyMap:(id)arg1 paragraphPropertyMap:(id)arg2 documentState:(id)arg3;
+ (float)fontSizeWithListLevelPropertyMap:(id)arg1 paragraphPropertyMap:(id)arg2 documentState:(id)arg3;
+ (id)fontNameWithListLevelPropertyMap:(id)arg1 paragraphPropertyMap:(id)arg2 documentState:(id)arg3;
+ (BOOL)listLevelHasMappableImageBullet:(id)arg1;
+ (int)mapListNumberFormatFrom:(id)arg1;
+ (void)applyNoListStyleToRange:(struct _NSRange)arg1 textState:(id)arg2;
+ (void)applyNoListStyleToRange:(struct _NSRange)arg1 ofStorage:(id)arg2 inTextbox:(BOOL)arg3;

@end

