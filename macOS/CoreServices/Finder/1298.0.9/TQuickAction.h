//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _NSQuickAction;

@interface TQuickAction : NSObject
{
    struct TNSRef<_NSQuickAction, void> _nsQuickAction;
}

+ (void)upgradeQuickActionConfiguration;
+ (id)builtInQuickActionsDictionary;
+ (id)builtInQuickActions;
+ (id)quickAction:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct TString title; // @dynamic title;
@property(readonly, nonatomic) int requirements; // @dynamic requirements;
@property(readonly, nonatomic) struct TString actionIdentifier; // @dynamic actionIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (_Bool)invokeWithResponder:(id)arg1;
- (id)optionImageForPresentationMode:(id)arg1;
- (id)imageForPresentationMode:(id)arg1;
- (_Bool)applicableToNodes:(const struct TFENodeVector *)arg1 target:(id)arg2;
@property(retain, nonatomic) _NSQuickAction *quickAction;

@end

