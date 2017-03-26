//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KNAnimatedBuild, KNAnimationContext, KNAnimationPluginMenu, NSArray, NSDictionary, NSString, TSDCapabilities;
@protocol KNAnimationPluginContext;

@protocol KNAnimationPlugin <NSObject>
+ (NSString *)thumbnailImageNameForType:(long long)arg1;
+ (NSDictionary *)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(KNAnimationPluginMenu *)arg1 forType:(long long)arg2;
+ (unsigned long long)directionType;
+ (NSString *)localizedMenuString:(long long)arg1;
+ (NSArray *)supportedTypes;
+ (NSString *)animationFilter;
+ (int)animationCategory;
+ (NSString *)animationName;
- (id)initWithAnimationContext:(KNAnimationContext *)arg1;

@optional
+ (int)rendererTypeForCapabilities:(TSDCapabilities *)arg1;
+ (NSDictionary *)customEffectTimingCurveDisplayParametersForAttributes:(NSDictionary *)arg1 layoutStyleOnly:(BOOL)arg2;
+ (NSArray *)customAttributes;
- (NSDictionary *)animationInfoForAnimatedBuild:(KNAnimatedBuild *)arg1;
- (void)animationDidEndWithContext:(id <KNAnimationPluginContext>)arg1;
- (void)animationWillBeginWithContext:(id <KNAnimationPluginContext>)arg1;
@end

