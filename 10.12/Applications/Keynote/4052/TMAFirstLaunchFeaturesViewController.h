//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAFirstLaunchBaseViewController.h"

@class NSArray, NSBox, TMAFirstLaunchFeatureItemView, TMAFirstLaunchHorizontallyCenteredView;

@interface TMAFirstLaunchFeaturesViewController : TMAFirstLaunchBaseViewController
{
    double _horizontalLineWidth;
    TMAFirstLaunchHorizontallyCenteredView *_titleContainerView;
    NSBox *_horizontalLine;
    TMAFirstLaunchFeatureItemView *_featureItemView1;
    TMAFirstLaunchFeatureItemView *_featureItemView2;
    TMAFirstLaunchFeatureItemView *_featureItemView3;
    TMAFirstLaunchFeatureItemView *_featureItemView4;
    TMAFirstLaunchFeatureItemView *_featureItemView5;
}

@property(nonatomic) TMAFirstLaunchFeatureItemView *featureItemView5; // @synthesize featureItemView5=_featureItemView5;
@property(nonatomic) TMAFirstLaunchFeatureItemView *featureItemView4; // @synthesize featureItemView4=_featureItemView4;
@property(nonatomic) TMAFirstLaunchFeatureItemView *featureItemView3; // @synthesize featureItemView3=_featureItemView3;
@property(nonatomic) TMAFirstLaunchFeatureItemView *featureItemView2; // @synthesize featureItemView2=_featureItemView2;
@property(nonatomic) TMAFirstLaunchFeatureItemView *featureItemView1; // @synthesize featureItemView1=_featureItemView1;
@property(nonatomic) NSBox *horizontalLine; // @synthesize horizontalLine=_horizontalLine;
@property(nonatomic) TMAFirstLaunchHorizontallyCenteredView *titleContainerView; // @synthesize titleContainerView=_titleContainerView;
@property(nonatomic) double horizontalLineWidth; // @synthesize horizontalLineWidth=_horizontalLineWidth;
@property(readonly, nonatomic) NSArray *featureItemViews;
- (void)loadView;
- (id)init;

@end

