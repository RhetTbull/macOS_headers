//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PXDisplayAsset, PXDisplayAssetCollection;

@interface PXProgrammaticNavigationDestination : NSObject
{
    id <PXDisplayAsset> _asset;
    id <PXDisplayAssetCollection> _assetCollection;
    long long _type;
    long long _revealMode;
    NSString *_assetUUID;
    NSString *_assetLocalIdentifier;
    NSString *_assetCollectionUUID;
    long long _assetCollectionType;
    long long _assetCollectionSubtype;
}

@property(readonly, nonatomic) long long assetCollectionSubtype; // @synthesize assetCollectionSubtype=_assetCollectionSubtype;
@property(readonly, nonatomic) long long assetCollectionType; // @synthesize assetCollectionType=_assetCollectionType;
@property(readonly, copy, nonatomic) NSString *assetCollectionUUID; // @synthesize assetCollectionUUID=_assetCollectionUUID;
@property(readonly, copy, nonatomic) NSString *assetLocalIdentifier; // @synthesize assetLocalIdentifier=_assetLocalIdentifier;
@property(readonly, copy, nonatomic) NSString *assetUUID; // @synthesize assetUUID=_assetUUID;
@property(readonly, nonatomic) long long revealMode; // @synthesize revealMode=_revealMode;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) id <PXDisplayAssetCollection> assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
- (id)initWithType:(long long)arg1 revealMode:(long long)arg2 assetUUID:(id)arg3 assetCollectionUUID:(id)arg4;
- (id)initWithType:(long long)arg1 revealMode:(long long)arg2;
- (id)initWithObject:(id)arg1 revealMode:(long long)arg2;
- (id)initWithURL:(id)arg1;

@end

