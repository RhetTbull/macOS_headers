//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MapsThemeLabel, NSLayoutConstraint, NSString, TransitDirectionsColoredLine, TransitVehiclePositionAnnotationView, UIImageView, UILabel, UIView;
@protocol GEOTransitLine, GEOTransitTripStop;

__attribute__((visibility("hidden")))
@interface TransitSchedulesStopViewCell : UICollectionViewCell
{
    unsigned long long _linkColorStyleType;
    NSLayoutConstraint *_vehicleImageViewVerticalConstraint;
    NSString *_placeholderString;
    BOOL _highlightStation;
    MapsThemeLabel *_primaryTextLabel;
    UILabel *_timeLabel;
    UIView *_connectingTransitSystemImagesContainerView;
    UIView *_stationLinkContainerView;
    UIImageView *_stationLinkImageView;
    TransitDirectionsColoredLine *_topLinkView;
    TransitDirectionsColoredLine *_bottomLinkView;
    TransitDirectionsColoredLine *_collapsedLinkView;
    TransitVehiclePositionAnnotationView *_vehicleImageView;
    unsigned long long _stopType;
    id <GEOTransitLine> _transitLine;
    id <GEOTransitTripStop> _transitTripStop;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <GEOTransitTripStop> transitTripStop; // @synthesize transitTripStop=_transitTripStop;
@property(retain, nonatomic) id <GEOTransitLine> transitLine; // @synthesize transitLine=_transitLine;
@property(nonatomic) unsigned long long stopType; // @synthesize stopType=_stopType;
@property(retain, nonatomic) TransitVehiclePositionAnnotationView *vehicleImageView; // @synthesize vehicleImageView=_vehicleImageView;
@property(retain, nonatomic) TransitDirectionsColoredLine *collapsedLinkView; // @synthesize collapsedLinkView=_collapsedLinkView;
@property(retain, nonatomic) TransitDirectionsColoredLine *bottomLinkView; // @synthesize bottomLinkView=_bottomLinkView;
@property(retain, nonatomic) TransitDirectionsColoredLine *topLinkView; // @synthesize topLinkView=_topLinkView;
@property(retain, nonatomic) UIImageView *stationLinkImageView; // @synthesize stationLinkImageView=_stationLinkImageView;
@property(retain, nonatomic) UIView *stationLinkContainerView; // @synthesize stationLinkContainerView=_stationLinkContainerView;
@property(retain, nonatomic) UIView *connectingTransitSystemImagesContainerView; // @synthesize connectingTransitSystemImagesContainerView=_connectingTransitSystemImagesContainerView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MapsThemeLabel *primaryTextLabel; // @synthesize primaryTextLabel=_primaryTextLabel;
@property(nonatomic, getter=isHighlightedStation) BOOL highlightStation; // @synthesize highlightStation=_highlightStation;
- (id)primaryTextColor;
- (id)departureTimeColor;
- (void)updatePrimaryTextFont;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTransitLinks;
- (void)setTransitLine:(id)arg1 withTransitTripStop:(id)arg2 stopType:(unsigned long long)arg3 placeholderText:(id)arg4 colorStyleType:(unsigned long long)arg5 vehiclePosition:(unsigned long long)arg6 showTimeZone:(BOOL)arg7;
- (void)createVehicleImageView;
- (void)setTransitLine:(id)arg1 withTransitTripStop:(id)arg2 stopType:(unsigned long long)arg3 colorStyleType:(unsigned long long)arg4 vehiclePosition:(unsigned long long)arg5 showTimeZone:(BOOL)arg6;
- (void)setTransitLine:(id)arg1 withPlaceholderText:(id)arg2 colorStyleType:(unsigned long long)arg3;
- (id)createStationLinkSubview;
- (void)prepareForReuse;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

