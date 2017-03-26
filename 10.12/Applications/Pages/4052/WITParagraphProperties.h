//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WITParagraphProperties : NSObject
{
}

+ (void)mapPhysicalJustification:(int)arg1 to:(id)arg2;
+ (void)mapLogicalJustification:(int)arg1 rtl:(BOOL)arg2 to:(id)arg3;
+ (void)mapHeaderFooterTextLocationFrom:(id)arg1 to:(id)arg2 textState:(id)arg3;
+ (void)setupTextWrapping:(id)arg1 paragraphProperties:(id)arg2 tableProperties:(id)arg3 textState:(id)arg4;
+ (id)map:(id)arg1 with:(id)arg2 to:(id)arg3 parent:(id)arg4 parentColor:(id)arg5 mapBorders:(unsigned long long)arg6 overridesOnly:(BOOL)arg7 documentState:(id)arg8;
+ (BOOL)isParagraphRTL:(id)arg1 with:(id)arg2 parent:(id)arg3 documentState:(id)arg4 bidi:(char *)arg5 rtlOverridden:(char *)arg6;
+ (id)map:(id)arg1 with:(id)arg2 to:(id)arg3 parent:(id)arg4 parentColor:(id)arg5 overridesOnly:(BOOL)arg6 documentState:(id)arg7;
+ (id)baseStyleForParagraph:(id)arg1 documentState:(id)arg2;
+ (void)resolveTabStops:(id)arg1 inheritanceList:(id)arg2;
+ (id)baseStyleFromProperties:(id)arg1 parent:(id)arg2 documentState:(id)arg3;
+ (int)overrideDepthFor:(id)arg1 parent:(id)arg2 overridesOnly:(BOOL)arg3 documentState:(id)arg4;
+ (id)inheritanceListFor:(id)arg1 parent:(id)arg2 documentState:(id)arg3;
+ (id)paragraphPropertiesForListId:(int)arg1 listLevel:(unsigned char)arg2 documentState:(id)arg3;
+ (id)overridingProperties:(id)arg1 parent:(id)arg2 property:(SEL)arg3 documentState:(id)arg4;
+ (id)overridingPropertiesInInheritanceList:(id)arg1 maxDepth:(int)arg2 overridden:(SEL)arg3;
+ (int)overrideDepthInInheritanceList:(id)arg1 overridden:(SEL)arg2;
+ (id)propertiesIn:(id)arg1 overridden:(SEL)arg2 returnDepth:(int *)arg3;
+ (id)propertiesIn:(id)arg1 overridden:(SEL)arg2;
+ (void)mapTabStopsFrom:(id)arg1 to:(id)arg2 overrideList:(id)arg3 documentState:(id)arg4;
+ (void)mapBordersFrom:(id)arg1 to:(id)arg2 mapBorders:(unsigned long long)arg3 overrideList:(id)arg4 documentState:(id)arg5;
+ (BOOL)showBorder:(id)arg1;
+ (void)mapHorizontalAlignment:(int)arg1 to:(id)arg2;
+ (BOOL)paragraphHasOnlyRtlRuns:(id)arg1 documentState:(id)arg2;
+ (void)mapIndentsFromProperties:(id)arg1 inheritanceList:(id)arg2 parent:(id)arg3 to:(id)arg4 overridesOnly:(BOOL)arg5 documentState:(id)arg6;
+ (void)mapJustificationFromProperties:(id)arg1 inheritanceList:(id)arg2 parent:(id)arg3 to:(id)arg4 overridesOnly:(BOOL)arg5 documentState:(id)arg6;
+ (void)mapLineSpacingFromReflection:(id)arg1 to:(id)arg2;
+ (void)mapLineSpacingFrom:(id)arg1 to:(id)arg2;

@end

