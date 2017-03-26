//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNMacSlideNavigatorSlideLayer.h"

@class CALayer, NSString;

@interface KNMacMasterSlideNavigatorSlideLayer : KNMacSlideNavigatorSlideLayer
{
    CALayer *mMasterNameLayer;
}

+ (double)maxOneLineWidthForNavigatorWidth:(double)arg1;
+ (id)attributedMasterNameStringForName:(id)arg1 isSelectedAndWindowIsInFocus:(BOOL)arg2;
+ (id)p_attributedMasterNameStringAttributesWithTextColor:(id)arg1;
- (void)addWaveAnimationWithScale:(double)arg1 offset:(struct CGSize)arg2 zPosition:(double)arg3 addPerspectiveProjection:(BOOL)arg4;
- (void)endDragOperation;
- (void)slideWasDraggedWithIndexInStack:(unsigned long long)arg1 thumbnailImageSizeOverride:(struct CGSize)arg2;
@property(nonatomic) NSString *masterName;
- (void)setMasterNameHidden:(BOOL)arg1;
- (BOOL)isMasterNameHidden;
- (BOOL)hitTestMasterNameAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) BOOL p_readyToLayout;
- (struct CGRect)p_masterNameFrameForNavigatorWidth:(double)arg1 attributedMasterName:(id)arg2;
- (struct CGRect)p_masterNameFrameForNavigatorWidth:(double)arg1 masterName:(id)arg2;
- (id)p_masterNameLayerImageForAttributedMasterName:(id)arg1 masterNameSize:(struct CGSize)arg2;
- (void)p_updateMasterNameLayerContentsIfNeededWithNavigatorWidth:(double)arg1 screenScaleDidChange:(BOOL)arg2 selectionStateDidChange:(BOOL)arg3;
@property(readonly, nonatomic) struct CGRect masterNameFrame;
- (struct CGRect)thumbnailFrame;
- (struct CGRect)p_thumbnailFrameForNavigatorWidth:(double)arg1;
- (double)disclosureIndicatorHorizontalOffset;
- (struct CGSize)slideNumberOffset;
@property(readonly, nonatomic) double p_leftMarginForMasterName;
- (double)p_marginForCenteredSlideThumbnailWithThumbnailFrame:(struct CGRect)arg1;
- (id)slideNumberLayerImageForSlideNumber:(unsigned long long)arg1 selected:(BOOL)arg2;
- (void)addDeletionAnimationWithDelegate:(id)arg1 duration:(double)arg2 attributes:(id)arg3 forKey:(id)arg4;
- (void)setSelectionState:(unsigned long long)arg1;
- (void)setSlideData:(id)arg1;
- (void)setScreenScale:(double)arg1;
- (double)slideLayerHeightForSlideNavigatorWidth:(double)arg1;
- (void)layoutSublayers;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithElementCache:(id)arg1;

@end

