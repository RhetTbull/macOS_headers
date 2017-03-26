//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXBadgeTrackingView.h"

#import "IPXBadgeDisplaying-Protocol.h"

@class NSImageView, NSProgressIndicator, NSString, NSVisualEffectView, RDVersion;

@interface IPXLivePhotoBadge : IPXBadgeTrackingView <IPXBadgeDisplaying>
{
    struct CGSize _size;
    NSVisualEffectView *_backgroundView;
    NSImageView *_imageView;
    NSProgressIndicator *_progressIndicator;
    unsigned long long badgeDisplayStyle;
}

+ (BOOL)isBadgeableVersion:(id)arg1 inDisplayStyle:(unsigned long long)arg2;
+ (BOOL)isBadgeableVersion:(id)arg1 itemController:(id)arg2 inDisplayStyle:(unsigned long long)arg3;
@property(nonatomic) unsigned long long badgeDisplayStyle; // @synthesize badgeDisplayStyle;
- (void).cxx_destruct;
- (BOOL)isAnimatableBadge;
@property(readonly, nonatomic) BOOL isRequired;
- (void)_updateDisplayedBadgeWithUpToDateStatus:(BOOL)arg1;
- (void)_delayedUpdateDisplayedBadgeWithVersion:(id)arg1;
- (void)updateDisplayedBadgeWithVersion:(id)arg1;
- (void)viewDidChangeBackingProperties;
- (void)_setupSubviews;
- (void)_commonInit;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) RDVersion *representedVersion;
@property(readonly) Class superclass;

@end

