//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KHStoreBridgeDelegate-Protocol.h"
#import "SHCheckoutViewControllerDelegate-Protocol.h"
#import "SHStoreAssetGenerationDelegate-Protocol.h"

@class NSString, SHProductAssortment;
@protocol KHAssetGeneration;

@interface IPXPrintProductStoreAdapter : NSObject <SHStoreAssetGenerationDelegate, SHCheckoutViewControllerDelegate, KHStoreBridgeDelegate>
{
    BOOL _cartNeedsReset;
    SHProductAssortment *_latestAssortment;
    id <KHAssetGeneration> _assetGenerator;
}

@property(retain, nonatomic) id <KHAssetGeneration> assetGenerator; // @synthesize assetGenerator=_assetGenerator;
@property(retain, nonatomic) SHProductAssortment *latestAssortment; // @synthesize latestAssortment=_latestAssortment;
- (void).cxx_destruct;
- (id)storeClient:(id)arg1 buildAssetThumbnailWithIdentifier:(id)arg2 progress:(id)arg3 error:(id *)arg4;
- (id)storeClient:(id)arg1 buildAssetWithIdentifier:(id)arg2 progress:(id)arg3 error:(id *)arg4;
- (unsigned long long)numberOfResourcesThatRequireGenerationForStoreClient:(id)arg1 withIdentifier:(id)arg2;
- (void)checkoutViewController:(id)arg1 needsResetForCart:(id)arg2;
- (id)assetGenerationDelegateForCheckoutViewController:(id)arg1;
- (void)storeBridge:(id)arg1 requestCheckoutForProject:(id)arg2 cart:(id)arg3 completion:(CDUnknownBlockType)arg4 dismissal:(CDUnknownBlockType)arg5;
- (void)checkoutViewController:(id)arg1 requestsProjectPreviewOfSize:(struct CGSize)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)storeBridge:(id)arg1 requestCheckoutForProjectBundleController:(id)arg2 completion:(CDUnknownBlockType)arg3 dismissal:(CDUnknownBlockType)arg4;
- (void)storeBridge:(id)arg1 addPrintLayout:(id)arg2 toCart:(id)arg3;
- (void)storeBridge:(id)arg1 fillUpCountryPickerMenu:(id)arg2;
- (void)storeBridge:(id)arg1 updateCart:(id)arg2 withProject:(id)arg3;
- (void)storeBridge:(id)arg1 checkAddressBookAuthorization:(CDUnknownBlockType)arg2;
- (id)storeBridge:(id)arg1 createCartWithRecipientsFromCart:(id)arg2;
- (void)storeBridge:(id)arg1 loadProducts:(CDUnknownBlockType)arg2;
- (void)storeBridge:(id)arg1 context:(id)arg2 loadProducts:(CDUnknownBlockType)arg3;
- (void)storeBridge:(id)arg1 setCountryCode:(id)arg2;
- (id)countryCodeForStoreBridge:(id)arg1;
- (id)countriesForStoreBridge:(id)arg1;
- (BOOL)shouldConfirmStoreCountryForStoreBridge:(id)arg1;
- (BOOL)shouldDisplayShippingCostsForStoreBridge:(id)arg1;
- (BOOL)cartNeedsResetForStoreBridge:(id)arg1;
- (BOOL)storeIsAvailableForStoreBridge:(id)arg1;
- (id)bestFittingPartFromPart:(id)arg1 ofSize:(struct CGSize)arg2 inAssortment:(id)arg3;
- (void)didChangeStoreFront:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

