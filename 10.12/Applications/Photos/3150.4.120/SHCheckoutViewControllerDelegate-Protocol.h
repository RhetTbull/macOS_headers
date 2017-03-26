//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SHCart, SHCheckoutViewController;
@protocol SHStoreAssetGenerationDelegate;

@protocol SHCheckoutViewControllerDelegate <NSObject>
- (void)checkoutViewController:(SHCheckoutViewController *)arg1 requestsProjectPreviewOfSize:(struct CGSize)arg2 completionBlock:(void (^)(NSImage *))arg3;
- (void)checkoutViewController:(SHCheckoutViewController *)arg1 needsResetForCart:(SHCart *)arg2;
- (id <SHStoreAssetGenerationDelegate>)assetGenerationDelegateForCheckoutViewController:(SHCheckoutViewController *)arg1;
@end

