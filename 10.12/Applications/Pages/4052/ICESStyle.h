//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICESStyle : NSObject
{
}

+ (struct GQDSMap *)createFullPropertyMapFromStyle:(id)arg1 exporter:(id)arg2;
+ (struct GQDSMap *)createPropertyMapFromStyle:(id)arg1 exporter:(id)arg2;
+ (struct GQDSMap *)createFullPropertyMapFromStyle:(id)arg1 exporter:(id)arg2 mappingContext:(id)arg3;
+ (struct GQDSMap *)createPropertyMapFromStyle:(id)arg1 exporter:(id)arg2 mappingContext:(id)arg3;
+ (struct GQDSMap *)createPropertyMapWithProperties:(id)arg1 fromStyle:(id)arg2 exporter:(id)arg3;
+ (struct GQDSMap *)createPropertyMapWithProperties:(id)arg1 fromStyle:(id)arg2 exporter:(id)arg3 mappingContext:(id)arg4;
+ (void)populatePropertyMap:(struct GQDSMap *)arg1 withProperties:(id)arg2 fromStyle:(id)arg3 propertyMap:(id)arg4 exporter:(id)arg5 mappingContext:(id)arg6;
+ (id)p_resolvedPropertyForPropertyMap:(id)arg1 style:(id)arg2 property:(int)arg3;
+ (void)populatePropertyMap:(struct GQDSMap *)arg1 withProperties:(id)arg2 fromStyle:(id)arg3 exporter:(id)arg4 mappingContext:(id)arg5;
+ (struct GQDSMap *)createDefaultMapForExportingTSSStyle:(id)arg1 exporter:(id)arg2;
+ (struct GQDSMap *)createDefaultSlideStyleMap;
+ (struct GQDSMap *)createDefaultListStyleMap;
+ (struct GQDSMap *)createDefaultCellStyleMap;
+ (struct GQDSMap *)createDefaultTableStyleMap;
+ (struct GQDSMap *)createDefaultConnectionLineStyleMap;
+ (struct GQDSMap *)createDefaultGraphicStyleMap;
+ (const struct ICESPropertyExportEntry *)conversionEntryForTSSProperty:(int)arg1;

@end

