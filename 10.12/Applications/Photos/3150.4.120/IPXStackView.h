//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IPXPhotoDecoration, NSArray, NSImage, NSImageView, NSPointerArray;

@interface IPXStackView : NSView
{
    struct CGAffineTransform _transforms[3];
    char _imageHidden[3];
    BOOL _combinesPhotoDecorations;
    BOOL _needsDynamicLayout;
    unsigned long long _style;
    IPXPhotoDecoration *_photoDecoration;
    long long _numberOfVisibleItems;
    NSImage *_emptyPlaceholderImage;
    long long _numberOfViews;
    NSArray *_photoViews;
    NSPointerArray *_imageSizes;
    NSArray *_photoDecorationVariants;
    NSImageView *_combinedPhotoDecorationImageView;
    struct CGSize _stackSize;
    struct UXOffset _stackOffset;
    struct UXOffset _stackPerspectiveOffset;
    struct CGPoint _stackPerspectiveFactor;
    struct NSEdgeInsets _stackPerspectiveInsets;
}

+ (long long)maximumNumberOfVisibleImagesForStyle:(unsigned long long)arg1;
+ (long long)maximumNumberOfVisibleItemsForStyle:(unsigned long long)arg1;
@property(nonatomic) BOOL needsDynamicLayout; // @synthesize needsDynamicLayout=_needsDynamicLayout;
@property(retain, nonatomic) NSImageView *combinedPhotoDecorationImageView; // @synthesize combinedPhotoDecorationImageView=_combinedPhotoDecorationImageView;
@property(copy, nonatomic) NSArray *photoDecorationVariants; // @synthesize photoDecorationVariants=_photoDecorationVariants;
@property(readonly, nonatomic) NSPointerArray *imageSizes; // @synthesize imageSizes=_imageSizes;
@property(readonly, nonatomic) NSArray *photoViews; // @synthesize photoViews=_photoViews;
@property(readonly, nonatomic) long long numberOfViews; // @synthesize numberOfViews=_numberOfViews;
@property(retain, nonatomic) NSImage *emptyPlaceholderImage; // @synthesize emptyPlaceholderImage=_emptyPlaceholderImage;
@property(nonatomic) long long numberOfVisibleItems; // @synthesize numberOfVisibleItems=_numberOfVisibleItems;
@property(nonatomic) struct CGPoint stackPerspectiveFactor; // @synthesize stackPerspectiveFactor=_stackPerspectiveFactor;
@property(nonatomic) struct UXOffset stackPerspectiveOffset; // @synthesize stackPerspectiveOffset=_stackPerspectiveOffset;
@property(nonatomic) struct NSEdgeInsets stackPerspectiveInsets; // @synthesize stackPerspectiveInsets=_stackPerspectiveInsets;
@property(nonatomic) struct UXOffset stackOffset; // @synthesize stackOffset=_stackOffset;
@property(nonatomic) struct CGSize stackSize; // @synthesize stackSize=_stackSize;
@property(nonatomic) BOOL combinesPhotoDecorations; // @synthesize combinesPhotoDecorations=_combinesPhotoDecorations;
@property(retain, nonatomic) IPXPhotoDecoration *photoDecoration; // @synthesize photoDecoration=_photoDecoration;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_updateDynamicLayout;
- (void)_setNeedsDynamicLayout;
- (id)_combinedPhotoDecorationsImage;
- (void)_getCenter:(struct CGPoint *)arg1 bounds:(struct CGRect *)arg2 forPhotoViewAtIndex:(long long)arg3;
- (void)_rebuildDecorationVariants;
- (id)newLayoutAttributesForVisbleItemsRelativeToView:(id)arg1;
- (id)newLayoutAttributesForItemAtIndex:(long long)arg1 relativeToView:(id)arg2;
- (BOOL)wouldCoverAllItemsInStackView:(id)arg1;
@property(readonly, nonatomic) NSArray *stackItemViews;
- (struct CGRect)frameOfFrontStackItemRelativeToView:(id)arg1;
- (void)setVideoBannerVisible:(BOOL)arg1 duration:(double)arg2 isSlalom:(BOOL)arg3 forItemAtIndex:(long long)arg4;
- (void)setImageHidden:(BOOL)arg1 forItemAtIndex:(long long)arg2;
- (BOOL)isImageHiddenForItemAtIndex:(long long)arg1;
- (void)setAlpha:(double)arg1 forItemAtIndex:(long long)arg2;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setImageSize:(struct CGSize)arg1 forItemAtIndex:(long long)arg2;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

