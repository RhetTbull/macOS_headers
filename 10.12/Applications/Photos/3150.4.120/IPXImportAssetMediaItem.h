//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mondrian/MOMediaItem.h>

@class RKImportAsset;

@interface IPXImportAssetMediaItem : MOMediaItem
{
    RKImportAsset *_importAsset;
    BOOL _isLayedOut;
}

+ (BOOL)mediaItemHasAudioAttachment:(id)arg1;
@property BOOL isLayedOut; // @synthesize isLayedOut=_isLayedOut;
- (void).cxx_destruct;
- (id)thumbnailImageOperationForResolution:(unsigned long long)arg1 size:(struct CGSize)arg2 mode:(unsigned long long)arg3 reason:(unsigned long long)arg4 placeholder:(BOOL)arg5 colorSpace:(id)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;
- (id)_synchronouslyRenderedThumbnailForResolution:(unsigned long long)arg1 canceler:(id)arg2;
- (struct CGImage *)_unavailableThumbnailImage;
- (void)_reloadProperties;
- (void)updateWithImportAsset:(id)arg1;
- (id)url;
- (id)importAsset;
- (id)initWithImportAsset:(id)arg1;

@end

