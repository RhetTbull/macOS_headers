//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXPhotoSmartCropCell.h"

@interface IPXEditorialCaptionGridCell : IPXPhotoSmartCropCell
{
    BOOL _usingMagazineStyle;
    BOOL _usingMomentFaceStyle;
}

+ (double)captionInterspace;
+ (double)captionHeight;
+ (id)thumbnailContentsGravity;
+ (Class)classForThumbnailEmbellishment;
@property(nonatomic) BOOL usingMomentFaceStyle; // @synthesize usingMomentFaceStyle=_usingMomentFaceStyle;
@property(nonatomic) BOOL usingMagazineStyle; // @synthesize usingMagazineStyle=_usingMagazineStyle;
- (void)didCancelCaptionEditing;
- (void)didEndCaptionEditingWithString:(id)arg1;
- (void)didBeginCaptionEditing;
- (void)willBeginCaptionEditing;
- (id)initialCaptionEditingString;
- (BOOL)canEditCaption;
- (struct CGRect)contentRectForThumbnail:(id)arg1;
- (struct CGColor *)defaultSelectedIndicationInterspaceColor;
- (struct CGRect)defaultSelectedIndicationFrame;
- (double)defaultSelectedIndicationCornerRadius;
- (double)badgesViewInset;
- (BOOL)thumbnailShowsAsStacked;
- (void)applyLayoutAttributes:(id)arg1;
- (struct CGRect)thumbnailViewFrame;
- (BOOL)usesCaption;
- (id)initWithFrame:(struct CGRect)arg1;

@end

