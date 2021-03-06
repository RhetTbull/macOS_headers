//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HUCircleView, HULegibilityLabel, NSString, UIColor, UIImageView;

@interface HUCameraStatusOverlayView : UIView
{
    BOOL _isDisplayingForSingleCamera;
    BOOL _didUpdateConstraints;
    NSString *_statusString;
    UIColor *_statusColor;
    HULegibilityLabel *_statusLabel;
    HUCircleView *_statusIndicator;
    UIImageView *_alertBadge;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *alertBadge; // @synthesize alertBadge=_alertBadge;
@property(nonatomic) BOOL didUpdateConstraints; // @synthesize didUpdateConstraints=_didUpdateConstraints;
@property(retain, nonatomic) HUCircleView *statusIndicator; // @synthesize statusIndicator=_statusIndicator;
@property(retain, nonatomic) HULegibilityLabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) BOOL isDisplayingForSingleCamera; // @synthesize isDisplayingForSingleCamera=_isDisplayingForSingleCamera;
@property(retain, nonatomic) UIColor *statusColor; // @synthesize statusColor=_statusColor;
@property(copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
- (id)_chevronImage;
- (id)_exclamationImage;
- (void)updateStatusLabelBounds;
- (void)setBadgeStatus:(unsigned long long)arg1;
- (void)updateStatusForCameraProfile:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

