//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRInventoryProviding-Protocol.h"

@class FRNativeAdFetcher, NSMutableArray, NSMutableDictionary, NSString;
@protocol FRNativeAdContextProviding;

@interface FRNativeAdInventory : NSObject <FRInventoryProviding>
{
    FRNativeAdFetcher *_nativeAdFetcher;
    id <FRNativeAdContextProviding> _provider;
    NSMutableArray *_unclaimedInventory;
    NSMutableDictionary *_claimedInventory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *claimedInventory; // @synthesize claimedInventory=_claimedInventory;
@property(retain, nonatomic) NSMutableArray *unclaimedInventory; // @synthesize unclaimedInventory=_unclaimedInventory;
@property(nonatomic) id <FRNativeAdContextProviding> provider; // @synthesize provider=_provider;
@property(retain, nonatomic) FRNativeAdFetcher *nativeAdFetcher; // @synthesize nativeAdFetcher=_nativeAdFetcher;
- (id)nextAvailableItem;
- (unsigned long long)countOfAvailableItems;
- (id)itemForIdentifier:(id)arg1;
- (void)purgeInventory;
- (void)requestAdditionalInventory;
- (id)initWithContextProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

