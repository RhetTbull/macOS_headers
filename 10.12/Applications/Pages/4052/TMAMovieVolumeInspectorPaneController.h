//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorPaneController.h"

@class NSButton, TMAMultipleValuesSlider;

@interface TMAMovieVolumeInspectorPaneController : TMAInspectorPaneController
{
    NSButton *_minimumVolumeButton;
    NSButton *_maximumVolumeButton;
    TMAMultipleValuesSlider *_volumeSlider;
}

@property(nonatomic) TMAMultipleValuesSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(nonatomic) NSButton *maximumVolumeButton; // @synthesize maximumVolumeButton=_maximumVolumeButton;
@property(nonatomic) NSButton *minimumVolumeButton; // @synthesize minimumVolumeButton=_minimumVolumeButton;
- (void)changeMovieVolumeToMaximum:(id)arg1;
- (void)changeMovieVolumeToMinimum:(id)arg1;
- (id)nibName;

@end

