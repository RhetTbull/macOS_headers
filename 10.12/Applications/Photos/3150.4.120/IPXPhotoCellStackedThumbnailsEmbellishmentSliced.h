//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXPhotoCellStackedThumbnailsEmbellishment.h"

@class CALayer, NSArray;

@interface IPXPhotoCellStackedThumbnailsEmbellishmentSliced : IPXPhotoCellStackedThumbnailsEmbellishment
{
    NSArray *_backgroundLayers;
    CALayer *_contentLayer;
}

- (void).cxx_destruct;
- (id)screenshot;
- (id)_imageFromLayer:(id)arg1;
- (void)adjustParallaxEffectHorizontally:(BOOL)arg1 vertically:(BOOL)arg2 forContentRect:(struct CGRect)arg3;
- (struct CGRect)badgesFrame;
- (void)layout;
- (void)updateLayerVisibility;
- (id)initWithOwningMediaViewCell:(id)arg1;

@end

