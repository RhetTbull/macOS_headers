//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PXGSpriteReference, PXMediaProvider;

@protocol PXGDisplayAssetPixelBufferSourcesProvider <NSObject>
- (void)recyclePixelBufferSourceForDisplayAssets:(NSArray *)arg1;
- (id <PXGDisplayAssetPixelBufferSource>)pixelBufferSourceForDisplayAsset:(id <PXDisplayAsset>)arg1 mediaProvider:(PXMediaProvider *)arg2 spriteReference:(PXGSpriteReference *)arg3;
@end

