//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNBuildPop.h"

#import "KNAnimationPluginObsoleteNames-Protocol.h"

@class NSString;

@interface KNBuildPopByCharacter : KNBuildPop <KNAnimationPluginObsoleteNames>
{
}

+ (id)obsoleteAnimationNames;
+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(long long)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(long long)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (id)animationFilter;
+ (id)animationName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

