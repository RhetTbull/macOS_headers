//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface SpeedLimitView : UIView
{
    UIImage *_speedLimitImage;
    UIImage *_dimmedSpeedLimitImage;
    BOOL _useNightMode;
    UIImageView *_speedLimitImageView;
    unsigned long long _speedLimit;
    long long _shieldType;
}

- (void).cxx_destruct;
@property(nonatomic) long long shieldType; // @synthesize shieldType=_shieldType;
@property(nonatomic) unsigned long long speedLimit; // @synthesize speedLimit=_speedLimit;
@property(nonatomic) BOOL useNightMode; // @synthesize useNightMode=_useNightMode;
- (id)_stringWithSpeedLimit:(unsigned long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_updateShield;
@property(readonly, nonatomic) BOOL hasContent;
- (void)setSpeedLimit:(unsigned long long)arg1 shieldType:(long long)arg2;
@property(readonly, nonatomic) UIImageView *speedLimitImageView; // @synthesize speedLimitImageView=_speedLimitImageView;
- (void)didMoveToWindow;
@property(readonly, nonatomic) long long shieldSize;
- (void)_maps_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

